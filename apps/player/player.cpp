#include <SPI.h>
#include <GD.h>
//#include "flappyBird.h"
#include "sprites.h"
#include "image.h"

#define P1_LEFT   bitMap[0]&1 
#define P1_DOWN   bitMap[0]&2 
#define P1_UP     bitMap[0]&4 
#define P1_RIGHT  bitMap[0]&8 
 
#define P2_LEFT   bitMap[1]&1 
#define P2_DOWN   bitMap[1]&2 
#define P2_UP     bitMap[1]&4 
#define P2_RIGHT  bitMap[1]&8 
  
#define P1_B4     bitMap[2]&1 
#define P1_B1     bitMap[2]&2 
#define P1_B3     bitMap[2]&4 
#define P1_B2     bitMap[2]&8 
  
#define P2_B4     bitMap[3]&1 
#define P2_B1     bitMap[3]&2 
#define P2_B3     bitMap[3]&4 
#define P2_B2     bitMap[3]&8 



//PINOS NO ARDUINO
#define ROW0 0 //FIO VERDE
#define ROW1 1 //FIO VERMELHO
#define ROW2 2 //FIO ROXO
#define ROW3 3 //FIO OU MARRINZA

#define COL0 4 //FIO VERDE - JOYSTICK LEFT
#define COL1 5 //FIO AMARELO - JOYSTICK UP
#define COL2 6 //FIO PRETO - JOYSTICK DOWN
#define COL3 7 // FIO LARANJA - JOYSTICK RIGHT


// Matriz do mapa

map[][] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

long lastAnimTime = 0;
int animTime = 50;


// Draws map
// Obs.: code is just an example
void draw_map()
{
	//                .  ?  i  n  k  b  r  q  ?  I  ?  N  K  B  R  Q
	byte xlat[] = { 0, 0, 0, 1, 5, 2, 3, 4, 0, 6, 0, 7, 11,8, 9,10 };

	for (int i = 0; i < MOVETIME; i++) {
		GD.cmd_gradient(0, 0, 0x101010, 480, 272, 0x202060);
		GD.cmd_bgcolor(0x101020);

		GD.Begin(BITMAPS);
		GD.SaveContext();
		GD.ColorRGB(0xfff0c0);
		GD.ColorA(0xc0);
		GD.cmd_scale(F16(32), F16(32));
		GD.cmd_setmatrix();
		GD.Vertex2ii(32, 8, 1, 0);
		GD.RestoreContext();

		int moving = -1;
		if (c[0])
			moving = 16 * ('8' - c[3]) + (c[2] - 'a');

		GD.Begin(BITMAPS);
		GD.ColorRGB(0xe0e0e0);
		for (int y = 0; y < 8; y++)
			for (int x = 0; x < 8; x++) {
				int pos = 16 * y + x;
				byte piece = b[pos] & 15;
				if (pos != moving && piece != 0)
					GD.Vertex2ii(32 + 32 * x, 8 + 32 * y, 0, xlat[piece]);
			}

		if (c[0]) {
			GD.Begin(BITMAPS);
			byte piece = b[moving] & 15;
			GD.Cell(xlat[piece]);
			GD.ColorA((255 / OVERSAMPLE) + 50);
			int x0, y0, x1, y1;
			p2(x0, y0, c + 0);
			p2(x1, y1, c + 2);
			GD.ColorRGB(0xffffff);
			for (int j = 0; j < OVERSAMPLE; j++) {
				byte linear = 255 * (i * OVERSAMPLE + j) / (OVERSAMPLE * MOVETIME - 1);
				byte scurve = sinus(linear);
				int x = x0 + (long)(x1 - x0) * scurve / 255;
				int y = y0 + (long)(y1 - y0) * scurve / 255;

				GD.Vertex2f(x, y);
			}
			GD.ColorA(255);
		}

		GD.ColorRGB((k == 16) ? 0xffffffUL : 0x606060);
		GD.cmd_clock(384, 60, 50, OPT_FLAT | OPT_NOSECS, 0, 0, clocks[0], 0);
		GD.ColorRGB((k != 16) ? 0xffffffUL : 0x606060);
		GD.cmd_clock(384, 272 - 60, 50, OPT_FLAT | OPT_NOSECS, 0, 0, clocks[1], 0);

		GD.ColorRGB(0xffffff);
		GD.cmd_text(384, 136, 30, OPT_CENTER, c);

		GD.swap();
	}
}

void readn(byte *dst, unsigned int addr, int c)
{
	GD.__start(addr);
	while (c--)
		*dst++ = SPI.transfer(0);
	GD.__end();
}

static byte coll[256];
static void load_coll()
{
	while (GD.rd(VBLANK) == 0);  // Wait until vblank
	while (GD.rd(VBLANK) == 1);  // Wait until display
	while (GD.rd(VBLANK) == 0);  // Wait until vblank
	readn(coll, COLLISION, sizeof(coll));
}

char previousPressedKey;
boolean hasReleasedKey = false;

const byte ROWS = 4 ; // Four rows
const byte COLS = 4; // Three columns

byte rowPins[ROWS] = {ROW0,ROW1,ROW2, ROW3};
byte colPins[COLS] = {COL0, COL1, COL2, COL3};

char keys[ROWS][COLS]={
  {'0','1','2','3'},
  {'4','5','6','7'},
  {'8','9','A','B'},
  {'C','D','E','F'},
};

/*VERDE PINO 0
  {'P1 - LEFT','P1 - DOWN','P1 - UP','P1 - RIGHT'},    
  {P2-LEFT,P2-DOWN,P2-UP',P2-RIGHT},   
  {'P1-GREEN-RIGHT','P1-BLUE','P1 - GREEN_LEFT','P1 - RED'},    
  {'P2-GREEN_RIGHT','P2-BLUE','P1-GREEN_LEFT','P2 - RED'},    
  */

//Keypad player = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

// -----------------------------> Biblioteca de Controles de Teclado <------------------------

static void controller_init() {
	// Configure input pins with internal pullups
	byte i;
	for (i = 2; i < 7; i++) {
		pinMode(i, INPUT);
		digitalWrite(i, HIGH);
	}
	// Drive pin 7 low
	pinMode(7, OUTPUT);
	digitalWrite(7, 0);
}

#define CONTROL_LEFT  1
#define CONTROL_RIGHT 2
#define CONTROL_UP    4
#define CONTROL_DOWN  8
#define CONTROL_SPACE 16

static byte controller_sense() {
	byte r = 0;
	if (!digitalRead(2))
		r |= CONTROL_SPACE;
	if (!digitalRead(3))
		r |= CONTROL_RIGHT;
	if (!digitalRead(5))
		r |= CONTROL_DOWN;
	if (!digitalRead(4))
		r |= CONTROL_UP;
	if (!digitalRead(6))
		r |= CONTROL_LEFT;
	return r;
}

struct WalterWhite{
int x;
int y;
int rot;
int anim;
};

static struct WalterWhite W1, W2;

void setup()
{
  GD.begin();
 
  for (byte y = 0; y < 37; y++)
    GD.copy(RAM_PIC + y * 64, image_pic + y * 49, 49);
  GD.copy(RAM_CHR, image_chr, sizeof(image_chr));
  GD.copy(RAM_PAL, image_pal, sizeof(image_pal));

  GD.copy(PALETTE4A, sprite_sprpal, sizeof(sprite_sprpal));
  GD.copy(RAM_SPRIMG, sprite_sprimg, sizeof(sprite_sprimg));


  GD.wr(JK_MODE, 0);
  
  W1.x = 100;
  W1.y = 190;
  W1.rot = 0;
  W1.anim = 0;

  
  W2.x = 200;
  W2.y = 190;
  W2.rot = 0;
  W2.anim = 1;
}

byte spr;

boolean checaColisao()
{
	for (int k = 0; k < 256; k++)
	{
		if (coll[k] != 0xFF) return true;
	}
	return false;
}

void mostraSprite()
{
	spr = 0;
	GD.waitvblank();
    GD.__wstartspr(0);
	bool colliding;
	if (coll[spr/*FALTA UM DETALHE*/] != 0xff)
		colliding = true;
	else
		colliding = false;
	if (checaColisao())
	{
		W1.rot = 1;
		W2.rot = 3;
	}
	//draw_flappyBird(W1.x, W1.y, W1.anim, W1.rot);
	//draw_flappyBird(W2.x, W2.y, W2.anim, W2.rot);

	draw_sprite(W1.x, W1.y, W1.anim, W1.rot);
	draw_sprite(W2.x, W2.y, W2.anim, W2.rot);
	//draw_sprite(W2.x, W2.y, 23, W2.rot);
	
	//for (int anim = 0; anim < FLAPPYBIRD_FRAMES; anim++)
		//draw_flappyBird(random(400), random(300), anim, 0);
    GD.__end();
}

void loop()
{
  byte control = controller_sense(); 
  if(control & CONTROL_LEFT)W1.x--;
  if(control & CONTROL_UP)W1.y--;
  if(control & CONTROL_DOWN)W1.y++;
  if(control & CONTROL_RIGHT)W1.x++;
  
 /* if(player.P2_LEFT)W2.x--;
  if(player.P2_DOWN)W2.y--;
  if(player.P2_UP)W2.y++;
  if(player.P2_RIGHT)W2.x++;
  
  if(player.P1_B1)W1.rot=1;
  if(player.P1_B2)W1.rot=2;
  if(player.P1_B3)W1.rot=3;
  if(player.P1_B4)W1.rot=0;
  
  if(player.P2_B1)W2.rot=0;
  if(player.P2_B2)W2.rot=1;
  if(player.P2_B3)W2.rot=2;
  if(player.P2_B4)W2.rot=3;
 */

  load_coll();
  mostraSprite();

  /*if(millis()-lastAnimTime >= animTime)
  {
    lastAnimTime = millis();
    if(W1.anim==0) W1.anim=1;
    else W1.anim=0;
    W2.anim = !W1.anim;
  }*/

  if (millis() - lastAnimTime >= animTime)
  {
	  lastAnimTime = millis();
	  int image_number = (millis()/1000) % 3;
	  switch (image_number)
	  {
	  case 0:
		  W1.anim = 0;
		  W2.anim = 1;
		  break;
	  case 1:
		  W1.anim = 1;
		  W2.anim = 2;
		  break;
	  case 2:
		  W1.anim = 2;
		  W2.anim = 0;
		  break;
	  }
  }



  
}








#include <SPI.h>
#include <GD.h>
#include <stdlib.h>

#include "platformer.h"
#include "image.h"


// -----------------------------> Variáveis do jogo <------------------------

int mapa[8][24] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};




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


// ---------------------------------> Setup <-------------------------------

void setup()
{
	/*GD.begin();
	GD.copy(RAM_CHR, platformer_chr, sizeof(platformer_chr));
	GD.copy(RAM_PAL, platformer_pal, sizeof(platformer_pal));
	GD.copy(PALETTE16A, sprites_sprpal, sizeof(sprites_sprpal));
	GD.uncompress(RAM_SPRIMG, sprites_sprimg);
	GD.wr(JK_MODE, 1); // Ativando colisao JK*

	controller_init(); // Iniciando o metodo de controle
					   // paleta(); // Configurando a paleta de cores

	int i;
	for (i = 0; i < 256; i++)
		GD.sprite(i, 400, 400, 0, 0, 0);

	for (i = 0; i < 64; i += 8) {
		draw_column(atxy(i, 0));*
	}

	boolean inicio = true;*/
	

	/*
	while (inicio) {
	byte control = controller_sense();
	if (control & CONTROL_SPACE) {
	inicio = false;
	}
	}*/

	// Serial.begin(1000000);
}


// -----------------------------> Loop <------------------------

void loop() {
	

	// Desenha mapa

	GD.__wstartspr(0);
	draw_sprites(10, 10, 5, 0);



	GD.__end();

}
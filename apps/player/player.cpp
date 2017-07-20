#include <SPI.h>
#include <GD.h>
#include <stdlib.h>

#include "platformer.h"
#include "image.h"


// -----------------------------> Variáveis do jogo <------------------------

// Mapa
// [] | [] | [] = Índice | Altura | Largura

const int mapa_x = 24;
const int mapa_y = 9;
const int mapa_z = 3;

int mapa[mapa_z][mapa_y][mapa_x] = {
   {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }},

	{{2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
	{0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 2, 2, 2, 2, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 2 },
	{0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 },
	{2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 }},

	{{ 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
	{0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{3, 0, 0, 0, 0, 0, 3, 3, 3, 3, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 3 },
	{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },
	{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 }}
};

// Índice do mapa atual
int mapa_indice = 0;

// Permite mostrar dois mapas de dois índices distintos na mesma tela
int mapa_indice_incremento = 0;

// Índice do primeiro bloco do mapa no lado esquerdo da tela
int bloco_indice = 0;

// Tela

// Número de blocos na tela
const int num_of_blocks_x = 12;
const int num_of_blocks_y = 9;

// Tamanho da tela

const int size_x = 400;
const int size_y = 300;

// Tamanho dos blocos: 34x34

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
	GD.begin();
	GD.copy(RAM_CHR, platformer_chr, sizeof(platformer_chr));
	GD.copy(RAM_PAL, platformer_pal, sizeof(platformer_pal));
	GD.copy(PALETTE16A, sprites_sprpal, sizeof(sprites_sprpal));
	GD.uncompress(RAM_SPRIMG, sprites_sprimg);
	GD.wr(JK_MODE, 1); // Ativando colisao JK*

	//controller_init(); // Iniciando o metodo de controle
					   // paleta(); // Configurando a paleta de cores

	//int i;
	//for (i = 0; i < 256; i++)
	//	GD.sprite(i, 400, 400, 0, 0, 0);

	//for (i = 0; i < 64; i += 8) {
	//	draw_column(atxy(i, 0));*
	//}

	//boolean inicio = true;
	

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

int count2 = 0;

void loop() {

	// Desenha mapa

	GD.__wstartspr(0);

	for (int i = 0; i < num_of_blocks_x; i++) {
		for (int j = 0; j < num_of_blocks_y; j++) {

			// Aumenta o índice se passar do último elemento de uma matriz para desenhar os elementos da próxima
			mapa_indice_incremento = (i + bloco_indice) / mapa_x;

			// Desenha sprite de acordo com o código que estiver na matriz
			draw_sprites(
				size_x * i / (num_of_blocks_x - 1), 
				size_y * j / (num_of_blocks_y - 1), 
				mapa[mapa_indice + mapa_indice_incremento][j][i + bloco_indice - mapa_indice_incremento * mapa_x], 
				0
			);

		};
	};

	GD.__end();

	count2++;

	if (count2 >= 100000) {
		count2 = 0;

		bloco_indice++;

		if (bloco_indice >= mapa_x) {
			mapa_indice++;
			bloco_indice = 0;
		}

	}
}
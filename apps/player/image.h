#define SPRITES_FRAMES 42
static void draw_sprites(int x, int y, byte anim, byte rot, byte jk = 0)
{
	switch (anim) {

	case 0:
		GD.xsprite(x, y, -8, -16, 0, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 0, 6, rot, jk);
		break;
	case 1:
		GD.xsprite(x, y, -8, -16, 1, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 1, 6, rot, jk);
		break;
	case 2:
		GD.xsprite(x, y, -8, -16, 2, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 2, 6, rot, jk);
		break;
	case 3:
		GD.xsprite(x, y, -8, -16, 3, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 3, 6, rot, jk);
		break;
	case 4:
		GD.xsprite(x, y, -8, -16, 4, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 4, 6, rot, jk);
		break;
	case 5:
		GD.xsprite(x, y, -8, -16, 5, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 5, 6, rot, jk);
		break;
	case 6:
		GD.xsprite(x, y, -8, -16, 6, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 6, 6, rot, jk);
		break;
	case 7:
		GD.xsprite(x, y, -8, -16, 7, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 7, 6, rot, jk);
		break;
	case 8:
		GD.xsprite(x, y, -8, -16, 8, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 8, 6, rot, jk);
		break;
	case 9:
		GD.xsprite(x, y, -8, -16, 9, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 9, 6, rot, jk);
		break;
	case 10:
		GD.xsprite(x, y, -8, -16, 10, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 10, 6, rot, jk);
		break;
	case 11:
		GD.xsprite(x, y, -8, -16, 11, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 11, 6, rot, jk);
		break;
	case 12:
		break;
	case 13:
		break;
	case 14:
		break;
	case 15:
		break;
	case 16:
		break;
	case 17:
		break;
	case 18:
		break;
	case 19:
		break;
	case 20:
		break;
	case 21:
		GD.xsprite(x, y, -8, -16, 12, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 12, 6, rot, jk);
		break;
	case 22:
		GD.xsprite(x, y, -8, -16, 13, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 13, 6, rot, jk);
		break;
	case 23:
		GD.xsprite(x, y, -8, -16, 14, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 14, 6, rot, jk);
		break;
	case 24:
		GD.xsprite(x, y, -8, -16, 15, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 15, 6, rot, jk);
		break;
	case 25:
		GD.xsprite(x, y, -8, -16, 16, 4, rot, jk);
		GD.xsprite(x, y, -8, 0, 16, 6, rot, jk);
		break;
	case 26:
		GD.xsprite(x, y, -8, -16, 17, 4, rot, jk);
		break;
	case 27:
		GD.xsprite(x, y, -8, -16, 17, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 18, 4, rot, jk);
		break;
	case 28:
		GD.xsprite(x, y, -8, -16, 18, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 19, 4, rot, jk);
		break;
	case 29:
		GD.xsprite(x, y, -8, -16, 19, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 20, 4, rot, jk);
		break;
	case 30:
		GD.xsprite(x, y, -8, -16, 20, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 21, 4, rot, jk);
		break;
	case 31:
		GD.xsprite(x, y, -8, -16, 21, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 22, 4, rot, jk);
		break;
	case 32:
		GD.xsprite(x, y, -8, -16, 22, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 23, 4, rot, jk);
		break;
	case 33:
		GD.xsprite(x, y, -8, -16, 23, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 24, 4, rot, jk);
		break;
	case 34:
		GD.xsprite(x, y, -8, -16, 24, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 25, 4, rot, jk);
		break;
	case 35:
		GD.xsprite(x, y, -8, -16, 25, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 26, 4, rot, jk);
		break;
	case 36:
		GD.xsprite(x, y, -8, -16, 26, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 27, 4, rot, jk);
		break;
	case 37:
		GD.xsprite(x, y, -8, -16, 27, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 28, 4, rot, jk);
		break;
	case 38:
		GD.xsprite(x, y, -8, -16, 28, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 29, 4, rot, jk);
		break;
	case 39:
		GD.xsprite(x, y, -8, -16, 29, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 30, 4, rot, jk);
		break;
	case 40:
		GD.xsprite(x, y, -8, -16, 30, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 31, 4, rot, jk);
		break;
	case 41:
		GD.xsprite(x, y, -8, -16, 31, 6, rot, jk);
		GD.xsprite(x, y, -8, 0, 32, 4, rot, jk);
		break;

	}
}

static PROGMEM prog_uchar sprites_sprimg[] = {

	0xc9,  0x41,  0x6c,  0xfb,  0xd7,  0x1f,  0x00,  0xcc,  0x9b,  0xd7,  0x13,  0x00,  0xcd,  0x98,  0x0f,  0x8a,
	0xc1,  0x49,  0xbf,  0x19,  0x33,  0xc1,  0xcb,  0x78,  0xf0,  0x0a,  0x4e,  0x61,  0x22,  0x00,  0x19,  0x0f,
	0xfe,  0x51,  0x82,  0x4f,  0x88,  0x0a,  0x04,  0xb1,  0x22,  0x5c,  0xf0,  0x0f,  0x00,  0xbc,  0x4d,  0x9b,
	0x0e,  0x07,  0x01,  0xd1,  0x78,  0xd0,  0x0c,  0x4e,  0xdc,  0x83,  0x51,  0xc8,  0xe2,  0xce,  0x3d,  0x5c,
	0xf8,  0x0f,  0xde,  0xe1,  0x2a,  0x78,  0x71,  0xf7,  0xef,  0x9f,  0x37,  0xef,  0x70,  0x12,  0x89,  0x82,
	0x97,  0xef,  0xb0,  0x13,  0x3d,  0x02,  0x54,  0x78,  0xf0,  0x1f,  0x04,  0x43,  0xa0,  0x77,  0xef,  0x21,
	0xd8,  0x7c,  0xf8,  0x28,  0x07,  0xe9,  0x31,  0x38,  0x84,  0x80,  0xc8,  0x18,  0x34,  0x82,  0x57,  0x08,
	0x08,  0xde,  0xe1,  0x20,  0x28,  0xc6,  0xc0,  0x0a,  0xa1,  0x5b,  0x8f,  0xef,  0x00,  0xa8,  0x47,  0x77,
	0x7d,  0x0c,  0x5e,  0xba,  0x83,  0x5f,  0x08,  0x08,  0xd7,  0xc1,  0x3f,  0x04,  0x06,  0xe7,  0xf0,  0x1f,
	0x61,  0xdb,  0x48,  0x16,  0xa8,  0x96,  0xf1,  0x2b,  0x47,  0xf4,  0xd1,  0xe6,  0x15,  0xbc,  0x87,  0xc4,
	0x04,  0xd2,  0x13,  0x7c,  0x4a,  0xe4,  0xf8,  0xd6,  0xa3,  0x3d,  0x02,  0x05,  0xaf,  0xf1,  0x19,  0x9c,
	0x82,  0xff,  0xf4,  0x5e,  0x51,  0x7e,  0xfc,  0xa4,  0xa0,  0x06,  0x38,  0x41,  0xd3,  0x53,  0x87,  0x0c,
	0xc6,  0xad,  0x52,  0x7b,  0x6b,  0xd8,  0x4f,  0xba,  0x47,  0xa8,  0xf6,  0xde,  0x54,  0xbd,  0xc2,  0x89,
	0xf6,  0x31,  0x18,  0xfc,  0xc2,  0xe1,  0x04,  0x6a,  0x0d,  0xd1,  0x3b,  0x0c,  0xcf,  0xa8,  0xe0,  0xd3,
	0x29,  0x7c,  0x8f,  0xcf,  0xe8,  0x11,  0x23,  0x92,  0xc3,  0x73,  0x5c,  0x89,  0xb9,  0xc3,  0x4f,  0xf0,
	0x1c,  0xce,  0xc1,  0x79,  0x38,  0xfa,  0xe9,  0x5b,  0x13,  0x24,  0x78,  0x4f,  0xe7,  0x08,  0xd3,  0x9f,

	0x3b,  0x51,  0x79,  0x19,  0x4e,  0xff,  0x93,  0x0f,  0x9f,  0xe0,  0xdf,  0x8d,  0x82,  0xc3,  0x33,  0x08,
	0x3f,  0xfd,  0x26,  0x38,  0x04,  0x8f,  0x7d,  0xd5,  0x9f,  0xa3,  0x73,  0x84,  0x08,  0x02,  0xdd,  0xad,
	0x18,  0xfc,  0x8a,  0xdf,  0x70,  0x9e,  0xbb,  0x6b,  0xa3,  0xc9,  0xcf,  0xed,  0xb5,  0x3b,  0x17,  0xcb,
	0x7a,  0xd0,  0x1f,  0xeb,  0xa5,  0xee,  0xfa,  0x19,  0x7c,  0xfb,  0xe1,  0x65,  0xea,  0x8e,  0xd1,  0x2b,
	0x84,  0xdd,  0xc2,  0x0a,  0x1d,  0x23,  0xe2,  0x62,  0x02,  0x8a,  0x97,  0x35,  0xd9,  0xcf,  0x31,  0x9a,
	0x93,  0xc1,  0xf5,  0x4d,  0x35,  0x80,  0x68,  0x3a,  0xac,  0x7e,  0x72,  0xf7,  0x08,  0xfe,  0x39,  0x21,
	0x78,  0x47,  0x90,  0xbf,  0x7d,  0x35,  0x6f,  0x40,  0x1f,  0xe4,  0x3f,  0x1d,  0x82,  0x75,  0x70,  0x34,
	0xf3,  0x1e,  0xc6,  0x60,  0x70,  0x37,  0xd3,  0x1c,  0xc2,  0x55,  0x78,  0x7e,  0xdf,  0x01,  0xea,  0x3d,
	0xfe,  0x44,  0xde,  0xbc,  0xdf,  0xeb,  0xf0,  0x0a,  0x8e,  0x7d,  0xe2,  0xbd,  0x3c,  0xc7,  0x74,  0x11,
	0xbc,  0xde,  0x4b,  0xf0,  0x3a,  0x19,  0xfe,  0xa3,  0x45,  0xf0,  0xed,  0x59,  0xc1,  0xb3,  0x7f,  0xfc,
	0xa1,  0x67,  0x55,  0x19,  0x9f,  0xd6,  0x7b,  0x0c,  0x21,  0xc1,  0xbb,  0x3c,  0x4e,  0xeb,  0x1e,  0x5d,
	0xb5,  0xaf,  0x66,  0x34,  0x9c,  0x8a,  0xc1,  0xb6,  0x04,  0xfd,  0x80,  0x0f,  0x39,  0x14,  0x97,  0x67,
	0xf3,  0x98,  0x42,  0x21,  0x24,  0x12,  0x44,  0xca,  0x39,  0x1c,  0x82,  0x42,  0x42,  0xf0,  0xea,  0x9b,
	0x11,  0x3c,  0x78,  0x0d,  0xc0,  0x86,  0x19,  0xf0,  0x3e,  0x66,  0xf0,  0x0e,  0x91,  0x63,  0xf8,  0x7b,
	0x8d,  0xc6,  0x10,  0x3e,  0x80,  0x43,  0x68,  0x74,  0x9b,  0x5c,  0x09,  0x7b,  0x01,  0x2e,  0xe7,  0xe0,
	0x55,  0x45,  0x82,  0x7f,  0xed,  0x09,  0xa3,  0xe6,  0x93,  0x4e,  0x70,  0x0b,  0x9d,  0x01,  0xa6,  0x85,

	0x07,  0xf7,  0x42,  0x5c,  0x1e,  0xcd,  0x1f,  0x40,  0x3e,  0x7c,  0x0a,  0x52,  0x31,  0xe6,  0xb3,  0x9f,
	0xf8,  0x70,  0xaf,  0x8d,  0xe5,  0x20,  0xb8,  0x99,  0x31,  0x1e,  0x3c,  0xa3,  0x40,  0x75,  0x68,  0x16,
	0x7a,  0xba,  0x41,  0x80,  0xd2,  0x13,  0x23,  0xcc,  0x7c,  0xe0,  0x01,  0xd9,  0x27,  0x7c,  0x6f,  0xeb,
	0xef,  0xa4,  0x7b,  0x09,  0x04,  0xaf,  0xc0,  0xb8,  0xe2,  0xcb,  0xb6,  0x79,  0xed,  0xab,  0xb8,  0xaf,
	0xf4,  0xca,  0xd3,  0x30,  0x03,  0x87,  0xf1,  0x4f,  0xd1,  0xce,  0xfd,  0x6a,  0x78,  0x9f,  0x58,  0x7c,
	0x82,  0x53,  0x2e,  0x78,  0x9e,  0xa9,  0x21,  0x3f,  0xe5,  0x1f,  0x33,  0x97,  0x63,  0x0b,  0x8e,  0x88,
	0xe2,  0x5a,  0xb2,  0x0e,  0x81,  0xee,  0xe0,  0xc0,  0xff,  0x2d,  0xbe,  0xcf,  0x8f,  0xb5,  0x37,  0xb7,
	0xc7,  0xf7,  0x08,  0x46,  0xc1,  0xeb,  0x05,  0x04,  0xef,  0xcc,  0x11,  0x81,  0x3e,  0x70,  0x08,  0xa8,
	0x96,  0xa1,  0x43,  0x77,  0xb4,  0x0e,  0x3e,  0xf7,  0xe1,  0x2f,  0x27,  0x42,  0xd3,  0x77,  0xb2,  0x19,
	0x45,  0xeb,  0xe6,  0x11,  0x3c,  0xa3,  0xd3,  0x7d,  0x08,  0x3e,  0x01,  0xe8,  0x0b,  0x1c,  0xe7,  0x3c,
	0xfd,  0x1d,  0x7f,  0xe7,  0x7f,  0xfc,  0x57,  0xff,  0x25,  0x3c,  0xfe,  0x87,  0x00,  0x1a,  0x41,  0xde,
	0xa3,  0xfa,  0x00,  0x00,  0x1e,  0xbc,  0x82,  0x00,  0x08,  0x00,  0x7c,  0x50,  0x0c,  0x4e,  0xea,  0x01,
	0x00,  0x08,  0x5e,  0xc0,  0x83,  0x57,  0x70,  0x52,  0x18,  0x3c,  0x02,  0x24,  0xf0,  0xe0,  0x1f,  0x25,
	0x38,  0x84,  0xa8,  0x40,  0x10,  0x2b,  0xc2,  0xc5,  0x78,  0xe4,  0x05,  0x0a,  0x54,  0x38,  0x08,  0x88,
	0xc0,  0xa7,  0x52,  0x70,  0xe4,  0x1e,  0x8c,  0x42,  0x16,  0xf7,  0x0b,  0xd9,  0x3f,  0x82,  0x57,  0xb8,
	0x0a,  0x5e,  0xdc,  0x8f,  0x03,  0x2f,  0x5e,  0xe1,  0x24,  0x12,  0x05,  0x2f,  0x5f,  0x61,  0x27,  0x7a,

	0x04,  0xa8,  0xeb,  0x18,  0x04,  0x43,  0xe0,  0xf5,  0x08,  0xc1,  0xe0,  0xef,  0x43,  0x39,  0x48,  0x8f,
	0xed,  0x2a,  0x03,  0x06,  0x8d,  0xe0,  0x15,  0x02,  0x82,  0x77,  0x38,  0x08,  0x8a,  0x0d,  0x58,  0x95,
	0x02,  0x5f,  0x01,  0x50,  0x81,  0xaa,  0xfa,  0x18,  0xbc,  0x54,  0x05,  0xbf,  0x10,  0x10,  0xae,  0x83,
	0x7f,  0x08,  0x0c,  0xce,  0xe1,  0x3f,  0xc2,  0xb6,  0x91,  0x2c,  0x50,  0x2d,  0x47,  0x50,  0x8e,  0xe8,
	0xa3,  0x7f,  0x29,  0x78,  0x0f,  0x89,  0x09,  0xa4,  0x20,  0xf8,  0x94,  0xc8,  0xf1,  0xad,  0x40,  0x79,
	0x04,  0x0a,  0x5e,  0xe3,  0x33,  0x38,  0x05,  0xff,  0xe9,  0xbd,  0xa2,  0x3c,  0x78,  0x48,  0x41,  0x0d,
	0x70,  0x82,  0xa6,  0xa7,  0x0e,  0x39,  0xad,  0x5b,  0xa5,  0xf2,  0xd6,  0xb0,  0x9f,  0x54,  0x8d,  0x50,
	0xe5,  0xbd,  0xa9,  0x7a,  0x85,  0x13,  0xe5,  0x63,  0x30,  0xf8,  0x85,  0xc3,  0x09,  0xd4,  0x18,  0xa2,
	0x77,  0x18,  0x9e,  0x51,  0xc1,  0xa7,  0x53,  0xf8,  0x1a,  0x9f,  0xd1,  0x23,  0x46,  0x24,  0x87,  0xe7,
	0xb8,  0x12,  0x73,  0x87,  0x87,  0xe0,  0x39,  0x9c,  0x83,  0x73,  0x7f,  0xf4,  0xd0,  0xb7,  0x26,  0x48,
	0xf0,  0x9e,  0xce,  0x11,  0xa6,  0x3f,  0x77,  0xa2,  0xf2,  0x32,  0x9c,  0xfe,  0x27,  0x07,  0x0e,  0xc1,
	0xbf,  0x5b,  0x05,  0x87,  0x67,  0x10,  0x7e,  0xfa,  0x4d,  0x70,  0x08,  0x1e,  0xfb,  0xaa,  0x3f,  0x47,
	0xe7,  0x08,  0x11,  0x04,  0xba,  0x5b,  0x31,  0xf8,  0x15,  0xbf,  0xe1,  0x3c,  0x77,  0xd7,  0x46,  0x93,
	0x9f,  0xdb,  0x6b,  0x77,  0x2e,  0x97,  0xf5,  0xa0,  0x3f,  0xd6,  0x4b,  0x55,  0xf5,  0x33,  0xf8,  0xf6,
	0xc3,  0xcb,  0xd4,  0x1d,  0xab,  0x53,  0x08,  0xbb,  0x85,  0x15,  0x3a,  0x46,  0xc4,  0xc5,  0x04,  0x14,
	0x2f,  0x6b,  0xb2,  0x87,  0x63,  0x34,  0x27,  0x83,  0xeb,  0x9f,  0xba,  0x00,  0xd1,  0xb4,  0x3b,  0xfd,

	0xe4,  0xee,  0x11,  0xfc,  0x73,  0x42,  0xf0,  0x8e,  0x20,  0x7f,  0xfb,  0x6a,  0xde,  0x80,  0x21,  0xc8,
	0x7f,  0x3a,  0x04,  0xeb,  0xe0,  0x08,  0xe0,  0x3d,  0x8c,  0xc1,  0xe0,  0x0e,  0xa0,  0x39,  0x84,  0xab,
	0xf0,  0xfc,  0xbe,  0x3f,  0xd1,  0x7b,  0xfc,  0x89,  0xbc,  0x78,  0xbd,  0xd7,  0xe1,  0x15,  0x1c,  0xfb,
	0xc4,  0x7b,  0x79,  0x8e,  0xe9,  0x22,  0x78,  0xbd,  0x97,  0xe0,  0x75,  0x32,  0xfc,  0x47,  0x8b,  0xe0,
	0xdb,  0xb3,  0x82,  0x67,  0xff,  0xf8,  0x43,  0xcf,  0xaa,  0x32,  0x3e,  0xad,  0xf7,  0x18,  0x42,  0x82,
	0x77,  0x79,  0x9c,  0xd6,  0x3d,  0xba,  0x6a,  0x5f,  0xcd,  0x68,  0x38,  0x15,  0x83,  0x6d,  0x09,  0xfa,
	0x01,  0x1f,  0x72,  0x28,  0x2e,  0xcf,  0xe6,  0x31,  0x85,  0x42,  0x48,  0x24,  0x88,  0x94,  0x73,  0x38,
	0x04,  0x85,  0x84,  0xe0,  0xd5,  0x37,  0x23,  0x78,  0xf0,  0x1a,  0x80,  0x0d,  0x33,  0xe0,  0x7d,  0xcc,
	0xe0,  0x1d,  0x22,  0xc7,  0xf0,  0xf3,  0x1a,  0x8d,  0x21,  0x7c,  0x00,  0x87,  0xd0,  0xe8,  0x36,  0xb9,
	0x12,  0xf6,  0x02,  0x5c,  0xce,  0xc1,  0xab,  0x8a,  0x04,  0xff,  0xda,  0x13,  0x44,  0xc1,  0x27,  0x9d,
	0xe0,  0x16,  0x3a,  0x03,  0x4c,  0x0b,  0x0f,  0xee,  0x85,  0xb8,  0x3c,  0x82,  0x3f,  0x80,  0x1c,  0x38,
	0x14,  0xa4,  0x62,  0xcc,  0xe1,  0x40,  0x71,  0xe0,  0x5e,  0x1b,  0xcb,  0x41,  0x70,  0x03,  0x00,  0x3c,
	0x78,  0x46,  0x81,  0xea,  0xd0,  0x2c,  0x14,  0x74,  0x83,  0x00,  0xa5,  0x20,  0x46,  0x00,  0xf8,  0xc0,
	0x03,  0xb2,  0x4f,  0xf8,  0xda,  0xd6,  0xdf,  0x49,  0xd5,  0x12,  0x08,  0x5e,  0x81,  0x71,  0xc5,  0x97,
	0x6d,  0xf0,  0xca,  0x57,  0x71,  0x5f,  0xe9,  0x95,  0xa7,  0x61,  0x06,  0xf6,  0xed,  0x9f,  0xa2,  0x9c,
	0xfb,  0xd5,  0xf0,  0x3e,  0xb1,  0x38,  0x04,  0xa7,  0x5c,  0xf0,  0x3c,  0x53,  0x43,  0x7e,  0xca,  0x3f,

	0x00,  0x2e,  0xc7,  0x16,  0x1c,  0x11,  0xc5,  0x35,  0x64,  0x1d,  0x02,  0x55,  0xc1,  0x81,  0xff,  0x5b,
	0x7c,  0x8e,  0x3f,  0x6a,  0x6f,  0x6e,  0x8f,  0xef,  0x11,  0x8c,  0x82,  0xd7,  0x0b,  0x08,  0xde,  0x99,
	0x23,  0x02,  0xfd,  0x04,  0xe8,  0xc5,  0xf3,  0x47,  0xaa,  0xfa,  0x02,  0xaa,  0xa2,  0xf5,  0x0f,  0x0c,
	0x9e,  0xf7,  0xe1,  0x2f,  0x27,  0x42,  0x50,  0x77,  0xb2,  0x19,  0x45,  0xeb,  0xe6,  0x11,  0x3c,  0xa3,
	0xd3,  0x7d,  0x08,  0x3e,  0x01,  0xe8,  0x0b,  0x9c,  0xe7,  0x3c,  0xfd,  0x1d,  0x7f,  0xe7,  0x7f,  0xfc,
	0x57,  0xff,  0x25,  0x3c,  0xfe,  0x87,  0x00,  0x1a,  0x41,  0xde,  0xe3,  0x07,  0x60,  0x30,  0x33,  0xcc,
	0x07,  0x00,  0xf6,  0x01,  0xd3,  0x7c,  0x70,  0xf2,  0xc0,  0xc0,  0x43,  0xf0,  0x0c,  0x0e,  0x21,  0x28,
	0x78,  0x07,  0x00,  0x60,  0xe1,  0xea,  0x52,  0x57,  0x07,  0x6f,  0x7e,  0x82,  0xa7,  0xb1,  0x18,  0x18,
	0x34,  0xa3,  0x53,  0xf0,  0x0f,  0xfe,  0x0c,  0x18,  0x00,  0x03,  0x16,  0x75,  0xd8,  0x87,  0xaf,  0xe0,
	0xc0,  0x80,  0x99,  0xb7,  0xa8,  0xcd,  0x3e,  0x00,  0xc4,  0x07,  0x66,  0xcc,  0x82,  0x43,  0xc0,  0x08,
	0xae,  0x21,  0x22,  0x39,  0x78,  0x0b,  0x40,  0x49,  0x27,  0x39,  0x05,  0x20,  0x0f,  0x7e,  0x42,  0x45,
	0x80,  0x0c,  0x80,  0xc1,  0x2b,  0x23,  0x04,  0xcf,  0xe0,  0x58,  0x04,  0x82,  0x77,  0x41,  0x0c,  0xbf,
	0xa1,  0x21,  0x6c,  0x06,  0xa4,  0x20,  0x18,  0x16,  0x13,  0x68,  0xf0,  0x8a,  0x5b,  0x29,  0x3d,  0xfc,
	0x67,  0xb8,  0x8e,  0x90,  0xfe,  0x4a,  0x4b,  0xf7,  0xea,  0xff,  0xc3,  0xd3,  0x03,  0x80,  0xfe,  0x5f,
	0xa2,  0x06,  0x40,  0xf0,  0xe8,  0xff,  0x03,  0x18,  0x40,  0xff,  0x4f,  0x57,  0x3d,  0x20,  0xf8,  0xf7,
	0xc0,  0xe0,  0xdd,  0x7f,  0xba,  0x57,  0xb9,  0x1a,  0x80,  0x43,  0xaa,  0xff,  0x74,  0xcf,  0xf2,  0x10,

	0x3c,  0x42,  0x60,  0x78,  0xed,  0xff,  0xfd,  0x6f,  0x25,  0x78,  0xec,  0xff,  0xdd,  0xbf,  0xff,  0x95,
	0x98,  0xfe,  0xdf,  0xfe,  0xfb,  0xff,  0xfc,  0xee,  0xff,  0x2b,  0xa6,  0xff,  0x4f,  0xd8,  0xfe,  0x7f,
	0x6a,  0xfe,  0x07,  0xfe,  0xf2,  0x1d,  0x28,  0xf0,  0xf7,  0xef,  0xe0,  0x19,  0x84,  0x02,  0x41,  0x68,
	0xae,  0x0f,  0xe3,  0x23,  0x28,  0x05,  0xc7,  0xd0,  0x5c,  0x18,  0xfe,  0x47,  0x70,  0x0a,  0x81,  0x23,
	0xc8,  0x9b,  0xe7,  0xe0,  0x89,  0x2d,  0x5c,  0xb1,  0x1f,  0x2f,  0x9e,  0xff,  0xdf,  0xc0,  0xf8,  0xdf,
	0x8c,  0xff,  0xff,  0xf0,  0xfe,  0x0f,  0xc1,  0xf3,  0xff,  0xff,  0x8f,  0xe1,  0xf4,  0xff,  0xe3,  0xd3,
	0xf0,  0x6f,  0xee,  0xff,  0x23,  0x14,  0x78,  0x0e,  0x00,  0x61,  0x61,  0xfc,  0x05,  0x8f,  0x60,  0x18,
	0x92,  0x9e,  0x75,  0xf0,  0x0e,  0x97,  0xa5,  0x23,  0x04,  0xce,  0xa7,  0xf0,  0xd5,  0x3c,  0xcb,  0x40,
	0x6c,  0xe8,  0x56,  0xf1,  0xbb,  0x7d,  0x25,  0x98,  0xe9,  0x15,  0x44,  0x23,  0xf3,  0xff,  0xea,  0xff,
	0xff,  0xb7,  0xff,  0xff,  0xdf,  0xfe,  0xdf,  0x81,  0xc3,  0x07,  0xb6,  0xfe,  0x7f,  0x03,  0x7b,  0x40,
	0xf0,  0xe8,  0xbf,  0xff,  0x3b,  0x78,  0xf6,  0xbf,  0xff,  0xff,  0xff,  0xdb,  0xd7,  0xff,  0xff,  0xff,
	0xff,  0xff,  0x7f,  0xff,  0xe2,  0xfe,  0x7f,  0x90,  0xfa,  0xff,  0xff,  0xed,  0xff,  0xcd,  0xb7,  0xff,
	0xff,  0xdf,  0xfe,  0xff,  0x7f,  0xfb,  0xff,  0xff,  0xed,  0xff,  0xbf,  0xc9,  0x7e,  0x00,  0x08,  0x98,
	0x81,  0x39,  0xb8,  0xd9,  0xb5,  0x60,  0xc1,  0x6e,  0x08,  0x0d,  0xae,  0x21,  0x2c,  0xb8,  0x78,  0xb0,
	0x60,  0x25,  0x20,  0x84,  0xd0,  0xe0,  0x64,  0x25,  0x3c,  0x84,  0x90,  0xe4,  0x18,  0x1c,  0xbc,  0x44,
	0x03,  0x2f,  0x11,  0x36,  0x3d,  0xf8,  0x9d,  0x0f,  0x61,  0xd3,  0x43,  0x08,  0xf6,  0xe0,  0x37,  0x78,

	0x85,  0x87,  0x60,  0x19,  0x82,  0x42,  0x46,  0xf0,  0x0e,  0x36,  0x81,  0x2a,  0xf8,  0x86,  0xf0,  0xe8,
	0x1b,  0xe1,  0xa3,  0x7f,  0xf4,  0x8f,  0xfe,  0xb1,  0x26,  0x7d,  0x86,  0xe0,  0x28,  0x10,  0x68,  0x5a,
	0x70,  0xd0,  0x0c,  0x08,  0x81,  0x78,  0xd3,  0x06,  0xab,  0x10,  0xd5,  0x9d,  0xfd,  0xf9,  0x0b,  0x98,
	0xe2,  0xc4,  0x07,  0xc0,  0xe0,  0xe2,  0xc7,  0x4f,  0xb0,  0x10,  0x23,  0x26,  0x04,  0xa2,  0x0f,  0x7e,
	0xc1,  0x22,  0x78,  0xa1,  0x0f,  0xfe,  0xc1,  0x27,  0x00,  0xc7,  0x60,  0x32,  0x01,  0x00,  0x1d,  0x7a,
	0xf2,  0xe1,  0x23,  0x86,  0xf8,  0x27,  0x87,  0x06,  0x0d,  0xb9,  0x68,  0x40,  0x3e,  0x04,  0x25,  0x64,
	0xf2,  0xe8,  0xd0,  0x05,  0x93,  0x10,  0x12,  0x86,  0xc2,  0x71,  0x04,  0x0d,  0xbb,  0xd1,  0x23,  0x40,
	0x45,  0xa7,  0x10,  0x1e,  0x7c,  0x22,  0x7c,  0x06,  0x4f,  0x08,  0x31,  0xa6,  0xd9,  0x66,  0x48,  0xf1,
	0xf1,  0x2a,  0x10,  0x84,  0xb7,  0xe0,  0x17,  0xdf,  0x82,  0x7f,  0xfa,  0x0d,  0xfe,  0x39,  0xc8,  0x4b,
	0x00,  0xf0,  0xe1,  0x23,  0x10,  0x06,  0x9a,  0xe0,  0x14,  0xfc,  0x43,  0x55,  0x98,  0xf1,  0x21,  0x22,
	0x00,  0x05,  0x7f,  0x41,  0xc1,  0x4a,  0x10,  0x8a,  0x58,  0xe5,  0x29,  0x00,  0x86,  0x63,  0x11,  0x28,
	0x50,  0x04,  0xad,  0xe0,  0x1f,  0xa1,  0x02,  0x80,  0x27,  0xff,  0x11,  0x90,  0x44,  0x00,  0x08,  0x07,
	0x01,  0x11,  0x51,  0x34,  0xd8,  0x1a,  0xc1,  0x31,  0x18,  0x87,  0x2c,  0x44,  0x88,  0xce,  0xa3,  0x8f,
	0x60,  0x1a,  0xa0,  0x3a,  0x62,  0x70,  0x08,  0x5e,  0xa3,  0x20,  0x46,  0x87,  0x80,  0xe0,  0x33,  0x81,
	0x12,  0x65,  0x50,  0x88,  0x8e,  0x11,  0x68,  0x26,  0x05,  0xdf,  0x06,  0x44,  0x64,  0x21,  0x21,  0x09,
	0x80,  0xc3,  0x2a,  0x38,  0x0a,  0xb9,  0x97,  0xc1,  0xa3,  0x39,  0x85,  0x6b,  0x21,  0x44,  0xc6,  0x55,

	0xb3,  0x0b,  0x3e,  0xe3,  0x81,  0x48,  0x7b,  0x8e,  0x5f,  0x5d,  0x64,  0x50,  0x94,  0xa7,  0xe0,  0x39,
	0x1c,  0x85,  0x04,  0xa0,  0xb6,  0x1d,  0xbc,  0xda,  0x47,  0xf0,  0x4a,  0x1e,  0xc1,  0xc7,  0x7f,  0x77,
	0x0c,  0x4e,  0xe9,  0x33,  0xf8,  0x47,  0xe0,  0x58,  0xd0,  0x1d,  0x12,  0x54,  0x77,  0x29,  0x8e,  0x3e,
	0xee,  0x4b,  0x77,  0x6f,  0x96,  0xc1,  0xb7,  0xbb,  0x20,  0xe9,  0x8e,  0xe5,  0x82,  0x08,  0x92,  0xfe,
	0x12,  0x23,  0xba,  0x53,  0xf0,  0x0e,  0x56,  0xa1,  0xa3,  0x3b,  0xb7,  0x43,  0x22,  0x51,  0xbb,  0x3f,
	0x5d,  0x97,  0x30,  0x30,  0x85,  0x66,  0x50,  0xbf,  0xf1,  0xd2,  0x2d,  0xba,  0x67,  0x77,  0x79,  0x8e,
	0x1f,  0xe2,  0x3b,  0x0e,  0x80,  0xc4,  0x11,  0x7c,  0x82,  0x73,  0xff,  0x1c,  0x04,  0xdd,  0x25,  0xf8,
	0x47,  0xa0,  0x18,  0xdd,  0x1f,  0x9b,  0xc7,  0x7b,  0xaa,  0xce,  0xc1,  0xb3,  0xe9,  0x20,  0x0a,  0x7e,
	0xfd,  0x3a,  0x38,  0xdc,  0x8b,  0xf0,  0x33,  0x1c,  0xc2,  0x73,  0x00,  0x14,  0x21,  0x3e,  0x78,  0x97,
	0x8e,  0x86,  0x80,  0x84,  0x50,  0xf8,  0x40,  0x74,  0x16,  0x12,  0x54,  0x3f,  0x21,  0x14,  0x02,  0x2a,
	0x48,  0xf0,  0x0e,  0x18,  0x11,  0xe2,  0x7d,  0xe7,  0xc7,  0xfe,  0x13,  0x23,  0x5a,  0xe3,  0x77,  0x0c,
	0x9e,  0x4d,  0x29,  0x58,  0x04,  0xa0,  0xf6,  0x19,  0x3c,  0x67,  0xe0,  0xd3,  0x0c,  0x4e,  0xc1,  0x2b,
	0xc6,  0xbc,  0xa3,  0x68,  0x55,  0x51,  0xc6,  0x62,  0x88,  0x68,  0xcf,  0x35,  0xb9,  0x6d,  0x5c,  0x8f,
	0x68,  0x70,  0x3d,  0x9e,  0xc6,  0x06,  0x49,  0x9a,  0x0d,  0xa0,  0x27,  0x06,  0x87,  0x0c,  0x92,  0xb6,
	0x22,  0xe4,  0xe0,  0x08,  0x5e,  0xc3,  0x28,  0x42,  0xc6,  0xa8,  0x59,  0x70,  0x80,  0x02,  0xc8,  0x2f,
	0x1c,  0x82,  0x9e,  0xa6,  0x43,  0x70,  0x0b,  0xde,  0xc1,  0x3d,  0x3c,  0x78,  0x0a,  0xd7,  0xd1,  0x39,

	0x58,  0x06,  0x94,  0x7c,  0xf8,  0x23,  0x02,  0x64,  0xf0,  0x0f,  0xfe,  0xe1,  0x2f,  0x66,  0x84,  0xf7,
	0xe8,  0x95,  0x02,  0xa3,  0xfb,  0x6e,  0xbc,  0x29,  0xfb,  0x23,  0xf8,  0x9f,  0xa0,  0xa2,  0x14,  0xfc,
	0x8b,  0xde,  0xf9,  0xea,  0x00,  0x55,  0xef,  0x1a,  0xfe,  0xcc,  0x1f,  0x55,  0xaf,  0xef,  0x41,  0xb0,
	0x6c,  0x86,  0xf7,  0xa5,  0x05,  0x04,  0xab,  0x80,  0x5b,  0x83,  0xff,  0x67,  0x38,  0xe8,  0xc7,  0xef,
	0xfb,  0x5a,  0x04,  0xa3,  0x90,  0xb5,  0xa2,  0x07,  0x40,  0xc3,  0x0c,  0xd8,  0x0f,  0xf1,  0x63,  0x06,
	0xef,  0x10,  0xe9,  0xe5,  0x60,  0xee,  0x8c,  0xf2,  0xd8,  0x07,  0xbf,  0x95,  0x90,  0x93,  0x35,  0xbd,
	0x8b,  0x44,  0xf0,  0x12,  0xf4,  0x23,  0x11,  0x05,  0xaf,  0xfc,  0xb0,  0x3f,  0x23,  0xe4,  0x66,  0x20,
	0x71,  0x28,  0x8a,  0x73,  0xf0,  0x0c,  0xc8,  0x22,  0x82,  0x77,  0x68,  0x4c,  0x4a,  0x01,  0xe3,  0x37,
	0x7c,  0x84,  0xe0,  0x88,  0x04,  0x05,  0xa1,  0xe0,  0xfd,  0xab,  0x83,  0xf7,  0x73,  0x0c,  0x40,  0xbf,
	0x2a,  0x78,  0x45,  0xc1,  0xe0,  0x49,  0xe2,  0x67,  0x05,  0x8f,  0x7b,  0x90,  0x19,  0x83,  0x25,  0x09,
	0x42,  0x01,  0x20,  0x3e,  0xfa,  0x20,  0x12,  0x38,  0x83,  0x67,  0x78,  0x08,  0x5c,  0x44,  0x4e,  0xa7,
	0xa7,  0x30,  0x10,  0xaf,  0x51,  0x44,  0x8e,  0x20,  0xb1,  0x13,  0x42,  0xa0,  0x90,  0xe1,  0xf8,  0x1f,
	0xa3,  0x24,  0x89,  0xff,  0xf8,  0xaf,  0x82,  0xc1,  0x3f,  0xf8,  0x01,  0x49,  0x61,  0x5b,  0x04,  0xab,
	0xe0,  0x19,  0x2e,  0x42,  0x47,  0x08,  0xdc,  0x68,  0x40,  0x80,  0x80,  0x00,  0x01,  0xa4,  0x73,  0x0c,
	0xdb,  0x60,  0x11,  0xbc,  0xd6,  0xc3,  0xf3,  0x1a,  0x87,  0x90,  0x00,  0x85,  0xa7,  0x8c,  0x11,  0x14,
	0xbe,  0x0f,  0xa0,  0xe0,  0x11,  0x2d,  0x40,  0x00,  0x0a,  0x98,  0xe0,  0x83,  0x37,  0x25,  0x4a,  0x34,

	0x0a,  0x40,  0x40,  0x44,  0xf1,  0xbf,  0xfd,  0x53,  0xaa,  0x16,  0xc1,  0x2b,  0x04,  0x4d,  0xcb,  0xef,
	0x41,  0x29,  0x98,  0x06,  0xaf,  0x94,  0xe1,  0x9f,  0x3e,  0xfd,  0x70,  0x1a,  0x0b,  0x46,  0x62,  0xf0,
	0x1a,  0x82,  0xd1,  0x2b,  0x46,  0x50,  0xa1,  0x52,  0x0c,  0x03,  0x01,  0x8d,  0xb1,  0x14,  0x82,  0x82,
	0xf7,  0x04,  0x88,  0x97,  0x21,  0x7a,  0x7c,  0xfc,  0xd7,  0xb4,  0x8c,  0x9e,  0x46,  0xf5,  0x08,  0x7e,
	0x20,  0x22,  0x42,  0x6a,  0x00,  0x4f,  0xff,  0xbf,  0x46,  0x8f,  0xe0,  0x11,  0x1c,  0x82,  0x67,  0x08,
	0x5a,  0x1f,  0x41,  0x25,  0x90,  0x74,  0xc0,  0xa0,  0x16,  0x4a,  0xfe,  0x83,  0xd7,  0x00,  0xe0,  0xc1,
	0x43,  0x20,  0x0c,  0x34,  0xc1,  0x29,  0xf8,  0x87,  0xaa,  0x30,  0xe3,  0x01,  0x40,  0x00,  0x0a,  0xfe,
	0x80,  0x82,  0x15,  0x20,  0x04,  0xb1,  0xaa,  0x7f,  0x7a,  0x0a,  0xc7,  0x00,  0x10,  0x20,  0x08,  0x5a,
	0xc1,  0x3f,  0x42,  0x4d,  0x89,  0xe1,  0x30,  0x01,  0x29,  0x04,  0x80,  0x70,  0x10,  0x10,  0x11,  0x4d,
	0x83,  0x05,  0x14,  0x4c,  0x42,  0xd6,  0x9b,  0xd8,  0x91,  0x1e,  0x82,  0x69,  0x80,  0x6a,  0x15,  0xc1,
	0x31,  0x78,  0xd1,  0x47,  0x1f,  0xa3,  0x43,  0x40,  0xf0,  0xe9,  0x16,  0xe8,  0xe9,  0x27,  0xca,  0xa0,
	0x10,  0x1d,  0x23,  0x50,  0xf0,  0x44,  0x1f,  0x7c,  0x1b,  0x10,  0xd5,  0xe0,  0x85,  0x34,  0x00,  0x0e,
	0xa8,  0xe0,  0x08,  0x14,  0x3c,  0xf8,  0xe0,  0xd9,  0x9c,  0xc2,  0x35,  0x50,  0xaa,  0xe3,  0xaa,  0xd9,
	0x05,  0x9f,  0x91,  0x41,  0xb5,  0x3d,  0xc7,  0xaf,  0x2e,  0x32,  0x28,  0xca,  0x53,  0xf0,  0x1c,  0x8e,
	0x40,  0x03,  0x50,  0xdb,  0x0e,  0x5e,  0xed,  0x23,  0x78,  0x25,  0x8f,  0xe0,  0xe3,  0xbf,  0x3b,  0x06,
	0xa7,  0xf4,  0x19,  0xfc,  0x23,  0x70,  0xcc,  0xe8,  0x0e,  0x09,  0xaa,  0xbb,  0x14,  0x47,  0x0f,  0xc9,

	0xe9,  0x07,  0x74,  0xf7,  0x66,  0x19,  0x7c,  0xbb,  0x0b,  0xd2,  0xee,  0x58,  0x2e,  0xa8,  0x22,  0xed,
	0x2f,  0x31,  0xa2,  0x3b,  0x05,  0xef,  0x60,  0x15,  0x3a,  0xba,  0x73,  0x3b,  0xa4,  0x1a,  0xb5,  0xfb,
	0xd3,  0x75,  0x09,  0x03,  0x53,  0x68,  0x06,  0xf5,  0x1b,  0xaf,  0xdd,  0xa2,  0x7b,  0x76,  0x97,  0xe7,
	0xf8,  0x21,  0xbe,  0xe3,  0x00,  0x48,  0x1c,  0xc1,  0x27,  0x38,  0xf7,  0xcf,  0x41,  0xd0,  0x5d,  0x82,
	0x7f,  0x04,  0x8a,  0xd1,  0xfd,  0xb1,  0x39,  0xbc,  0xa7,  0xea,  0xdc,  0x3f,  0x9b,  0x0e,  0xa2,  0xe0,
	0xd7,  0xaf,  0x83,  0xc3,  0xbd,  0x08,  0x3f,  0xc3,  0x21,  0x3c,  0x07,  0x40,  0x00,  0xe0,  0x83,  0x77,
	0xe9,  0x68,  0x08,  0x48,  0x29,  0x85,  0x0f,  0x44,  0x67,  0x21,  0x41,  0xf5,  0x13,  0x4a,  0x21,  0xa0,
	0x82,  0x04,  0xef,  0x87,  0x10,  0x21,  0xde,  0xf7,  0x70,  0xec,  0x3f,  0x31,  0xa2,  0x35,  0x7e,  0xc7,
	0xe0,  0xd9,  0x94,  0x82,  0x45,  0x00,  0x6a,  0x9f,  0xc1,  0x73,  0x02,  0x3e,  0xcd,  0xe0,  0x14,  0xbc,
	0x62,  0xcc,  0x3b,  0x8a,  0x56,  0x15,  0x65,  0x2c,  0x86,  0x88,  0xee,  0x5c,  0x93,  0xdb,  0x46,  0xf5,
	0x88,  0x06,  0xd7,  0xe3,  0x69,  0x6c,  0x90,  0xa4,  0xf9,  0x00,  0x7a,  0x62,  0x70,  0xc8,  0x20,  0x69,
	0x2b,  0x42,  0x0e,  0x8e,  0xe0,  0x35,  0x8c,  0x22,  0x64,  0x8c,  0x9a,  0x05,  0x07,  0x28,  0x80,  0xfc,
	0xc2,  0x21,  0xe8,  0x69,  0x3a,  0x04,  0xb7,  0xe0,  0x1d,  0xdc,  0xc3,  0x83,  0xa7,  0x70,  0x1d,  0x9d,
	0x83,  0x65,  0x40,  0xc9,  0x87,  0x3f,  0x22,  0x40,  0x06,  0xff,  0xe0,  0x1f,  0xfe,  0x62,  0x46,  0x78,
	0x8f,  0x5e,  0x29,  0x30,  0xba,  0xef,  0xc6,  0x9b,  0xb2,  0x3f,  0x82,  0x7f,  0xcb,  0x2a,  0x4a,  0xc1,
	0xbf,  0xe8,  0x9d,  0xaf,  0x0e,  0x50,  0xf5,  0xae,  0xe1,  0xcf,  0xfc,  0x51,  0xf5,  0xfa,  0x1e,  0x04,

	0xcb,  0x66,  0x78,  0x5f,  0x5a,  0x40,  0xb0,  0x0a,  0xb8,  0x35,  0xf8,  0x7f,  0x86,  0x83,  0x7e,  0xfc,
	0xbe,  0xaf,  0x45,  0x30,  0x0a,  0x59,  0x2b,  0x7a,  0x00,  0x34,  0xcc,  0x80,  0xfd,  0x10,  0x3f,  0x66,
	0xf0,  0x0e,  0x91,  0x5e,  0x0f,  0xe6,  0xce,  0x28,  0x8f,  0x7d,  0xf0,  0x5b,  0x01,  0x3d,  0x59,  0xd3,
	0xbb,  0x48,  0x04,  0x2f,  0x40,  0x3f,  0x12,  0xd1,  0xfc,  0xca,  0x0f,  0xfb,  0x33,  0x42,  0x6e,  0x06,
	0x0a,  0x87,  0xa2,  0x38,  0x07,  0xcf,  0x80,  0x0c,  0x20,  0x78,  0x87,  0xc6,  0xa4,  0x14,  0x30,  0x7e,
	0xc3,  0x47,  0x08,  0x8e,  0x48,  0x11,  0x50,  0x0a,  0xde,  0xbf,  0x3a,  0x78,  0x3f,  0xc7,  0x00,  0xf4,
	0xab,  0x82,  0x57,  0x14,  0x0c,  0x9e,  0x14,  0x7e,  0x56,  0xf4,  0xb8,  0x07,  0x99,  0x31,  0x58,  0x52,
	0xa0,  0x14,  0x00,  0xe2,  0xa3,  0x07,  0xaa,  0x81,  0x33,  0x78,  0x86,  0x87,  0xc0,  0x45,  0xf5,  0x74,
	0x7a,  0x0a,  0x03,  0xf1,  0x1a,  0x41,  0xe4,  0x08,  0x12,  0x07,  0x21,  0x04,  0x02,  0x1d,  0x8e,  0xff,
	0x31,  0x4a,  0x52,  0xf8,  0x8f,  0xff,  0x2a,  0x18,  0xfc,  0x83,  0x1f,  0x90,  0x14,  0xb6,  0x45,  0xb0,
	0x0a,  0x9e,  0xe1,  0x22,  0x74,  0x84,  0xc0,  0x8d,  0xf6,  0xbf,  0x3b,  0xc7,  0xb0,  0x0d,  0xbe,  0x7b,
	0x20,  0x78,  0x0d,  0x9d,  0xf3,  0x3d,  0x0e,  0xbf,  0xcf,  0x49,  0xfa,  0x45,  0xff,  0xff,  0xff,  0xbf,
	0x87,  0x0f,  0xf8,  0xfd,  0x93,  0x23,  0xf8,  0xb9,  0x70,  0x17,  0xde,  0xcf,  0x2d,  0x9c,  0x02,  0x67,
	0x32,  0xf8,  0x4f,  0x26,  0xff,  0x55,  0xe1,  0xbf,  0x7a,  0xf0,  0xb8,  0x24,  0x3e,  0xe2,  0xd2,  0xc8,
	0x53,  0x31,  0x3b,  0xf8,  0x06,  0xc5,  0x40,  0x18,  0xa8,  0xc3,  0xe7,  0x76,  0x4c,  0xca,  0xe0,  0x43,
	0xd5,  0xbf,  0x49,  0x93,  0xc1,  0xf3,  0x6b,  0x7c,  0x97,  0xe0,  0xfd,  0x1a,  0xfe,  0x7b,  0x10,  0x0d,

	0xc1,  0xff,  0x2b,  0xf0,  0x07,  0xdf,  0x19,  0x91,  0x0c,  0x03,  0x77,  0xfd,  0x0a,  0xfe,  0xc1,  0x3f,
	0x29,  0x07,  0xd9,  0xe0,  0x1f,  0xfc,  0xc3,  0x78,  0x84,  0x0f,  0xe5,  0xf1,  0x3c,  0xfe,  0x07,  0xff,
	0xe4,  0x9f,  0xc1,  0xd2,  0x7f,  0xf0,  0xcf,  0xf1,  0xe1,  0xbf,  0xe0,  0x47,  0xff,  0x12,  0x9e,  0xfc,
	0x93,  0x7f,  0x0d,  0x4f,  0xff,  0x0d,  0x3d,  0xfb,  0xf7,  0x92,  0x00,  0xdf,  0x9d,  0x83,  0x7f,  0xf0,
	0xed,  0xe3,  0x03,  0x7e,  0xa8,  0x8f,  0xfc,  0x71,  0x3e,  0xe9,  0xa7,  0xfb,  0xae,  0x19,  0xe8,  0xc3,
	0x2d,  0x84,  0x9f,  0xfe,  0x4d,  0x1e,  0xc4,  0x83,  0x7f,  0xe8,  0x9f,  0xe6,  0xb3,  0x7c,  0x9e,  0x2f,
	0xf2,  0x65,  0xbe,  0xca,  0x53,  0x7f,  0xfa,  0xdf,  0xe5,  0xff,  0x11,  0x40,  0x00,  0x2e,  0x18,  0x81,
	0x3f,  0xf8,  0x87,  0x9e,  0x00,  0x1f,  0xd4,  0x43,  0x7e,  0x38,  0x8f,  0xf4,  0xd1,  0x3d,  0xf6,  0x27,
	0xf0,  0x24,  0x9f,  0xd2,  0xd3,  0x7e,  0x26,  0xcf,  0xf6,  0xb9,  0x3d,  0xff,  0x17,  0xf1,  0x12,  0x5f,
	0xd6,  0x2b,  0x7e,  0x35,  0xaf,  0xf5,  0xf5,  0xbd,  0xf1,  0xb7,  0xf0,  0x36,  0x0b,  0x1e,
};
static PROGMEM prog_uchar sprites_sprpal[] = {

	0xff,  0x7f,  0xde,  0x7f,  0x53,  0x7b,  0xc0,  0x7f,  0xd0,  0x5a,  0x10,  0x47,  0xaa,  0x7e,  0xa8,  0x76,
	0x4f,  0x76,  0x6f,  0x46,  0x00,  0x0e,  0xa0,  0x35,  0x61,  0x68,  0xe0,  0x10,  0x00,  0x00,  0x00,  0x80,
};
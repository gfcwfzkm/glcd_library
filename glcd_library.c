
#include "glcd_library.h"

// CP437 FONT
const uint8_t font[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00,	// NULL
	0x3E, 0x5B, 0x4F, 0x5B, 0x3E,	// ?
	0x3E, 0x6B, 0x4F, 0x6B, 0x3E,	// ?
	0x1C, 0x3E, 0x7C, 0x3E, 0x1C,	// ?
	0x18, 0x3C, 0x7E, 0x3C, 0x18,	// ?
	0x1C, 0x57, 0x7D, 0x57, 0x1C,	// ?
	0x1C, 0x5E, 0x7F, 0x5E, 0x1C,	// ?
	0x00, 0x18, 0x3C, 0x18, 0x00,	// •
	0xFF, 0xE7, 0xC3, 0xE7, 0xFF,	// ?
	0x00, 0x18, 0x24, 0x18, 0x00,	// ?
	0xFF, 0xE7, 0xDB, 0xE7, 0xFF,	// ?
	0x30, 0x48, 0x3A, 0x06, 0x0E,	// ?
	0x26, 0x29, 0x79, 0x29, 0x26,	// ?
	0x40, 0x7F, 0x05, 0x05, 0x07,	// ?
	0x40, 0x7F, 0x05, 0x25, 0x3F,	// ?
	0x5A, 0x3C, 0xE7, 0x3C, 0x5A,	// ?
	0x7F, 0x3E, 0x1C, 0x1C, 0x08,	// ?
	0x08, 0x1C, 0x1C, 0x3E, 0x7F,	// ?
	0x14, 0x22, 0x7F, 0x22, 0x14,	// ?
	0x5F, 0x5F, 0x00, 0x5F, 0x5F,	// ?
	0x06, 0x09, 0x7F, 0x01, 0x7F,	// ¶
	0x00, 0x66, 0x89, 0x95, 0x6A,	// §
	0x60, 0x60, 0x60, 0x60, 0x60,	// ?
	0x94, 0xA2, 0xFF, 0xA2, 0x94,	// ?
	0x08, 0x04, 0x7E, 0x04, 0x08,	// ?
	0x10, 0x20, 0x7E, 0x20, 0x10,	// ?
	0x08, 0x08, 0x2A, 0x1C, 0x08,	// ?
	0x08, 0x1C, 0x2A, 0x08, 0x08,	// ?
	0x1E, 0x10, 0x10, 0x10, 0x10,	// ?
	0x0C, 0x1E, 0x0C, 0x1E, 0x0C,	// ?
	0x30, 0x38, 0x3E, 0x38, 0x30,	// ?
	0x06, 0x0E, 0x3E, 0x0E, 0x06,	// ?
	0x00, 0x00, 0x00, 0x00, 0x00,	// 
	0x00, 0x00, 0x5F, 0x00, 0x00,	// !
	0x00, 0x07, 0x00, 0x07, 0x00,	// "
	0x14, 0x7F, 0x14, 0x7F, 0x14,	// #
	0x24, 0x2A, 0x7F, 0x2A, 0x12,	// $
	0x23, 0x13, 0x08, 0x64, 0x62,	// %
	0x36, 0x49, 0x56, 0x20, 0x50,	// &
	0x00, 0x08, 0x07, 0x03, 0x00,	// '
	0x00, 0x1C, 0x22, 0x41, 0x00,	// (
	0x00, 0x41, 0x22, 0x1C, 0x00,	// )
	0x2A, 0x1C, 0x7F, 0x1C, 0x2A,	// *
	0x08, 0x08, 0x3E, 0x08, 0x08,	// +
	0x00, 0x80, 0x70, 0x30, 0x00,	// ,
	0x08, 0x08, 0x08, 0x08, 0x08,	// -
	0x00, 0x00, 0x60, 0x60, 0x00,	// .
	0x20, 0x10, 0x08, 0x04, 0x02,	// /
	0x3E, 0x51, 0x49, 0x45, 0x3E,	// 0
	0x00, 0x42, 0x7F, 0x40, 0x00,	// 1
	0x72, 0x49, 0x49, 0x49, 0x46,	// 2
	0x21, 0x41, 0x49, 0x4D, 0x33,	// 3
	0x18, 0x14, 0x12, 0x7F, 0x10,	// 4
	0x27, 0x45, 0x45, 0x45, 0x39,	// 5
	0x3C, 0x4A, 0x49, 0x49, 0x31,	// 6
	0x41, 0x21, 0x11, 0x09, 0x07,	// 7
	0x36, 0x49, 0x49, 0x49, 0x36,	// 8
	0x46, 0x49, 0x49, 0x29, 0x1E,	// 9
	0x00, 0x00, 0x14, 0x00, 0x00,	// :
	0x00, 0x40, 0x34, 0x00, 0x00,	// ;
	0x00, 0x08, 0x14, 0x22, 0x41,	// <
	0x14, 0x14, 0x14, 0x14, 0x14,	// =
	0x00, 0x41, 0x22, 0x14, 0x08,	// >
	0x02, 0x01, 0x59, 0x09, 0x06,	// ?
	0x3E, 0x41, 0x5D, 0x59, 0x4E,	// @
	0x7C, 0x12, 0x11, 0x12, 0x7C,	// A
	0x7F, 0x49, 0x49, 0x49, 0x36,	// B
	0x3E, 0x41, 0x41, 0x41, 0x22,	// C
	0x7F, 0x41, 0x41, 0x41, 0x3E,	// D
	0x7F, 0x49, 0x49, 0x49, 0x41,	// E
	0x7F, 0x09, 0x09, 0x09, 0x01,	// F
	0x3E, 0x41, 0x41, 0x51, 0x73,	// G
	0x7F, 0x08, 0x08, 0x08, 0x7F,	// H
	0x00, 0x41, 0x7F, 0x41, 0x00,	// I
	0x20, 0x40, 0x41, 0x3F, 0x01,	// J 
	0x7F, 0x08, 0x14, 0x22, 0x41,	// K
	0x7F, 0x40, 0x40, 0x40, 0x40,	// L
	0x7F, 0x02, 0x1C, 0x02, 0x7F,	// M
	0x7F, 0x04, 0x08, 0x10, 0x7F,	// N
	0x3E, 0x41, 0x41, 0x41, 0x3E,	// O
	0x7F, 0x09, 0x09, 0x09, 0x06,	// P
	0x3E, 0x41, 0x51, 0x21, 0x5E,	// Q
	0x7F, 0x09, 0x19, 0x29, 0x46,	// R
	0x26, 0x49, 0x49, 0x49, 0x32,	// S
	0x03, 0x01, 0x7F, 0x01, 0x03,	// T
	0x3F, 0x40, 0x40, 0x40, 0x3F,	// U
	0x1F, 0x20, 0x40, 0x20, 0x1F,	// V
	0x3F, 0x40, 0x38, 0x40, 0x3F,	// W
	0x63, 0x14, 0x08, 0x14, 0x63,	// X
	0x03, 0x04, 0x78, 0x04, 0x03,	// Y
	0x61, 0x59, 0x49, 0x4D, 0x43,	// Z
	0x00, 0x7F, 0x41, 0x41, 0x41,	// [
	0x02, 0x04, 0x08, 0x10, 0x20,	// <backslash>
	0x00, 0x41, 0x41, 0x41, 0x7F,	// ]
	0x04, 0x02, 0x01, 0x02, 0x04,	// ^
	0x40, 0x40, 0x40, 0x40, 0x40,	// _
	0x00, 0x03, 0x07, 0x08, 0x00,	// `
	0x20, 0x54, 0x54, 0x78, 0x40,	// a
	0x7F, 0x28, 0x44, 0x44, 0x38,	// b
	0x38, 0x44, 0x44, 0x44, 0x28,	// c
	0x38, 0x44, 0x44, 0x28, 0x7F,	// d
	0x38, 0x54, 0x54, 0x54, 0x18,	// e
	0x00, 0x08, 0x7E, 0x09, 0x02,	// f
	0x18, 0xA4, 0xA4, 0x9C, 0x78,	// g
	0x7F, 0x08, 0x04, 0x04, 0x78,	// h
	0x00, 0x44, 0x7D, 0x40, 0x00,	// i
	0x20, 0x40, 0x40, 0x3D, 0x00,	// j 
	0x7F, 0x10, 0x28, 0x44, 0x00,	// k 
	0x00, 0x41, 0x7F, 0x40, 0x00,	// l 
	0x7C, 0x04, 0x78, 0x04, 0x78,	// m 
	0x7C, 0x08, 0x04, 0x04, 0x78,	// n 
	0x38, 0x44, 0x44, 0x44, 0x38,	// o
	0xFC, 0x18, 0x24, 0x24, 0x18,	// p
	0x18, 0x24, 0x24, 0x18, 0xFC,	// q
	0x7C, 0x08, 0x04, 0x04, 0x08,	// r
	0x48, 0x54, 0x54, 0x54, 0x24,	// s
	0x04, 0x04, 0x3F, 0x44, 0x24,	// t
	0x3C, 0x40, 0x40, 0x20, 0x7C,	// u
	0x1C, 0x20, 0x40, 0x20, 0x1C,	// v
	0x3C, 0x40, 0x30, 0x40, 0x3C,	// w
	0x44, 0x28, 0x10, 0x28, 0x44,	// x
	0x4C, 0x90, 0x90, 0x90, 0x7C,	// y
	0x44, 0x64, 0x54, 0x4C, 0x44,	// z
	0x00, 0x08, 0x36, 0x41, 0x00,	// {
	0x00, 0x00, 0x77, 0x00, 0x00,	// |
	0x00, 0x41, 0x36, 0x08, 0x00,	// }
	0x02, 0x01, 0x02, 0x04, 0x02,	// ~
	0x3C, 0x26, 0x23, 0x26, 0x3C,	// ?
	0x1E, 0xA1, 0xA1, 0x61, 0x12,	// Ç
	0x3A, 0x40, 0x40, 0x20, 0x7A,	// ü
	0x38, 0x54, 0x54, 0x55, 0x59,	// é
	0x21, 0x55, 0x55, 0x79, 0x41,	// â
	0x22, 0x54, 0x54, 0x78, 0x42,	// ä
	0x21, 0x55, 0x54, 0x78, 0x40,	// à
	0x20, 0x54, 0x55, 0x79, 0x40,	// å
	0x0C, 0x1E, 0x52, 0x72, 0x12,	// ç
	0x39, 0x55, 0x55, 0x55, 0x59,	// ê
	0x39, 0x54, 0x54, 0x54, 0x59,	// ë
	0x39, 0x55, 0x54, 0x54, 0x58,	// è
	0x00, 0x00, 0x45, 0x7C, 0x41,	// ï
	0x00, 0x02, 0x45, 0x7D, 0x42,	// î
	0x00, 0x01, 0x45, 0x7C, 0x40,	// ì
	0x7D, 0x12, 0x11, 0x12, 0x7D,	// Ä
	0xF0, 0x28, 0x25, 0x28, 0xF0,	// Å
	0x7C, 0x54, 0x55, 0x45, 0x00,	// É
	0x20, 0x54, 0x54, 0x7C, 0x54,	// æ
	0x7C, 0x0A, 0x09, 0x7F, 0x49,	// Æ
	0x32, 0x49, 0x49, 0x49, 0x32,	// ô
	0x3A, 0x44, 0x44, 0x44, 0x3A,	// ö
	0x32, 0x4A, 0x48, 0x48, 0x30,	// ò
	0x3A, 0x41, 0x41, 0x21, 0x7A,	// û
	0x3A, 0x42, 0x40, 0x20, 0x78,	// ù
	0x00, 0x9D, 0xA0, 0xA0, 0x7D,	// ÿ
	0x3D, 0x42, 0x42, 0x42, 0x3D,	// Ö
	0x3D, 0x40, 0x40, 0x40, 0x3D,	// Ü
	0x3C, 0x24, 0xFF, 0x24, 0x24,	// ¢
	0x48, 0x7E, 0x49, 0x43, 0x66,	// £
	0x2B, 0x2F, 0xFC, 0x2F, 0x2B,	// ¥
	0xFF, 0x09, 0x29, 0xF6, 0x20,	// ?
	0xC0, 0x88, 0x7E, 0x09, 0x03,	// ƒ
	0x20, 0x54, 0x54, 0x79, 0x41,	// á
	0x00, 0x00, 0x44, 0x7D, 0x41,	// í
	0x30, 0x48, 0x48, 0x4A, 0x32,	// ó
	0x38, 0x40, 0x40, 0x22, 0x7A,	// ú
	0x00, 0x7A, 0x0A, 0x0A, 0x72,	// ñ
	0x7D, 0x0D, 0x19, 0x31, 0x7D,	// Ñ
	0x26, 0x29, 0x29, 0x2F, 0x28,	// ª
	0x26, 0x29, 0x29, 0x29, 0x26,	// º
	0x30, 0x48, 0x4D, 0x40, 0x20,	// ¿
	0x38, 0x08, 0x08, 0x08, 0x08,	// ?
	0x08, 0x08, 0x08, 0x08, 0x38,	// ¬
	0x2F, 0x10, 0xC8, 0xAC, 0xBA,	// ½
	0x2F, 0x10, 0x28, 0x34, 0xFA,	// ¼
	0x00, 0x00, 0x7B, 0x00, 0x00,	// ¡
	0x08, 0x14, 0x2A, 0x14, 0x22,	// «
	0x22, 0x14, 0x2A, 0x14, 0x08,	// »
	0x55, 0x00, 0x55, 0x00, 0x55,	// ?
	0xAA, 0x55, 0xAA, 0x55, 0xAA,	// ?
	0xFF, 0x55, 0xFF, 0x55, 0xFF,	// ?
	0x00, 0x00, 0x00, 0xFF, 0x00,	// ?
	0x10, 0x10, 0x10, 0xFF, 0x00,	// ?
	0x14, 0x14, 0x14, 0xFF, 0x00,	// ?
	0x10, 0x10, 0xFF, 0x00, 0xFF,	// ?
	0x10, 0x10, 0xF0, 0x10, 0xF0,	// ?
	0x14, 0x14, 0x14, 0xFC, 0x00,	// ?
	0x14, 0x14, 0xF7, 0x00, 0xFF,	// ?
	0x00, 0x00, 0xFF, 0x00, 0xFF,	// ?
	0x14, 0x14, 0xF4, 0x04, 0xFC,	// ?
	0x14, 0x14, 0x17, 0x10, 0x1F,	// ?
	0x10, 0x10, 0x1F, 0x10, 0x1F,	// ?
	0x14, 0x14, 0x14, 0x1F, 0x00,	// ?
	0x10, 0x10, 0x10, 0xF0, 0x00,	// ?
	0x00, 0x00, 0x00, 0x1F, 0x10,	// ?
	0x10, 0x10, 0x10, 0x1F, 0x10,	// ?
	0x10, 0x10, 0x10, 0xF0, 0x10,	// ?
	0x00, 0x00, 0x00, 0xFF, 0x10,	// ?
	0x10, 0x10, 0x10, 0x10, 0x10,	// ?
	0x10, 0x10, 0x10, 0xFF, 0x10,	// ?
	0x00, 0x00, 0x00, 0xFF, 0x14,	// ?
	0x00, 0x00, 0xFF, 0x00, 0xFF,	// ?
	0x00, 0x00, 0x1F, 0x10, 0x17,	// ?
	0x00, 0x00, 0xFC, 0x04, 0xF4,	// ?
	0x14, 0x14, 0x17, 0x10, 0x17,	// ?
	0x14, 0x14, 0xF4, 0x04, 0xF4,	// ?
	0x00, 0x00, 0xFF, 0x00, 0xF7,	// ?
	0x14, 0x14, 0x14, 0x14, 0x14,	// ?
	0x14, 0x14, 0xF7, 0x00, 0xF7,	// ?
	0x14, 0x14, 0x14, 0x17, 0x14,	// ?
	0x10, 0x10, 0x1F, 0x10, 0x1F,	// ?
	0x14, 0x14, 0x14, 0xF4, 0x14,	// ?
	0x10, 0x10, 0xF0, 0x10, 0xF0,	// ?
	0x00, 0x00, 0x1F, 0x10, 0x1F,	// ?
	0x00, 0x00, 0x00, 0x1F, 0x14,	// ?
	0x00, 0x00, 0x00, 0xFC, 0x14,	// ?
	0x00, 0x00, 0xF0, 0x10, 0xF0,	// ?
	0x10, 0x10, 0xFF, 0x10, 0xFF,	// ?
	0x14, 0x14, 0x14, 0xFF, 0x14,	// ?
	0x10, 0x10, 0x10, 0x1F, 0x00,	// ?
	0x00, 0x00, 0x00, 0xF0, 0x10,	// ?
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF,	// ?
	0xF0, 0xF0, 0xF0, 0xF0, 0xF0,	// ?
	0xFF, 0xFF, 0xFF, 0x00, 0x00,	// ?
	0x00, 0x00, 0x00, 0xFF, 0xFF,	// ?
	0x0F, 0x0F, 0x0F, 0x0F, 0x0F,	// ?
	0x38, 0x44, 0x44, 0x38, 0x44,	// ?
	0xFC, 0x4A, 0x4A, 0x4A, 0x34,	// ß
	0x7E, 0x02, 0x02, 0x06, 0x06,	// ?
	0x02, 0x7E, 0x02, 0x7E, 0x02,	// ?
	0x63, 0x55, 0x49, 0x41, 0x63,	// ?
	0x38, 0x44, 0x44, 0x3C, 0x04,	// ?
	0x40, 0x7E, 0x20, 0x1E, 0x20,	// µ
	0x06, 0x02, 0x7E, 0x02, 0x02,	// ?
	0x99, 0xA5, 0xE7, 0xA5, 0x99,	// ?
	0x1C, 0x2A, 0x49, 0x2A, 0x1C,	// ?
	0x4C, 0x72, 0x01, 0x72, 0x4C,	// ?
	0x30, 0x4A, 0x4D, 0x4D, 0x30,	// ?
	0x30, 0x48, 0x78, 0x48, 0x30,	// ?
	0xBC, 0x62, 0x5A, 0x46, 0x3D,	// ?
	0x3E, 0x49, 0x49, 0x49, 0x00,	// ?
	0x7E, 0x01, 0x01, 0x01, 0x7E,	// ?
	0x2A, 0x2A, 0x2A, 0x2A, 0x2A,	// ?
	0x44, 0x44, 0x5F, 0x44, 0x44,	// ±
	0x40, 0x51, 0x4A, 0x44, 0x40,	// ?
	0x40, 0x44, 0x4A, 0x51, 0x40,	// ?
	0x00, 0x00, 0xFF, 0x01, 0x03,	// ?
	0xE0, 0x80, 0xFF, 0x00, 0x00,	// ?
	0x08, 0x08, 0x6B, 0x6B, 0x08,	// ÷
	0x36, 0x12, 0x36, 0x24, 0x36,	// ?
	0x06, 0x0F, 0x09, 0x0F, 0x06,	// °
	0x00, 0x00, 0x18, 0x18, 0x00,	// ?
	0x00, 0x00, 0x10, 0x10, 0x00,	// ·
	0x30, 0x40, 0xFF, 0x01, 0x01,	// ?
	0x00, 0x1F, 0x01, 0x01, 0x1E,	// ?
	0x00, 0x19, 0x1D, 0x17, 0x12,	// ²
	0x00, 0x3C, 0x3C, 0x3C, 0x3C,	// ?
	0x00, 0x00, 0x00, 0x00, 0x00	// null
};

#define _LINE_OVERLAP_NONE	0
#define _LINE_OVERLAP_MAJOR 1
#define _LINE_OVERLAP_MINOR 2

#define DEG_TO_RAD 0.017453292519943295769236907684886

#define _swap_int16_t(a, b) { int16_t t = a; a = b; b = t; }

#define _line_H(x,y,w,c)	glcd_line(x,y,x+w,y,c)
#define _line_V(x,y,h,c)	glcd_line(x,y,x,y+h,c)

uint8_t _fgcolor = GLCD_DEFAULT_TEXTFGCOLOR;
uint16_t _bgcolor = GLCD_DEFAULT_TEXTBGCOLOR;
uint8_t _size = GLCD_DEFAULT_TEXTSIZE;
int16_t _angleOffset = DEFAULT_ANGLE_OFFSET;
float _arcAngleMax = DEFAULT_ARC_ANGLE_MAX;

#ifdef GLCD_INTE_SETPIXEL
uint16_t lx = 0xFFF0, ly = 0xFFF0;
#endif

float _cosDegrees(float angle)
{
	return cos(angle * DEG_TO_RAD);
}

float _sinDegrees(float angle)
{
	return sin(angle * DEG_TO_RAD);
}

void _drawCircleHelper( int16_t x0, int16_t y0,
int16_t r, uint8_t cornername, uint8_t color) {
	int16_t f     = 1 - r;
	int16_t ddF_x = 1;
	int16_t ddF_y = -2 * r;
	int16_t x     = 0;
	int16_t y     = r;

	while (x<y) {
		if (f >= 0) {
			y--;
			ddF_y += 2;
			f     += ddF_y;
		}
		x++;
		ddF_x += 2;
		f     += ddF_x;
		if (cornername & 0x4) {
			glcd_setXY(x0 + x, y0 + y, color);
			glcd_setXY(x0 + y, y0 + x, color);
		}
		if (cornername & 0x2) {
			glcd_setXY(x0 + x, y0 - y, color);
			glcd_setXY(x0 + y, y0 - x, color);
		}
		if (cornername & 0x8) {
			glcd_setXY(x0 - y, y0 + x, color);
			glcd_setXY(x0 - x, y0 + y, color);
		}
		if (cornername & 0x1) {
			glcd_setXY(x0 - y, y0 - x, color);
			glcd_setXY(x0 - x, y0 - y, color);
		}
	}
}

void _fillCircleHelper(int16_t x0, int16_t y0, int16_t r,
uint8_t corners, uint16_t delta, uint8_t color) {

	int16_t f     = 1 - r;
	int16_t ddF_x = 1;
	int16_t ddF_y = -2 * r;
	int16_t x     = 0;
	int16_t y     = r;
	int16_t px    = x;
	int16_t py    = y;

	delta++; // Avoid some +1's in the loop

	while(x < y) {
		if (f >= 0) {
			y--;
			ddF_y += 2;
			f     += ddF_y;
		}
		x++;
		ddF_x += 2;
		f     += ddF_x;
		// These checks avoid double-drawing certain lines, important
		// for the SSD1306 library which has an INVERT drawing mode.
		if(x < (y + 1)) {
			if(corners & 1) _line_V(x0+x, y0-y, (y+delta)-1, color);
			if(corners & 2) _line_V(x0-x, y0-y, (y+delta)-1, color);
		}
		if(y != py) {
			if(corners & 1) _line_V(x0+py, y0-px, (px+delta)-1, color);
			if(corners & 2) _line_V(x0-py, y0-px, (px+delta)-1, color);
			py = y;
		}
		px = x;
	}
}

/* Danke an https://marekburiak.github.io/ für die Funktion */
void _fillArcOffsetted(uint16_t cx, uint16_t cy, uint16_t radius, uint16_t thickness, float _start, float _end, uint8_t color)
{
	int16_t xmin = 65535, xmax = -32767, ymin = 32767, ymax = -32767;
	float cosStart, sinStart, cosEnd, sinEnd;
	float r, t;
	float startAngle, endAngle;
	const uint8_t true = 1, false = 0;

	startAngle = (_start / _arcAngleMax) * 360;	// 252
	endAngle = (_end / _arcAngleMax) * 360;		// 807
	//Serial << "startAngle: " << startAngle << " endAngle: " << endAngle << endl;

	while (startAngle < 0) startAngle += 360;
	while (endAngle < 0) endAngle += 360;
	while (startAngle > 360) startAngle -= 360;
	while (endAngle > 360) endAngle -= 360;
	//Serial << "startAngleAdj: " << startAngle << " endAngleAdj: " << endAngle << endl;
	//if (endAngle == 0) endAngle = 360;

	if (startAngle > endAngle) {
		_fillArcOffsetted(cx, cy, radius, thickness, ((startAngle) / (float)360) * _arcAngleMax, _arcAngleMax, color);
		_fillArcOffsetted(cx, cy, radius, thickness, 0, ((endAngle) / (float)360) * _arcAngleMax, color);
	}
	else {
		// Calculate bounding box for the arc to be drawn
		cosStart = _cosDegrees(startAngle);
		sinStart = _sinDegrees(startAngle);
		cosEnd = _cosDegrees(endAngle);
		sinEnd = _sinDegrees(endAngle);

		//Serial << cosStart << " " << sinStart << " " << cosEnd << " " << sinEnd << endl;

		r = radius;
		// Point 1: radius & startAngle
		t = r * cosStart;
		if (t < xmin) xmin = t;
		if (t > xmax) xmax = t;
		t = r * sinStart;
		if (t < ymin) ymin = t;
		if (t > ymax) ymax = t;

		// Point 2: radius & endAngle
		t = r * cosEnd;
		if (t < xmin) xmin = t;
		if (t > xmax) xmax = t;
		t = r * sinEnd;
		if (t < ymin) ymin = t;
		if (t > ymax) ymax = t;

		r = radius - thickness;
		// Point 3: radius-thickness & startAngle
		t = r * cosStart;
		if (t < xmin) xmin = t;
		if (t > xmax) xmax = t;
		t = r * sinStart;
		if (t < ymin) ymin = t;
		if (t > ymax) ymax = t;

		// Point 4: radius-thickness & endAngle
		t = r * cosEnd;
		if (t < xmin) xmin = t;
		if (t > xmax) xmax = t;
		t = r * sinEnd;
		if (t < ymin) ymin = t;
		if (t > ymax) ymax = t;


		// Corrections if arc crosses X or Y axis
		if ((startAngle < 90) && (endAngle > 90)) {
			ymax = radius;
		}

		if ((startAngle < 180) && (endAngle > 180)) {
			xmin = -radius;
		}

		if ((startAngle < 270) && (endAngle > 270)) {
			ymin = -radius;
		}

		// Slopes for the two sides of the arc
		float sslope = (float)cosStart / (float)sinStart;
		float eslope = (float)cosEnd / (float)sinEnd;

		//Serial << "sslope2: " << sslope << " eslope2:" << eslope << endl;

		if (endAngle == 360) eslope = -1000000;

		int ir2 = (radius - thickness) * (radius - thickness);
		int or2 = radius * radius;
		//Serial << "ymin: " << ymin << " ymax: " << ymax << endl;

		//fillScanline16(color);

		for (int x = xmin; x <= xmax; x++) {
			uint8_t y1StartFound = false, y2StartFound = false;
			uint8_t y1EndFound = false, y2EndSearching = false;
			int y1s = 0, y1e = 0, y2s = 0;
			for (int y = ymin; y <= ymax; y++)
			{
				int x2 = x * x;
				int y2 = y * y;

				if (
				(x2 + y2 < or2 && x2 + y2 >= ir2) && (
				(y > 0 && startAngle < 180 && x <= y * sslope) ||
				(y < 0 && startAngle > 180 && x >= y * sslope) ||
				(y < 0 && startAngle <= 180) ||
				(y == 0 && startAngle <= 180 && x < 0) ||
				(y == 0 && startAngle == 0 && x > 0)
				) && (
				(y > 0 && endAngle < 180 && x >= y * eslope) ||
				(y < 0 && endAngle > 180 && x <= y * eslope) ||
				(y > 0 && endAngle >= 180) ||
				(y == 0 && endAngle >= 180 && x < 0) ||
				(y == 0 && startAngle == 0 && x > 0)))
				{
					if (!y1StartFound)	//start of the higher line found
					{
						y1StartFound = true;
						y1s = y;
					}
					else if (y1EndFound && !y2StartFound) //start of the lower line found
					{
						//Serial << "Found y2 start x: " << x << " y:" << y << endl;
						y2StartFound = true;
						//drawPixel_cont(cx+x, cy+y, ILI9341_BLUE);
						y2s = y;
						y += y1e - y1s - 1;	// calculate the most probable end of the lower line (in most cases the length of lower line is equal to length of upper line), in the next loop we will validate if the end of line is really there
						if (y > ymax - 1) // the most probable end of line 2 is beyond ymax so line 2 must be shorter, thus continue with pixel by pixel search
						{
							y = y2s;	// reset y and continue with pixel by pixel search
							y2EndSearching = true;
						}

						//Serial << "Upper line length: " << (y1e - y1s) << " Setting y to " << y << endl;
					}
					else if (y2StartFound && !y2EndSearching)
					{
						// we validated that the probable end of the lower line has a pixel, continue with pixel by pixel search, in most cases next loop with confirm the end of lower line as it will not find a valid pixel
						y2EndSearching = true;
					}
					//Serial << "x:" << x << " y:" << y << endl;
					//drawPixel_cont(cx+x, cy+y, ILI9341_BLUE);
				}
				else
				{
					if (y1StartFound && !y1EndFound) //higher line end found
					{
						y1EndFound = true;
						y1e = y - 1;
						//Serial << "line: " << y1s << " - " << y1e << endl;
						_line_V(cx + x, cy + y1s, y - y1s, color);
						if (y < 0)
						{
							//Serial << x << " " << y << endl;
							y = abs(y); // skip the empty middle
						}
						else
						break;
					}
					else if (y2StartFound)
					{
						if (y2EndSearching)
						{
							//Serial << "Found final end at y: " << y << endl;
							// we found the end of the lower line after pixel by pixel search
							_line_V(cx + x, cy + y2s,y - y2s, color);
							y2EndSearching = false;
							break;
						}
						else
						{
							//Serial << "Expected end not found" << endl;
							// the expected end of the lower line is not there so the lower line must be shorter
							y = y2s;	// put the y back to the lower line start and go pixel by pixel to find the end
							y2EndSearching = true;
						}
					}
					//else
					//drawPixel_cont(cx+x, cy+y, ILI9341_RED);
				}
				//

				//delay(75);
			}
			if (y1StartFound && !y1EndFound)
			{
				y1e = ymax;
				//Serial << "line: " << y1s << " - " << y1e << endl;
				_line_V(cx + x, cy + y1s, y1e - y1s + 1, color);
			}
			else if (y2StartFound && y2EndSearching)	// we found start of lower line but we are still searching for the end
			{										// which we haven't found in the loop so the last pixel in a column must be the end
				_line_V(cx + x, cy + y2s, ymax - y2s + 1, color);
			}
		}
	}
}

void _drawLineOverlap(unsigned int aXStart, unsigned int aYStart, unsigned int aXEnd, unsigned int aYEnd, uint8_t aOverlap,
uint16_t aColor) {
	int16_t tDeltaX, tDeltaY, tDeltaXTimes2, tDeltaYTimes2, tError, tStepX, tStepY;

	if ((aXStart == aXEnd) || (aYStart == aYEnd)) {
		//horizontal or vertical line -> fillRect() is faster
		glcd_rectangle_fill(aXStart, aYStart, aXEnd, aYEnd, aColor);
		} else {
		//calculate direction
		tDeltaX = aXEnd - aXStart;
		tDeltaY = aYEnd - aYStart;
		if (tDeltaX < 0) {
			tDeltaX = -tDeltaX;
			tStepX = -1;
			} else {
			tStepX = +1;
		}
		if (tDeltaY < 0) {
			tDeltaY = -tDeltaY;
			tStepY = -1;
			} else {
			tStepY = +1;
		}
		tDeltaXTimes2 = tDeltaX << 1;
		tDeltaYTimes2 = tDeltaY << 1;
		//draw start pixel
		glcd_setXY(aXStart, aYStart, aColor);
		if (tDeltaX > tDeltaY) {
			// start value represents a half step in Y direction
			tError = tDeltaYTimes2 - tDeltaX;
			while (aXStart != aXEnd) {
				// step in main direction
				aXStart += tStepX;
				if (tError >= 0) {
					if (aOverlap & _LINE_OVERLAP_MAJOR) {
						// draw pixel in main direction before changing
						glcd_setXY(aXStart, aYStart, aColor);
					}
					// change Y
					aYStart += tStepY;
					if (aOverlap & _LINE_OVERLAP_MINOR) {
						// draw pixel in minor direction before changing
						glcd_setXY(aXStart - tStepX, aYStart, aColor);
					}
					tError -= tDeltaXTimes2;
				}
				tError += tDeltaYTimes2;
				glcd_setXY(aXStart, aYStart, aColor);
			}
			} else {
			tError = tDeltaXTimes2 - tDeltaY;
			while (aYStart != aYEnd) {
				aYStart += tStepY;
				if (tError >= 0) {
					if (aOverlap & _LINE_OVERLAP_MAJOR) {
						// draw pixel in main direction before changing
						glcd_setXY(aXStart, aYStart, aColor);
					}
					aXStart += tStepX;
					if (aOverlap & _LINE_OVERLAP_MINOR) {
						// draw pixel in minor direction before changing
						glcd_setXY(aXStart, aYStart - tStepY, aColor);
					}
					tError -= tDeltaYTimes2;
				}
				tError += tDeltaXTimes2;
				glcd_setXY(aXStart, aYStart, aColor);
			}
		}
	}
}

void _plotQuadBezierSeg(int x0, int y0, int x1, int y1, int x2, int y2, uint8_t color)
{ /* plot a limited quadratic Bezier segment */
	int sx = x2-x1, sy = y2-y1;
	long xx = x0-x1, yy = y0-y1, xy; /* relative values for checks */
	double dx, dy, err, cur = xx*sy-yy*sx; /* curvature */
	assert(xx*sx <= 0 && yy*sy <= 0); /* sign of gradient must not change */
	if (sx*(long)sx+sy*(long)sy > xx*xx+yy*yy) { /* begin with longer part */
		x2 = x0; x0 = sx+x1; y2 = y0; y0 = sy+y1; cur = -cur; /* swap P0 P2 */
	}
	if (cur != 0) { /* no straight line */
		xx += sx; xx *= sx = x0 < x2 ? 1 : -1; /* x step direction */
		yy += sy; yy *= sy = y0 < y2 ? 1 : -1; /* y step direction */
		xy = 2*xx*yy; xx *= xx; yy *= yy; /* differences 2nd degree */
		if (cur*sx*sy < 0) { /* negated curvature? */
			xx = -xx; yy = -yy; xy = -xy; cur = -cur;
		}
		dx = 4.0*sy*cur*(x1-x0)+xx-xy; /* differences 1st degree */
		dy = 4.0*sx*cur*(y0-y1)+yy-xy;
		xx += xx; yy += yy; err = dx+dy+xy; /* error 1st step */
		do {
			glcd_setXY(x0,y0,color); /* plot curve */
			if (x0 == x2 && y0 == y2) return; /* last pixel -> curve finished */
			y1 = 2*err < dx; /* save value for test of y step */
			if (2*err > dy) { x0 += sx; dx -= xy; err += dy += yy; } /* x step */
			if ( y1 ) { y0 += sy; dy -= xy; err += dx += xx; } /* y step */
		} while (dy < 0 && dx > 0); /* gradient negates -> algorithm fails */
	}
	glcd_line(x0,y0, x2,y2,color); /* plot remaining part to end */
}

void _plotQuadRationalBezierSeg(int x0, int y0, int x1, int y1,int x2, int y2, float w, uint8_t color)
{ /* plot a limited rational Bezier segment, squared weight */
	int sx = x2-x1, sy = y2-y1; /* relative values for checks */
	double dx = x0-x2, dy = y0-y2, xx = x0-x1, yy = y0-y1;
	double xy = xx*sy+yy*sx, cur = xx*sy-yy*sx, err; /* curvature */
	assert(xx*sx <= 0.0 && yy*sy <= 0.0); /* sign of gradient must not change */
	if (cur != 0.0 && w > 0.0) { /* no straight line */
		if (sx*(long)sx+sy*(long)sy > xx*xx+yy*yy) { /* begin with longer part */
			x2 = x0; x0 -= dx; y2 = y0; y0 -= dy; cur = -cur; /* swap P0 P2 */
		}
		xx = 2.0*(4.0*w*sx*xx+dx*dx); /* differences 2nd degree */
		yy = 2.0*(4.0*w*sy*yy+dy*dy);
		sx = x0 < x2 ? 1 : -1; /* x step direction */
		sy = y0 < y2 ? 1 : -1; /* y step direction */
		xy = -2.0*sx*sy*(2.0*w*xy+dx*dy);
		if (cur*sx*sy < 0.0) { /* negated curvature? */
			xx = -xx; yy = -yy; xy = -xy; cur = -cur;
		}
		dx = 4.0*w*(x1-x0)*sy*cur+xx/2.0+xy; /* differences 1st degree */
		dy = 4.0*w*(y0-y1)*sx*cur+yy/2.0+xy;
		if (w < 0.5 && dy > dx) { /* flat ellipse, algorithm fails */
			cur = (w+1.0)/2.0; w = sqrt(w); xy = 1.0/(w+1.0);
			sx = floor((x0+2.0*w*x1+x2)*xy/2.0+0.5); /* subdivide curve in half */
			sy = floor((y0+2.0*w*y1+y2)*xy/2.0+0.5);
			dx = floor((w*x1+x0)*xy+0.5); dy = floor((y1*w+y0)*xy+0.5);
			_plotQuadRationalBezierSeg(x0,y0, dx,dy, sx,sy, cur,color);/* plot separately */
			dx = floor((w*x1+x2)*xy+0.5); dy = floor((y1*w+y2)*xy+0.5);
			_plotQuadRationalBezierSeg(sx,sy, dx,dy, x2,y2, cur,color);
			return;
		}
		err = dx+dy-xy; /* error 1.step */
		do {
			glcd_setXY(x0,y0, color); /* plot curve */
			if (x0 == x2 && y0 == y2) return; /* last pixel -> curve finished */
			x1 = 2*err > dy; y1 = 2*(err+yy) < -dy;/* save value for test of x step */
			if (2*err < dx || y1) { y0 += sy; dy += xy; err += dx += xx; }/* y step */
			if (2*err > dx || x1) { x0 += sx; dx += xy; err += dy += yy; }/* x step */
		} while (dy <= xy && dx >= xy); /* gradient negates -> algorithm fails */
	}
	glcd_line(x0,y0, x2,y2,color); /* plot remaining needle to end */
}

void _plotCubicBezierSeg(int x0, int y0, float x1, float y1, float x2, float y2, int x3, int y3, uint8_t color)
{ /* plot limited cubic Bezier segment */
	int f, fx, fy, leg = 1;
	int sx = x0 < x3 ? 1 : -1, sy = y0 < y3 ? 1 : -1; /* step direction */
	float xc = -fabs(x0+x1-x2-x3), xa = xc-4*sx*(x1-x2), xb = sx*(x0-x1-x2+x3);
	float yc = -fabs(y0+y1-y2-y3), ya = yc-4*sy*(y1-y2), yb = sy*(y0-y1-y2+y3);
	double ab, ac, bc, cb, xx, xy, yy, dx, dy, ex, *pxy, EP = 0.01;
	/* check for curve restrains */
	/* slope P0-P1 == P2-P3 and (P0-P3 == P1-P2 or no slope change) */
	assert((x1-x0)*(x2-x3) < EP && ((x3-x0)*(x1-x2) < EP || xb*xb < xa*xc+EP));
	assert((y1-y0)*(y2-y3) < EP && ((y3-y0)*(y1-y2) < EP || yb*yb < ya*yc+EP));
	if (xa == 0 && ya == 0) { /* quadratic Bezier */
		sx = floor((3*x1-x0+1)/2); sy = floor((3*y1-y0+1)/2); /* new midpoint */
		return _plotQuadBezierSeg(x0,y0, sx,sy, x3,y3, color);
	}
	x1 = (x1-x0)*(x1-x0)+(y1-y0)*(y1-y0)+1; /* line lengths */
	x2 = (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+1;
	do { /* loop over both ends */
		ab = xa*yb-xb*ya; ac = xa*yc-xc*ya; bc = xb*yc-xc*yb;
		ex = ab*(ab+ac-3*bc)+ac*ac; /* P0 part of self-intersection loop? */
		f = ex > 0 ? 1 : sqrt(1+1024/x1); /* calculate resolution */
		ab *= f; ac *= f; bc *= f; ex *= f*f; /* increase resolution */
		xy = 9*(ab+ac+bc)/8; cb = 8*(xa-ya);/* init differences of 1st degree */
		dx = 27*(8*ab*(yb*yb-ya*yc)+ex*(ya+2*yb+yc))/64-ya*ya*(xy-ya);
		dy = 27*(8*ab*(xb*xb-xa*xc)-ex*(xa+2*xb+xc))/64-xa*xa*(xy+xa);
		/* init differences of 2nd degree */
		xx = 3*(3*ab*(3*yb*yb-ya*ya-2*ya*yc)-ya*(3*ac*(ya+yb)+ya*cb))/4;
		yy = 3*(3*ab*(3*xb*xb-xa*xa-2*xa*xc)-xa*(3*ac*(xa+xb)+xa*cb))/4;
		xy = xa*ya*(6*ab+6*ac-3*bc+cb); ac = ya*ya; cb = xa*xa;
		xy = 3*(xy+9*f*(cb*yb*yc-xb*xc*ac)-18*xb*yb*ab)/8;
		if (ex < 0) { /* negate values if inside self-intersection loop */
			dx = -dx; dy = -dy; xx = -xx; yy = -yy; xy = -xy; ac = -ac; cb = -cb;
		} /* init differences of 3rd degree */
		ab = 6*ya*ac; ac = -6*xa*ac; bc = 6*ya*cb; cb = -6*xa*cb;
		dx += xy; ex = dx+dy; dy += xy; /* error of 1st step */
		for (pxy = &xy, fx = fy = f; x0 != x3 && y0 != y3; ) {
			glcd_setXY(x0,y0,color); /* plot curve */
			do { /* move sub-steps of one pixel */
				//if (dx > *pxy || dy < *pxy) goto exit; /* confusing values */
				if (dx > *pxy || dy < *pxy){
					xx = x0; x0 = x3; x3 = xx; sx = -sx; xb = -xb;
					break;
				}
				y1 = 2*ex-dy; /* save value for test of y step */
				if (2*ex >= dx) { /* x sub-step */
					fx--; ex += dx += xx; dy += xy += ac; yy += bc; xx += ab;
				}
				if (y1 <= 0) { /* y sub-step */
					fy--; ex += dy += yy; dx += xy += bc; xx += ac; yy += cb;
				}
			} while (fx > 0 && fy > 0); /* pixel complete? */
			if (2*fx <= f) { x0 += sx; fx += f; } /* x step */
			if (2*fy <= f) { y0 += sy; fy += f; } /* y step */
			if (pxy == &xy && dx < 0 && dy > 0) pxy = &EP;/* pixel ahead valid */
		}
		//exit: xx = x0; x0 = x3; x3 = xx; sx = -sx; xb = -xb; /* swap legs */
		yy = y0; y0 = y3; y3 = yy; sy = -sy; yb = -yb; x1 = x2;
	} while (leg--); /* try other end */
	glcd_line(x0,y0, x3,y3,color); /* remaining part in case of cusp or crunode */
}



void glcd_setXY(uint16_t x0, uint16_t y0, uint8_t color)
{
	if ((x0 >= GLCD_WIDTH) || (y0 >= GLCD_HEIGHT))	return;
	
#ifdef GLCD_INTE_SETPIXEL
	if ((x0 == (lx+1)) && (y0 == ly))
	{
		GLCD_INTE_SETPIXEL(color);
	}
	else
	{
		GLCD_INTE_SETXY(x0,y0,color);
	}
	lx = x0;
	ly = y0;
#else
	GLCD_INTE_SETXY(x0,y0,color);
#endif
}

uint8_t glcd_getXY(uint16_t x0, uint16_t y0)
{
	if ((x0 >= GLCD_WIDTH) || (y0 >= GLCD_HEIGHT))	return 0;
	
#ifdef GLCD_INTE_SETPIXEL
	lx = 9999;
#endif
	
	return (GLCD_INTE_GETXY(x0,y0));
}

void glcd_line(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t color)
{
	int dx =  abs(x1-x0), sx = x0<x1 ? 1 : -1;
	int dy = -abs(y1-y0), sy = y0<y1 ? 1 : -1;
	int err = dx+dy, e2; /* error value e_xy */
	
	while(1){
		glcd_setXY(x0,y0,color);
		if (x0==x1 && y0==y1) break;
		e2 = 2*err;
		if (e2 > dy) { err += dy; x0 += sx; } /* e_xy+e_x > 0 */
		if (e2 < dx) { err += dx; y0 += sy; } /* e_xy+e_y < 0 */
	}
}


void glcd_line_thick(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t th, uint8_t color) {
	int16_t i, tDeltaX, tDeltaY, tDeltaXTimes2, tDeltaYTimes2, tError, tStepX, tStepY;
		
	if (th <= 1) {
		//drawLineOverlap(aXStart, aYStart, aXEnd, aYEnd, LINE_OVERLAP_NONE, aColor);
		glcd_line(x0, y0, x1, y1,color);
	}
		
	// 	 * For coordinate system with 0.0 top left
	// 	 * Swap X and Y delta and calculate clockwise (new delta X inverted)
	// 	 * or counterclockwise (new delta Y inverted) rectangular direction.
	// 	 * The right rectangular direction for LINE_OVERLAP_MAJOR toggles with each octant
	
	tDeltaY = x1 - x0;
	tDeltaX = y1 - y0;
	// mirror 4 quadrants to one and adjust deltas and stepping direction
	char tSwap = 1; // count effective mirroring
	if (tDeltaX < 0) {
		tDeltaX = -tDeltaX;
		tStepX = -1;
		tSwap = !tSwap;
		} else {
		tStepX = +1;
	}
	if (tDeltaY < 0) {
		tDeltaY = -tDeltaY;
		tStepY = -1;
		tSwap = !tSwap;
		} else {
		tStepY = +1;
	}
	tDeltaXTimes2 = tDeltaX << 1;
	tDeltaYTimes2 = tDeltaY << 1;
	char tOverlap;
	// adjust for right direction of thickness from line origin
	int tDrawStartAdjustCount = th / 2;
	//if (aThicknessMode == LINE_THICKNESS_DRAW_COUNTERCLOCKWISE) {
		tDrawStartAdjustCount = th - 1;
		//} else if (aThicknessMode == LINE_THICKNESS_DRAW_CLOCKWISE) {
		//tDrawStartAdjustCount = 0;}

	// which octant are we now
	if (tDeltaX >= tDeltaY) {
		if (tSwap) {
			tDrawStartAdjustCount = (th - 1) - tDrawStartAdjustCount;
			tStepY = -tStepY;
			} else {
			tStepX = -tStepX;
		}
		
		// 		 * Vector for draw direction of lines is rectangular and counterclockwise to original line
		// 		 * Therefore no pixel will be missed if LINE_OVERLAP_MAJOR is used
		// 		 * on changing in minor rectangular direction
		
		// adjust draw start point
		tError = tDeltaYTimes2 - tDeltaX;
		for (i = tDrawStartAdjustCount; i > 0; i--) {
			// change X (main direction here)
			x0 -= tStepX;
			x1 -= tStepX;
			if (tError >= 0) {
				// change Y
				y0 -= tStepY;
				y1 -= tStepY;
				tError -= tDeltaXTimes2;
			}
			tError += tDeltaYTimes2;
		}
		//draw start line
		glcd_line(x0, y0, x1, y1, color);
		// draw aThickness lines
		tError = tDeltaYTimes2 - tDeltaX;
		for (i = th; i > 1; i--) {
			// change X (main direction here)
			x0 += tStepX;
			x1 += tStepX;
			tOverlap = _LINE_OVERLAP_NONE;
			if (tError >= 0) {
				// change Y
				y0 += tStepY;
				y1 += tStepY;
				tError -= tDeltaXTimes2;
				/*
				 				 * change in minor direction reverse to line (main) direction
				 				 * because of choosing the right (counter)clockwise draw vector
				 				 * use LINE_OVERLAP_MAJOR to fill all pixel
				 				 *
				 				 * EXAMPLE:
				 				 * 1,2 = Pixel of first lines
				 				 * 3 = Pixel of third line in normal line mode
				 				 * - = Pixel which will additionally be drawn in LINE_OVERLAP_MAJOR mode
				 				 *           33
				 				 *       3333-22
				 				 *   3333-222211
				 				 * 33-22221111
				 				 *  221111                     /\
				 				 *  11                          Main direction of draw vector
				 				 *  -> Line main direction
				 				 *  <- Minor direction of counterclockwise draw vector
				*/
				tOverlap = _LINE_OVERLAP_MAJOR;
			}
			tError += tDeltaYTimes2;
			_drawLineOverlap(x0, y0, x1, y1, tOverlap, color);
			//glcd_line(aXStart, aYStart, aXEnd, aYEnd, aColor);
		}
		} else {
		// the other octant
		if (tSwap) {
			tStepX = -tStepX;
			} else {
			tDrawStartAdjustCount = (th - 1) - tDrawStartAdjustCount;
			tStepY = -tStepY;
		}
		// adjust draw start point
		tError = tDeltaXTimes2 - tDeltaY;
		for (i = tDrawStartAdjustCount; i > 0; i--) {
			y0 -= tStepY;
			y1 -= tStepY;
			if (tError >= 0) {
				x0 -= tStepX;
				x1 -= tStepX;
				tError -= tDeltaYTimes2;
			}
			tError += tDeltaXTimes2;
		}
		//draw start line
		glcd_line(x0, y0, x1, y1, color);
		tError = tDeltaXTimes2 - tDeltaY;
		for (i = th; i > 1; i--) {
			y0 += tStepY;
			y1 += tStepY;
			tOverlap = _LINE_OVERLAP_NONE;
			if (tError >= 0) {
				x0 += tStepX;
				x1 += tStepX;
				tError -= tDeltaYTimes2;
				tOverlap = _LINE_OVERLAP_MAJOR;
			}
			tError += tDeltaXTimes2;
			_drawLineOverlap(x0, y0, x1, y1, tOverlap, color);
			//glcd_line(aXStart, aYStart, aXEnd, aYEnd, aColor);
		}
	}
}

void glcd_line_angle(uint16_t x0, uint16_t y0, float angle, uint16_t start, uint16_t length, uint8_t color)
{
	if (start)
	{
		glcd_line(
			x0 + (uint16_t)(start*_cosDegrees(angle + _angleOffset)),
			y0 + (uint16_t)(start*_sinDegrees(angle + _angleOffset)),
			x0 + (uint16_t)((start + length)*_cosDegrees(angle + _angleOffset)),
			y0 + (uint16_t)((start + length)*_sinDegrees(angle + _angleOffset)), color);
	}
	else
	{
		glcd_line(
			x0,
			y0,
			x0 + length*_cosDegrees(angle + _angleOffset),
			y0 + length*_sinDegrees(angle + _angleOffset), color);
	}
}

void glcd_line_angle_thick(uint16_t x0, uint16_t y0, float angle, uint16_t start, uint16_t length, uint8_t th, uint8_t color)
{
	if (start)
	{
		glcd_line_thick(
		x0 + (uint16_t)(start*_cosDegrees(angle + _angleOffset)),
		y0 + (uint16_t)(start*_sinDegrees(angle + _angleOffset)),
		x0 + (uint16_t)((start + length)*_cosDegrees(angle + _angleOffset)),
		y0 + (uint16_t)((start + length)*_sinDegrees(angle + _angleOffset)), 4, color);
	}
	else
	{
		glcd_line_thick(
		x0,
		y0,
		x0 + length*_cosDegrees(angle + _angleOffset),
		y0 + length*_sinDegrees(angle + _angleOffset), 4, color);
	}
}

void glcd_rectangle(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint8_t color)
{
	_line_V(x0,y0,h,color);		// links
	_line_H(x0,y0,w,color);		// oben
	_line_H(x0,y0+h,w,color);	// unten
	_line_V(x0+w,y0,h,color);	// rechts
}

void glcd_rectangle_fill(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint8_t color)
{
	for (uint16_t y = y0; y < y0+h; y++)
	{
		_line_H(x0,y,w,color);
	}
}

void glcd_rectangle_round(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t r, uint8_t color)
{
	 uint16_t max_radius = ((w < h) ? w : h) / 2; // 1/2 minor axis
	 if(r > max_radius) r = max_radius;
	 // smarter version
	 _line_H(x0+r  , y0    , w-r, color); // Top
	 _line_H(x0+r  , y0+h-1, w-r, color); // Bottom
	 _line_V(x0    , y0+r  , h-r, color); // Left
	 _line_V(x0+w-1, y0+r  , h-r, color); // Right
	 // draw four corners
	 _drawCircleHelper(x0+r    , y0+r    , r, 1, color);
	 _drawCircleHelper(x0+w-r-1, y0+r    , r, 2, color);
	 _drawCircleHelper(x0+w-r-1, y0+h-r-1, r, 4, color);
	 _drawCircleHelper(x0+r    , y0+h-r-1, r, 8, color);
}

void glcd_rectangle_round_fill(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint16_t r, uint8_t color)
{
	int16_t max_radius = ((w < h) ? w : h) / 2; // 1/2 minor axis
	if(r > max_radius) r = max_radius;
	// smarter version
	
	glcd_rectangle_fill(x0+r, y0, w-2*r, h, color);
	// draw four corners
	_fillCircleHelper(x0+w-r-1, y0+r, r, 1, h-2*r-1, color);
	_fillCircleHelper(x0+r    , y0+r, r, 2, h-2*r-1, color);
}

void glcd_triangle(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t color)
{
	glcd_line(x0,y0,x1,y1,color);
	glcd_line(x1,y1,x2,y2,color);
	glcd_line(x2,y2,x0,y0,color);
}

void glcd_triangle_fill(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t color)
{
	int16_t a, b, y, last;

    // Sort coordinates by Y order (y2 >= y1 >= y0)
    if (y0 > y1) {
        _swap_int16_t(y0, y1); _swap_int16_t(x0, x1);
    }
    if (y1 > y2) {
        _swap_int16_t(y2, y1); _swap_int16_t(x2, x1);
    }
    if (y0 > y1) {
        _swap_int16_t(y0, y1); _swap_int16_t(x0, x1);
    }

    if(y0 == y2) { // Handle awkward all-on-same-line case as its own thing
        a = b = x0;
        if(x1 < a)      a = x1;
        else if(x1 > b) b = x1;
        if(x2 < a)      a = x2;
        else if(x2 > b) b = x2;
        _line_H(a, y0, b-a+1, color);
        return;
    }

    int16_t
    dx01 = x1 - x0,
    dy01 = y1 - y0,
    dx02 = x2 - x0,
    dy02 = y2 - y0,
    dx12 = x2 - x1,
    dy12 = y2 - y1;
    int32_t
    sa   = 0,
    sb   = 0;

    // For upper part of triangle, find scanline crossings for segments
    // 0-1 and 0-2.  If y1=y2 (flat-bottomed triangle), the scanline y1
    // is included here (and second loop will be skipped, avoiding a /0
    // error there), otherwise scanline y1 is skipped here and handled
    // in the second loop...which also avoids a /0 error here if y0=y1
    // (flat-topped triangle).
    if(y1 == y2) last = y1;   // Include y1 scanline
    else         last = y1-1; // Skip it

    for(y=y0; y<=last; y++) {
        a   = x0 + sa / dy01;
        b   = x0 + sb / dy02;
        sa += dx01;
        sb += dx02;
        /* longhand:
        a = x0 + (x1 - x0) * (y - y0) / (y1 - y0);
        b = x0 + (x2 - x0) * (y - y0) / (y2 - y0);
        */
        if(a > b) _swap_int16_t(a,b);
        _line_H(a, y, b-a+1, color);
    }

    // For lower part of triangle, find scanline crossings for segments
    // 0-2 and 1-2.  This loop is skipped if y1=y2.
    sa = (int32_t)dx12 * (y - y1);
    sb = (int32_t)dx02 * (y - y0);
    for(; y<=y2; y++) {
        a   = x1 + sa / dy12;
        b   = x0 + sb / dy02;
        sa += dx12;
        sb += dx02;
        /* longhand:
        a = x1 + (x2 - x1) * (y - y1) / (y2 - y1);
        b = x0 + (x2 - x0) * (y - y0) / (y2 - y0);
        */
        if(a > b) _swap_int16_t(a,b);
        _line_H(a, y, b-a+1, color);
    }
}

void glcd_circle(uint16_t x0, uint16_t y0, uint16_t r, uint8_t color)
{
	int x, y, xchange, ychange, radiusError;
	x = r;
	y = 0;
	xchange = 1 - 2 * r;
	ychange = 1;
	radiusError = 0;
	while(x >= y)
	{
		glcd_setXY(x0+x, y0+y, color); 
		glcd_setXY(x0-x, y0+y, color); 
		glcd_setXY(x0-x, y0-y, color);
		glcd_setXY(x0+x, y0-y, color); 
		glcd_setXY(x0+y, y0+x, color); 
		glcd_setXY(x0-y, y0+x, color); 
		glcd_setXY(x0-y, y0-x, color); 
		glcd_setXY(x0+y, y0-x, color); 
		y++;
		radiusError += ychange;
		ychange += 2;
		if ( 2*radiusError + xchange > 0 )
		{
			x--;
			radiusError += xchange;
			xchange += 2;
		}
	}
}

void glcd_circle_fill(uint16_t x0, uint16_t y0, uint16_t r, uint8_t color)
{
	_line_V(x0, y0 - r, 2*r+1, color);
	_fillCircleHelper(x0,y0,r,3,0,color);
}

void glcd_circle_thick(uint16_t Xpos, uint16_t Ypos, uint16_t Radius, uint16_t lineThickness, uint8_t color)
{
	uint16_t Radius2 = Radius - lineThickness;

	// Good, may not be the fastest
	// Does not draw overlapping pixels
	_line_H(Xpos - Radius + 1, Ypos, lineThickness-1, color);	// Left Middle
	_line_H(Xpos + Radius2, Ypos, lineThickness-1, color);	// Right Middle
	_line_V(Xpos, Ypos - Radius + 1, lineThickness-1, color);	// Top Middle
	_line_V(Xpos, Ypos + Radius2, lineThickness-1, color);	// Bottom middle
	uint32_t RR = Radius * Radius;
	uint32_t R2R2 = Radius2 * Radius2;
	for(int16_t y = -Radius; y < 0; y++) {
		for(int16_t x= -Radius; x < 0; x++) {
			uint32_t r2 = x * x + y * y;
			if ((r2 <= RR) && (r2 >= R2R2)) {
				glcd_setXY(Xpos+x, Ypos+y, color);
				glcd_setXY(Xpos+x, Ypos-y, color);
				glcd_setXY(Xpos-x, Ypos+y, color);
				glcd_setXY(Xpos-x, Ypos-y, color);
			}
		}
	}
}

void glcd_ellipse(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h, uint8_t color)
{
	int16_t x1 = x0+w, y1 = y0+h;
	long a = abs(x1-x0), b = abs(y1-y0), b1 = b&1; /* values of diameter */
	double dx = 4*(1-a)*b*b, dy = 4*(b1+1)*a*a; /* error increment */
	double err = dx+dy+b1*a*a, e2; /* error of 1.step */

	if (x0 > x1) { x0 = x1; x1 += a; } /* if called with swapped points */
	if (y0 > y1) y0 = y1; /* .. exchange them */
	y0 += (b+1)/2; y1 = y0-b1;   /* starting pixel */
	a *= 8*a; b1 = 8*b*b;

	do {
		glcd_setXY(x1, y0, color); /*   I. Quadrant */
		glcd_setXY(x0, y0, color); /*  II. Quadrant */
		glcd_setXY(x0, y1, color); /* III. Quadrant */
		glcd_setXY(x1, y1, color); /*  IV. Quadrant */
		e2 = 2*err;
		if (e2 <= dy) { y0++; y1--; err += dy += a; }  /* y step */
		if (e2 >= dx || 2*err > dy) { x0++; x1--; err += dx += b1; } /* x step */
	} while (x0 <= x1);
	
	while (y0-y1 < b) {  /* too early stop of flat ellipses a=1 */
		glcd_setXY(x0-1, y0, color); /* -> finish tip of ellipse */
		glcd_setXY(x1+1, y0++, color);
		glcd_setXY(x0-1, y1, color);
		glcd_setXY(x1+1, y1--, color);
	}
}

void glcd_arc_thick(uint16_t x0, uint16_t y0, uint16_t r, uint16_t th, float sAngle, float eAngle, uint8_t color)
{
	if ((sAngle == 0) && (eAngle == _arcAngleMax))
	{
		_fillArcOffsetted(x0, y0, r, th, 0, _arcAngleMax, color);
	}
	else
	{
		_fillArcOffsetted(x0, y0, r, th, sAngle + (_angleOffset / (float)360)*_arcAngleMax, eAngle + (_angleOffset / (float)360)*_arcAngleMax, color);
	}
}

void glcd_quad_bezier(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint8_t color)
{
	int x = x0-x1, y = y0-y1;
	double t = x0-2*x1+x2, r;
	if ((long)x*(x2-x1) > 0) { /* horizontal cut at P4? */
		if ((long)y*(y2-y1) > 0) /* vertical cut at P6 too? */
		if (fabs((y0-2*y1+y2)/t*x) > abs(y)) { /* which first? */
			x0 = x2; x2 = x+x1; y0 = y2; y2 = y+y1; /* swap points */
		} /* now horizontal cut at P4 comes first */
		t = (x0-x1)/t;
		r = (1-t)*((1-t)*y0+2.0*t*y1)+t*t*y2; /* By(t=P4) */
		t = (x0*x2-x1*x1)*t/(x0-x1); /* gradient dP4/dx=0 */
		x = floor(t+0.5); y = floor(r+0.5);
		r = (y1-y0)*(t-x0)/(x1-x0)+y0; /* intersect P3 | P0 P1 */
		_plotQuadBezierSeg(x0,y0, x,floor(r+0.5), x,y, color);
		r = (y1-y2)*(t-x2)/(x1-x2)+y2; /* intersect P4 | P1 P2 */
		x0 = x1 = x; y0 = y; y1 = floor(r+0.5); /* P0 = P4, P1 = P8 */
	}
	if ((long)(y0-y1)*(y2-y1) > 0) { /* vertical cut at P6? */
		t = y0-2*y1+y2; t = (y0-y1)/t;
		r = (1-t)*((1-t)*x0+2.0*t*x1)+t*t*x2; /* Bx(t=P6) */
		t = (y0*y2-y1*y1)*t/(y0-y1); /* gradient dP6/dy=0 */
		x = floor(r+0.5); y = floor(t+0.5);
		r = (x1-x0)*(t-y0)/(y1-y0)+x0; /* intersect P6 | P0 P1 */
		_plotQuadBezierSeg(x0,y0, floor(r+0.5),y, x,y, color);
		r = (x1-x2)*(t-y2)/(y1-y2)+x2; /* intersect P7 | P1 P2 */
		x0 = x; x1 = floor(r+0.5); y0 = y1 = y; /* P0 = P6, P1 = P7 */
	}
	_plotQuadBezierSeg(x0,y0, x1,y1, x2,y2, color); /* remaining part */
}

void glcd_quad_rational_bezier(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t x2, int16_t y2, float w, uint8_t color)
{ /* plot any quadratic rational Bezier curve */
	int x = x0-2*x1+x2, y = y0-2*y1+y2;
	double xx = x0-x1, yy = y0-y1, ww, t, q;
	assert(w >= 0.0);
	if (xx*(x2-x1) > 0) 
	{ /* horizontal cut at P4? */
		if (yy*(y2-y1) > 0) /* vertical cut at P6 too? */
		if (fabs(xx*y) > fabs(yy*x)) { /* which first? */
			x0 = x2; x2 = xx+x1; y0 = y2; y2 = yy+y1; /* swap points */
		} /* now horizontal cut at P4 comes first */
		if (x0 == x2 || w == 1.0) t = (x0-x1)/(double)x;
		else { /* non-rational or rational case */
			q = sqrt(4.0*w*w*(x0-x1)*(x2-x1)+(x2-x0)*(long)(x2-x0));
			if (x1 < x0) q = -q;
			t = (2.0*w*(x0-x1)-x0+x2+q)/(2.0*(1.0-w)*(x2-x0));/* t at P4 */
		}
		q = 1.0/(2.0*t*(1.0-t)*(w-1.0)+1.0); /* sub-divide at t */
		xx = (t*t*(x0-2.0*w*x1+x2)+2.0*t*(w*x1-x0)+x0)*q; /* = P4 */
		yy = (t*t*(y0-2.0*w*y1+y2)+2.0*t*(w*y1-y0)+y0)*q;
		ww = t*(w-1.0)+1.0; ww *= ww*q; /* squared weight P3 */
		w = ((1.0-t)*(w-1.0)+1.0)*sqrt(q); /* weight P8 */
		x = floor(xx+0.5); y = floor(yy+0.5); /* P4 */
		yy = (xx-x0)*(y1-y0)/(x1-x0)+y0; /* intersect P3 | P0 P1 */
		_plotQuadRationalBezierSeg(x0,y0, x,floor(yy+0.5), x,y, ww, color);
		yy = (xx-x2)*(y1-y2)/(x1-x2)+y2; /* intersect P4 | P1 P2 */
		y1 = floor(yy+0.5); x0 = x1 = x; y0 = y; /* P0 = P4, P1 = P8 */
	}
	if ((y0-y1)*(long)(y2-y1) > 0) { /* vertical cut at P6? */
		if (y0 == y2 || w == 1.0) t = (y0-y1)/(y0-2.0*y1+y2);
		else { /* non-rational or rational case */
			q = sqrt(4.0*w*w*(y0-y1)*(y2-y1)+(y2-y0)*(long)(y2-y0));
			if (y1 < y0) q = -q;
			t = (2.0*w*(y0-y1)-y0+y2+q)/(2.0*(1.0-w)*(y2-y0));/* t at P6 */
		}
		q = 1.0/(2.0*t*(1.0-t)*(w-1.0)+1.0); /* sub-divide at t */
		xx = (t*t*(x0-2.0*w*x1+x2)+2.0*t*(w*x1-x0)+x0)*q; /* = P6 */
		yy = (t*t*(y0-2.0*w*y1+y2)+2.0*t*(w*y1-y0)+y0)*q;
		ww = t*(w-1.0)+1.0; ww *= ww*q; /* squared weight P5 */
		w = ((1.0-t)*(w-1.0)+1.0)*sqrt(q); /* weight P7 */
		x = floor(xx+0.5); y = floor(yy+0.5); /* P6 */
		xx = (x1-x0)*(yy-y0)/(y1-y0)+x0; /* intersect P6 | P0 P1 */
		_plotQuadRationalBezierSeg(x0,y0, floor(xx+0.5),y, x,y, ww, color);
		xx = (x1-x2)*(yy-y2)/(y1-y2)+x2; /* intersect P7 | P1 P2 */
		x1 = floor(xx+0.5); x0 = x; y0 = y1 = y; /* P0 = P6, P1 = P7 */
	}
	_plotQuadRationalBezierSeg(x0,y0, x1,y1, x2,y2, w*w, color); /* remaining */
}
	
void glcd_cubic_bezier(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t x2, int16_t y2, int16_t x3, int16_t y3, uint8_t color)
{ /* plot any cubic Bezier curve */
	int n = 0, i = 0;
	long xc = x0+x1-x2-x3, xa = xc-4*(x1-x2);
	long xb = x0-x1-x2+x3, xd = xb+4*(x1+x2);
	long yc = y0+y1-y2-y3, ya = yc-4*(y1-y2);
	long yb = y0-y1-y2+y3, yd = yb+4*(y1+y2);
	float fx0 = x0, fx1, fx2, fx3, fy0 = y0, fy1, fy2, fy3;
	double t1 = xb*xb-xa*xc, t2, t[5];
	/* sub-divide curve at gradient sign changes */
	if (xa == 0) { /* horizontal */
		if (abs(xc) < 2*abs(xb)) t[n++] = xc/(2.0*xb); /* one change */
		} else if (t1 > 0.0) { /* two changes */
		t2 = sqrt(t1);
		t1 = (xb-t2)/xa; if (fabs(t1) < 1.0) t[n++] = t1;
		t1 = (xb+t2)/xa; if (fabs(t1) < 1.0) t[n++] = t1;
	}
	t1 = yb*yb-ya*yc;
	if (ya == 0) { /* vertical */
		if (abs(yc) < 2*abs(yb)) t[n++] = yc/(2.0*yb); /* one change */
		} else if (t1 > 0.0) { /* two changes */
		t2 = sqrt(t1);
		t1 = (yb-t2)/ya; if (fabs(t1) < 1.0) t[n++] = t1;
		t1 = (yb+t2)/ya; if (fabs(t1) < 1.0) t[n++] = t1;
	}
	for (i = 1; i < n; i++) /* bubble sort of 4 points */
	if ((t1 = t[i-1]) > t[i]) { t[i-1] = t[i]; t[i] = t1; i = 0; }
	t1 = -1.0; t[n] = 1.0; /* begin / end point */
	for (i = 0; i <= n; i++) { /* plot each segment separately */
		t2 = t[i]; /* sub-divide at t[i-1], t[i] */
		fx1 = (t1*(t1*xb-2*xc)-t2*(t1*(t1*xa-2*xb)+xc)+xd)/8-fx0;
		fy1 = (t1*(t1*yb-2*yc)-t2*(t1*(t1*ya-2*yb)+yc)+yd)/8-fy0;
		fx2 = (t2*(t2*xb-2*xc)-t1*(t2*(t2*xa-2*xb)+xc)+xd)/8-fx0;
		fy2 = (t2*(t2*yb-2*yc)-t1*(t2*(t2*ya-2*yb)+yc)+yd)/8-fy0;
		fx0 -= fx3 = (t2*(t2*(3*xb-t2*xa)-3*xc)+xd)/8;
		fy0 -= fy3 = (t2*(t2*(3*yb-t2*ya)-3*yc)+yd)/8;
		x3 = floor(fx3+0.5); y3 = floor(fy3+0.5); /* scale bounds to int */
		if (fx0 != 0.0) { fx1 *= fx0 = (x0-x3)/fx0; fx2 *= fx0; }
		if (fy0 != 0.0) { fy1 *= fy0 = (y0-y3)/fy0; fy2 *= fy0; }
		if (x0 != x3 || y0 != y3) /* segment t1 - t2 */
		_plotCubicBezierSeg(x0,y0, x0+fx1,y0+fy1, x0+fx2,y0+fy2, x3,y3, color);
		x0 = x3; y0 = y3; fx0 = fx3; fy0 = fy3; t1 = t2;
	}
}

void glcd_clear(uint8_t color)
{
	for (uint16_t cy = 0; cy < GLCD_HEIGHT; cy++)
	{
		for (uint16_t cx = 0; cx < GLCD_WIDTH; cx++)
		{
			glcd_setXY(cx, cy, color);
		}
	}
}

void glcd_invert(uint16_t x0, uint16_t y0, uint16_t w, uint16_t h)
{
	uint8_t c = 0;
	for (uint16_t cy = y0; cy < y0+h; cy++)
	{
		for (uint16_t cx = x0; cx < x0+w; cx++)
		{
			c = glcd_getXY(cx,cy);
			glcd_setXY(cx,cy,~c);
		}
	}
}

void glcd_load_imageXY_progmem(uint16_t x0, uint16_t y0, const char *image, uint16_t w, uint16_t h, uint8_t fgcolor, uint16_t bgcolor)
{
	for (uint16_t y_scan = 0; y_scan < h; y_scan++)
	{
		for (uint16_t x_scan = 0; x_scan < w; x_scan++)
		{
			uint16_t mempos = (y_scan / 8) * 50 + x_scan;
			uint8_t img_data = pgm_read_byte(&image[mempos]);
			uint8_t bitmask = (1 << (y_scan - ((uint8_t)( y_scan / 8) * 8)));
			
			if (img_data & bitmask)
			{
				glcd_setXY(x0 + x_scan,y0 + y_scan,fgcolor);
			}
			else
			{
				if (!(bgcolor == GLCD_BG_TRANSPARENT)) glcd_setXY(x0 + x_scan,y0 + y_scan,bgcolor);
			}
		}
	}
}

void glcd_drawXBitmap(uint16_t x0, uint16_t y0, const uint8_t bitmap[], uint16_t w, uint16_t h, uint8_t fgcolor, uint16_t bgcolor)
{
	int16_t byteWidth = (w + 7) / 8; // Bitmap scanline pad = whole byte
	uint8_t byte = 0;

	for (int16_t j = 0; j < h; j++, y0++)
	{
		for (int16_t i = 0; i < w; i++)
		{
			if (i & 7)
			{
				byte >>= 1;
			}
			else
			{
				byte = pgm_read_byte(&bitmap[j * byteWidth + i / 8]);
			}
			
			if (byte & 0x01)
			{
				glcd_setXY(x0 + i, y0, fgcolor);
			}
			else
			{
				if (!(bgcolor & (1<<8)))
				{
					glcd_setXY(x0 + i, y0, bgcolor);
				}
			}
		}
	}
}

void glcd_setTextBGcolor(uint16_t bgcolor)
{
	_bgcolor = bgcolor;
}

void glcd_setTextFGcolor(uint8_t fgcolor)
{
	_fgcolor = fgcolor;
}

void glcd_setTextSize(uint8_t size)
{
	_size = size;
}

void glcd_char(uint16_t x0, uint16_t y0, char c, uint8_t fgcolor, uint16_t bgcolor, uint8_t size)
{
	if((x0 >= GLCD_WIDTH)            || // Clip right
		(y0 >= GLCD_HEIGHT)           || // Clip bottom
		((x0 + 6 * size - 1) < 0) || // Clip left
		((y0 + 8 * size - 1) < 0))   // Clip top
	return;

	for(char i=0; i<5; i++ )
	{ // Char bitmap = 5 columns
		char line = pgm_read_byte(&(font[c * 5 + i]));
		for(char j=0; j<8; j++, line >>= 1) 
		{
			if(line & 1)
			{
				if (size == 1)
				{
					glcd_setXY(x0+i, y0+j, fgcolor);
				}
				else
				{
					glcd_rectangle_fill(x0+i*size, y0+j*size, size-1, size, fgcolor);
					
				}
			}
			else
			{
				if (!(bgcolor == GLCD_BG_TRANSPARENT))
				{
					if (size == 1)
					{
						glcd_setXY(x0+i,y0+j, bgcolor);
					}
					else
					{
						glcd_rectangle_fill(x0+i*size, y0+j*size, size-1, size, bgcolor);
					}
				}
			}
		}
	}
}

void glcd_print(uint16_t x0, uint16_t y0, char *character)
{
	while(*character)
	{
		glcd_char(x0, y0, *character, _fgcolor, _bgcolor, _size);
		if (*character++)
			x0 += _size * 6;
	}
}

void glcd_print_progmem(uint16_t x0, uint16_t y0,const char *character)
{
	char c;
	while ( (c = pgm_read_byte(character++)) )
	{
		glcd_char(x0, y0, c, _fgcolor, _bgcolor, _size);
		x0 += _size * 6;
	}
}

void glcd_printf(uint16_t x0, uint16_t y0, char *fmt, ...)
{
	va_list ap;
	char buf[128];
	
	va_start(ap, fmt);
	vsnprintf(buf, 128, fmt, ap);
	va_end(ap);
	
	glcd_print(x0,y0,buf);
}

void glcd_printf_progmem(uint16_t x0, uint16_t y0, const char *fmt, ...)
{
	va_list ap;
	char buf[128];
	
	va_start(ap, fmt);
	vsnprintf_P(buf, 128, fmt, ap);
	va_end(ap);
	
	glcd_print(x0,y0,buf);
}
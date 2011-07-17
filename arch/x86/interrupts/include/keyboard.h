/*
 *   Keyboard translation table.
 *   Copyright (C) 2011  Michel Megens
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

struct scancode_list {
	unsigned char xt;
	unsigned char at2;
	unsigned char at3;
	unsigned char sun;
	unsigned char usb;
	unsigned char adb;
	unsigned char code;
	unsigned char value;
} keycodes[] = {

	{0x0, 0xff, 0x00, 0xff, 0x00, 0xff, 0, '\0'},
	{0x01, 0x76, 0x08, 0x1d, 0x29, 0x35,   1, '\0'},	/* Esc */
	{0x02, 0x16, 0x16, 0x1e, 0x1e, 0x12,   2, '1'},	/* 1 ! */
	{0x03, 0x1e, 0x1e, 0x1f, 0x1f, 0x13,   3, '2'},	/* 2 @ */
	{0x04, 0x26, 0x26, 0x20, 0x20, 0x14,   4, '3'},	/* 3 # */
	{0x05, 0x25, 0x25, 0x21, 0x21, 0x15,   5, '4'},	/* 4 $ */
	{0x06, 0x2e, 0x2e, 0x22, 0x22, 0x17,   6, '5'},	/* 5 % */
	{0x07, 0x36, 0x36, 0x23, 0x23, 0x16,   7, '6'},	/* 6 ^ */
	{0x08, 0x3d, 0x3d, 0x24, 0x24, 0x1a,   8, '7'},	/* 7 & */
	{0x09, 0x3e, 0x3e, 0x25, 0x25, 0x1c,   9, '8'},	/* 8 * */
	{0x0a, 0x46, 0x46, 0x26, 0x26, 0x19,  10, '9'},	/* 9 ( */
	{0x0b, 0x45, 0x45, 0x27, 0x27, 0x1d,  11, '0'},	/* 0 ) */
	{0x0c, 0x4e, 0x4e, 0x28, 0x2d, 0x1b,  12, '-'},	/* - _ */
	{0x0d, 0x55, 0x55, 0x29, 0x2e, 0x18,  13,'='},	/* = + */
	{0x0e, 0x66, 0x66, 0x2b, 0x2a, 0x33,  14,'\b'},	/* Backspace */
	{0x0f, 0x0d, 0x0d, 0x35, 0x2b, 0x30,  15, '\t'},	/* Tab */
	{0x10, 0x15, 0x15, 0x36, 0x14, 0x0c,  16, 'q'},	/* Q */
	{0x11, 0x1d, 0x1d, 0x37, 0x1a, 0x0d,  17, 'w'},	/* W */
	{0x12, 0x24, 0x24, 0x38, 0x08, 0x0e,  18, 'e'},	/* E */
	{0x13, 0x2d, 0x2d, 0x39, 0x15, 0x0f,  19, 'r'},	/* R */
	{0x14, 0x2c, 0x2c, 0x3a, 0x17, 0x11,  20, 't'},	/* T */
	{0x15, 0x35, 0x35, 0x3b, 0x1c, 0x10,  21, 'y'},	/* Y */
	{0x16, 0x3c, 0x3c, 0x3c, 0x18, 0x20,  22, 'u'},	/* U */
	{0x17, 0x43, 0x43, 0x3d, 0x0c, 0x22,  23, 'i'},	/* I */
	{0x18, 0x44, 0x44, 0x3e, 0x12, 0x1f,  24, 'o'},	/* O */
	{0x19, 0x4d, 0x4d, 0x3f, 0x13, 0x23,  25, 'p'},	/* P */
	{0x1a, 0x54, 0x54, 0x40, 0x2f, 0x21,  26, '['},	/* [ { */
	{0x1b, 0x5b, 0x5b, 0x41, 0x30, 0x1e,  27, ']'},	/* ] } */
	{0x1c, 0x5a, 0x5a, 0x59, 0x28, 0x24,  28, '\n'},	/* Enter */
	{0x1d, 0x14, 0x11, 0x4c, 0xe0, 0x36,  29,'\0'},	/* Left Control */
	{0x1e, 0x1c, 0x1c, 0x4d, 0x04, 0x00,  30, 'a'},	/* A */
	{0x1f, 0x1b, 0x1b, 0x4e, 0x16, 0x01,  31, 's'},	/* S */
	{0x20, 0x23, 0x23, 0x4f, 0x07, 0x02,  32, 'd'},	/* D */
	{0x21, 0x2b, 0x2b, 0x50, 0x09, 0x03,  33, 'f'},	/* F */
	{0x22, 0x34, 0x34, 0x51, 0x0a, 0x05,  34, 'g'},	/* G */
	{0x23, 0x33, 0x33, 0x52, 0x0b, 0x04,  35, 'h'},	/* H */
	{0x24, 0x3b, 0x3b, 0x53, 0x0d, 0x26,  36, 'j'},	/* J */
	{0x25, 0x42, 0x42, 0x54, 0x0e, 0x28,  37, 'k'},	/* K */
	{0x26, 0x4b, 0x4b, 0x55, 0x0f, 0x25,  38, 'l'},	/* L */
	{0x27, 0x4c, 0x4c, 0x56, 0x33, 0x29,  39, ';'},	/* ; : */
	{0x28, 0x52, 0x52, 0x57, 0x34, 0x27,  40, '\''},	/* ' " */
	{0x29, 0x0e, 0x0e, 0x2a, 0x35, 0x32,  41, '`'},	/* ` ~ */
	{0x2a, 0x12, 0x12, 0x63, 0xe1, 0x38,  42, '\0'},	/* Left Shift */
	{0x2b, 0x5d, 0x5c, 0x58, 0x31, 0x2a,  43, '|'},	/* \ | */
	{0x2c, 0x1a, 0x1a, 0x64, 0x1d, 0x06,  44, 'z'},	/* Z */
	{0x2d, 0x22, 0x22, 0x65, 0x1b, 0x07,  45, 'x'},	/* X */
	{0x2e, 0x21, 0x21, 0x66, 0x06, 0x08,  46, 'c'},	/* C */
	{0x2f, 0x2a, 0x2a, 0x67, 0x19, 0x09,  47, 'v'},	/* V */
	{0x30, 0x32, 0x32, 0x68, 0x05, 0x0b,  48, 'b'},	/* B */
	{0x31, 0x31, 0x31, 0x69, 0x11, 0x2d,  49, 'n'},	/* N */
	{0x32, 0x3a, 0x3a, 0x6a, 0x10, 0x2e,  50, 'm'},	/* M */
	{0x33, 0x41, 0x41, 0x6b, 0x36, 0x2b,  51, ','},	/* , < */
	{0x34, 0x49, 0x49, 0x6c, 0x37, 0x2f,  52, '.'},	/* . > */
	{0x35, 0x4a, 0x4a, 0x6d, 0x38, 0x2c,  53, '/'},	/* / ? */
	{0x36, 0x59, 0x59, 0x6e, 0xe5, 0x7b,  54,'\0'},	/* Right Shift */
	{0x37, 0x7c, 0x7e, 0x2f, 0x55, 0x43,  55, '\0'},	/* KP * */
	{0x38, 0x11, 0x19, 0x13, 0xe2, 0x37,  56, '\0'},	/* Left Alt */
	{0x39, 0x29, 0x29, 0x79, 0x2c, 0x31,  57, ' '},	/* Space */
	{0x3a, 0x58, 0x14, 0x77, 0x39, 0x39,  58, '\0'},	/* Caps Lock */
	{0x3b, 0x05, 0x07, 0x05, 0x3a, 0x7a,  59, '\0'},	/* F1 */
	{0x3c, 0x06, 0x0f, 0x06, 0x3b, 0x78,  60, '\0'},	/* F2 */
	{0x3d, 0x04, 0x17, 0x08, 0x3c, 0x63,  61, '\0'},	/* F3 */
	{0x3e, 0x0c, 0x1f, 0x0a, 0x3d, 0x76,  62, '\0'},	/* F4 */
	{0x3f, 0x03, 0x27, 0x0c, 0x3e, 0x60,  63, '\0'},	/* F5 */
	{0x40, 0x0b, 0x2f, 0x0e, 0x3f, 0x61,  64, '\0'},	/* F6 */
	{0x41, 0x02, 0x37, 0x10, 0x40, 0x62,  65, '\0'},	/* F7 */
	{0x42, 0x0a, 0x3f, 0x11, 0x41, 0x64,  66, '\0'},	/* F8 */
	{0x43, 0x01, 0x47, 0x12, 0x42, 0x65,  67, '\0'},	/* F9 */
	{0x44, 0x09, 0x4f, 0x07, 0x43, 0x6d,  68, '\0'},	/* F10 */
	{0x45, 0x77, 0x76, 0x62, 0x53, 0x47,  69, '\0'},	/* Num Lock */
	{0x46, 0x7e, 0x5f, 0x17, 0x47, 0x6b,  70, '\0'},	/* Scroll Lock Break */
	{0x47, 0x6c, 0x6c, 0x44, 0x5f, 0x59,  71, '\0'},	/* KP Home 7 */
	{0x48, 0x75, 0x75, 0x45, 0x60, 0x5b,  72, '\0'},	/* KP Up 8 */
	{0x49, 0x7d, 0x7d, 0x46, 0x61, 0x5c,  73, '\0'},	/* KP PgUp 9 */
	{0x4a, 0x7b, 0x84, 0x47, 0x56, 0x4e,  74, '\0'},	/* KP - */
	{0x4b, 0x6b, 0x6b, 0x5b, 0x5c, 0x56,  75, '\0'},	/* KP Left 4 */
	{0x4c, 0x73, 0x73, 0x5c, 0x5d, 0x57,  76, '\0'},	/* KP 5 */
	{0x4d, 0x74, 0x74, 0x5d, 0x5e, 0x58,  77, '\0'},	/* KP Right 6 */
	{0x4e, 0x79, 0x7c, 0x7d, 0x57, 0x45,  78, '\0'},	/* KP + */
	{0x4f, 0x69, 0x69, 0x70, 0x59, 0x53,  79, '\0'},	/* KP End 1 */
	{0x50, 0x72, 0x72, 0x71, 0x5a, 0x54,  80, '\0'},	/* KP Down 2 */
	{0x51, 0x7a, 0x7a, 0x72, 0x5b, 0x55,  81, '\0'},	/* KP PgDn 3 */
	{0x52, 0x70, 0x70, 0x5e, 0x62, 0x52,  82, '\0'},	/* KP Ins 0 */
	{0x53, 0x71, 0x71, 0x32, 0x63, 0x41,  83, '\0'},	/* KP Del . */

/*
 * The most common extensions to the base.
 */

	{   0, 0x78, 0x56, 0x09, 0x44, 0x67,  87, '\0'},	/* F11 */
	{   0, 0x07, 0x5e, 0x0b, 0x45, 0x6f,  88, '\0'},	/* F12 */
	{   0, 0xda, 0x79, 0x5a, 0x58, 0x4c,  96, '\0'},	/* KP Enter */
	{   0, 0xca, 0x77, 0x2e, 0x54, 0x4b,  98, '\0'},	/* KP / */
	{   0, 0x91, 0x39, 0x0d, 0xe6, 0x7c, 100, '\0'},	/* Right Alt (Graph) */
	{   0,    0, 0x58,    0,    0,    0, 100, '\0'},	/* Alt Graph - Sun PS/2 Type 5 */
	{   0, 0xf1, 0x64, 0x42, 0x4c, 0x75, 111, '\0'},	/* Delete */
	{   0, 0xfe, 0x62, 0x15, 0x48, 0x71, 119, '\0'},	/* Pause Break */
	{   0, 0xf7,    0,    0,    0,    0, 119, '\0'},	/* Alternate Pause Break */

/*
 * The separate navigation keys
 */

	{   0, 0xec, 0x6e, 0x34, 0x4a, 0x73, 102, '\0'},	/* Home */
	{   0, 0xf5, 0x63, 0x14, 0x52, 0x3e, 103, '\0'},	/* Up */
	{   0, 0xfd, 0x6f, 0x60, 0x4b, 0x74, 104, '\0'},	/* Page Up */
	{   0, 0xeb, 0x61, 0x18, 0x50, 0x3b, 105, '\0'},	/* Left */
	{   0, 0xf4, 0x6a, 0x1c, 0x4f, 0x3c, 106, '\0'},	/* Right */
	{   0, 0xe9, 0x65, 0x4a, 0x4d, 0x77, 107, '\0'},	/* End */
	{   0, 0xf2, 0x60, 0x1b, 0x51, 0x3d, 108, '\0'},	/* Down */
	{   0, 0xfa, 0x6d, 0x7b, 0x4e, 0x79, 109, '\0'},	/* Page Down */
	{   0, 0xf0, 0x67, 0x2c, 0x49, 0x72, 110, '\0'},	/* Insert */

/*
 * The OS keys
 */

	{   0, 0x9f, 0x8b, 0x78, 0xe3,    0, 125, '\0'},	/* Left Meta (Win, Apple, Amiga) */
	{   0, 0xa7, 0x8c, 0x7a, 0xe7,    0, 126, '\0'},	/* Right Meta (Win, Apple, Amiga) */
	{   0, 0xaf, 0x8d, 0x43, 0x65,    0, 127, '\0'}	/* Compose (Application) */

};
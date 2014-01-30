#ifndef FONT8X16_H
#define FONT8X16_H

#include <avr/pgmspace.h>

static const unsigned char font8x16[] PROGMEM = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	8,16,0,160,2,56,		
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0xFC, 0x1C, 0x1C, 0x3C, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x28, 0x1C, 0x00, 0x00, 0x00,
	0x00, 0x3C, 0xC2, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xF8, 0x6C, 0x3C, 0x34, 0xFE, 0x00, 0x00, 0x88, 0xF0, 0x0E, 0xF8, 0x80, 0x00, 0x00, 0x00,
	0x80, 0x80, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF8, 0xFC, 0x00, 0x00, 0x00,
	0x00, 0x04, 0xFE, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00,
	0x3C, 0x42, 0xFE, 0x02, 0xFE, 0x00, 0x00, 0x00, 0x80, 0x80, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0xFE, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x80, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x1F, 0x18, 0x18, 0x1C, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x01, 0x3F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x38, 0x0F, 0x00, 0x00, 0x0C, 0x07, 0x00, 0x00, 0x08, 0x07, 0x38, 0x0F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x10, 0x3F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF0, 0xF0, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0xF0, 0xC0, 0xF0, 0xF0,
	0xF0, 0xF8, 0xFC, 0xB8, 0x30, 0x00, 0x00, 0x00, 0x70, 0x88, 0x88, 0x70, 0xC0, 0xF0, 0x18, 0x00,
	0x00, 0x00, 0x70, 0xF8, 0xD8, 0xF8, 0x70, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE0, 0xF8, 0x18, 0x00, 0x00, 0x00, 0x00, 0x18, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0xF0, 0x38, 0xF0, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x18, 0x00, 0x00, 0x00, 0x00,
	0xF0, 0xF8, 0x18, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0x70, 0x78, 0x98, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x30, 0x38, 0x98, 0xF8, 0x70, 0x00, 0x00, 0x00,
	0x00, 0xC0, 0x70, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xD8, 0xD8, 0x98, 0x00, 0x00, 0x00,
	0x00, 0xF0, 0xF8, 0xD8, 0xD8, 0x90, 0x00, 0x00, 0x00, 0x18, 0x18, 0x98, 0xF8, 0x38, 0x00, 0x00,
	0x70, 0xF8, 0xD8, 0xF8, 0x70, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0x18, 0xF8, 0xF0, 0x00, 0x00, 0x00,
	0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x60, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x30, 0x38, 0x98, 0xF8, 0x70, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x1E, 0x1F, 0x07, 0x1E, 0x0F, 0x07, 0x06,
	0x0C, 0x1D, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x0F, 0x03, 0x0E, 0x11, 0x11,
	0x00, 0x0E, 0x1F, 0x19, 0x1B, 0x1F, 0x1E, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x1F, 0x03, 0x03, 0x03,
	0x00, 0x58, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0F, 0x1F, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x1C, 0x1E, 0x1F, 0x19, 0x18, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x19, 0x1F, 0x0F, 0x00, 0x00, 0x00,
	0x07, 0x07, 0x06, 0x1F, 0x1F, 0x06, 0x00, 0x00, 0x0D, 0x1D, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0x0F, 0x1F, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0x01, 0x00, 0x00, 0x00,
	0x0F, 0x1F, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x09, 0x1B, 0x1B, 0x1F, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x07, 0x07, 0x04, 0x0C, 0x08, 0x00, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D,
	0x00, 0x00, 0x18, 0x08, 0x0C, 0x04, 0x07, 0x07, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x60, 0x10, 0x10, 0xC8, 0xC8, 0x48, 0xC8, 0x00, 0xE0, 0xF8, 0xF8, 0xE0, 0x00, 0x00, 0x00,
	0x00, 0xF8, 0xF8, 0x98, 0x98, 0xF8, 0x70, 0x00, 0x00, 0xF0, 0xF8, 0x18, 0x18, 0x78, 0x70, 0x00,
	0x00, 0xF8, 0xF8, 0x18, 0x18, 0xF8, 0xF0, 0x00, 0x00, 0xF8, 0xF8, 0x98, 0x98, 0x98, 0x00, 0x00,
	0x00, 0xF8, 0xF8, 0x98, 0x98, 0x98, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0x18, 0x18, 0x78, 0x70, 0x00,
	0x00, 0xF8, 0xF8, 0x80, 0x80, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xC0, 0xF8, 0x38, 0x08, 0x00,
	0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x80, 0x80, 0xF8, 0xF8,
	0x00, 0xF8, 0xF8, 0xF0, 0x80, 0xF8, 0xF8, 0x00, 0x00, 0xF0, 0xF8, 0x18, 0x18, 0xF8, 0xF0, 0x00,
	0x00, 0xF8, 0xF8, 0x98, 0x98, 0xF8, 0xF0, 0x00, 0x00, 0xF0, 0xF8, 0x18, 0x18, 0xF8, 0xF0, 0x00,
	0x00, 0xF8, 0xF8, 0x98, 0x98, 0xF8, 0x70, 0x00, 0x00, 0x70, 0xF8, 0xD8, 0xB8, 0x30, 0x00, 0x00,
	0x18, 0x18, 0xF8, 0xF8, 0x18, 0x18, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00,
	0x38, 0xF8, 0xC0, 0xC0, 0xF8, 0x38, 0x00, 0x00, 0x38, 0xF8, 0xC0, 0xF0, 0x78, 0xF0, 0xE0, 0xF8,
	0x08, 0x78, 0xF0, 0xF0, 0x78, 0x08, 0x00, 0x00, 0x08, 0x78, 0xF0, 0xF0, 0x78, 0x08, 0x00, 0x00,
	0x00, 0x18, 0x18, 0xF8, 0xF8, 0x38, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00,
	0x38, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0xC0, 0x70, 0x30, 0x70, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0F, 0x10, 0x20, 0x47, 0x4F, 0x48, 0x4C, 0x4F, 0x1C, 0x1F, 0x07, 0x07, 0x1F, 0x1C, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x19, 0x19, 0x1F, 0x0F, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x1E, 0x0E, 0x00,
	0x00, 0x1F, 0x1F, 0x18, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x1F, 0x1F, 0x19, 0x19, 0x19, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x1B, 0x0F, 0x1F, 0x00,
	0x00, 0x1F, 0x1F, 0x01, 0x01, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0E, 0x1E, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x01, 0x1F, 0x1E, 0x10, 0x00,
	0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x03, 0x1F, 0x1F, 0x03, 0x1F,
	0x00, 0x1F, 0x1F, 0x01, 0x0F, 0x1F, 0x1F, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x1F, 0x0F, 0x00,
	0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x3F, 0x2F, 0x00,
	0x00, 0x1F, 0x1F, 0x01, 0x01, 0x1F, 0x1F, 0x00, 0x00, 0x0E, 0x1E, 0x19, 0x1F, 0x0F, 0x00, 0x00,
	0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x1F, 0x0F, 0x00,
	0x00, 0x07, 0x1F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x07,
	0x10, 0x1E, 0x0F, 0x0F, 0x1E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1C, 0x1F, 0x1B, 0x18, 0x18, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x1E, 0x30, 0x00, 0x00, 0x00, 0x00, 0x40, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x08, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00,
	0x00, 0xF8, 0xF8, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00,
	0x00, 0x80, 0xC0, 0xC0, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00,
	0xC0, 0xF0, 0xF8, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00,
	0x00, 0xF8, 0xF8, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x80, 0xC0, 0x40, 0x00, 0x00,
	0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
	0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00,
	0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00,
	0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0xC0, 0x80, 0x00, 0x00,
	0xC0, 0xF0, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0x00,
	0xC0, 0xC0, 0x80, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0,
	0x40, 0xC0, 0x00, 0xC0, 0x40, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00,
	0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1E, 0x1A, 0x1F, 0x1F, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x18, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x1D, 0x0D, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x18, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x1A, 0x1B, 0x0B, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x5F, 0x58, 0x7F, 0x3F, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x07, 0x1E, 0x10, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x1F,
	0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x1F, 0x0F, 0x00, 0x00,
	0x00, 0x7F, 0x7F, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x7F, 0x7F, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x1D, 0x13, 0x1E, 0x0E, 0x00, 0x00,
	0x00, 0x1F, 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x1F, 0x1F, 0x00, 0x00,
	0x00, 0x07, 0x1F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x1E, 0x07, 0x07, 0x1E, 0x1F, 0x03,
	0x10, 0x1D, 0x07, 0x1D, 0x10, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7C, 0x1F, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x1E, 0x1B, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x06, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x01, 0x01, 0x01, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF0, 0x48, 0x48, 0x08, 0x30, 0x00, 0x00, 0x00, 0xF8, 0x08, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xB8, 0x98, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC0, 0xC0, 0xF8, 0xF8, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0xF8, 0xF8, 0xC0, 0xC0, 0x00, 0x00,
	0x00, 0x10, 0x08, 0x08, 0x10, 0x00, 0x00, 0x00, 0x70, 0x88, 0x88, 0xF0, 0xF0, 0x38, 0x00, 0x00,
	0x00, 0x72, 0xFC, 0xDC, 0xBA, 0x30, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xF0, 0xF8, 0x18, 0x18, 0xF0, 0xF8, 0x98, 0xF8, 0x08, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1A, 0x1C, 0xFC, 0xFA, 0x38, 0x00, 0x00, 0xF8, 0x08, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF8, 0x08, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x58, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x68, 0x00, 0x70, 0x68, 0x00, 0x00,
	0x00, 0x58, 0x38, 0x00, 0x58, 0x38, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF0, 0x10, 0x00, 0xF0, 0x70, 0xC0,
	0x00, 0x88, 0xD0, 0x50, 0xC8, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF8, 0x08, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC8, 0xD0, 0xD0, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x08, 0x78, 0xF6, 0xF0, 0x7E, 0x08, 0x00, 0x00,
	0x0F, 0x11, 0x10, 0x10, 0x0C, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x58, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x78, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x58, 0x38, 0x00, 0x58, 0x38, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x7F, 0x7F, 0x0C, 0x0C, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0x0F, 0x11, 0x11, 0x0E,
	0x00, 0x0E, 0x1E, 0x19, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x07, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0F, 0x1F, 0x18, 0x18, 0x0F, 0x1F, 0x19, 0x1F, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x1C, 0x1F, 0x1B, 0x18, 0x18, 0x00, 0x00, 0x1F, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x1F, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0D, 0x1D, 0x13, 0x1E, 0x0E, 0x00, 0x00, 0x00, 0x0D, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0F, 0x1F, 0x18, 0x1F, 0x1F, 0x1A, 0x1B, 0x1F, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x1E, 0x1B, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00
};
#endif


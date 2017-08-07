#ifndef __LED_MATRIX_H_
#define __LED_MATRIX_H_

#include <arduino.h>
#include <stdint.h>

#define ROW1 1
#define ROW2 2
#define ROW3 3
#define ROW4 4
#define ROW5 5
#define ROW6 6
#define ROW7 7
#define ROW8 8
#define COL1 9
#define COL2 10
#define COL3 11
#define COL4 12
#define COL5 13
#define COL6 14
#define COL7 15
#define COL8 16  


uint32_t makerHanoi[2][5] = 
{
	/* M - A - K - E - R */
	{0x88D8F888,0x20508888,0x8890A0C0,0xF88080F0,0xF88890A0},
	{0x88888888,0xF8888888,0xC0A09088,0xF08080F8,0xC0A09088}
};
#endif/*__LED_MATRIX_H_*/
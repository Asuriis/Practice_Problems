#include "header.h"

/*
Write a C function which separates a 32-bit unsigned int into 4 bytes (unsigned char) in Big Endian order. 
The function should look like “void uint2bigEndian(unsigned int a, unsigned char *result)”.
*/

/*
1.convert int value into binary
2.convert int to char
3.place char in array
*/

unsigned char* uint2bigEndian(unsigned int a) {
	
	static unsigned char bits[36]; //extra 3 are for spaces " ", 1 for null terminator
	int j = 0;

	for (unsigned int i = 0; i < 32; i++) {
		if (i > 0 && i % 8 == 0) {
			bits[j++] = ' ';
		}
		
		if (a & (1U << (31-i))) {
			bits[j++] = '1';
		}
		else {
			bits[j++] = '0';
		}
	}

	bits[j] = '/0';
	return bits;
}
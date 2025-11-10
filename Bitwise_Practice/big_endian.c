#include "header.h"

/*
Write a C function which separates a 32-bit unsigned int into 4 bytes (unsigned char) in Big Endian order. 
The function should look like “void uint2bigEndian(unsigned int a, unsigned char *result)”.
*/

/*
1.convert int to char
2.place char in array
*/

void uint2bigEndian(unsigned int a, unsigned char *result) {
	unsigned char bytes[4];
	for (int i = 0; i < 4; i++) {
		bytes[i]=
	}
}
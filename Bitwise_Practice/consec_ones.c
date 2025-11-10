#include "header.h"

/*
Write a C function which takes in a 32-bit unsigned int, the function returns what is the longest consecutive 1s in this int. 
E.g., if the given int n=354928946 (binary 00010101 00100111 11001001 00110010, I added some spaces to separate them so that the value is readable), the function should return 5.
*/

unsigned int consecutive_ones(unsigned int n) {
	unsigned int count = 0;
	unsigned int hold_count = 0;
	for (int i = 0; i < 32; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
			if (count > hold_count) {
				hold_count = count;
			}
		}
		else {
			count = 0;
		}
	}
	return hold_count;
}
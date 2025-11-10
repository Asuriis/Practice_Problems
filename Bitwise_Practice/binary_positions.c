/*
Write a C function which takes two 32-bit unsigned int (a, b), the function returns how many positions they both have binary 1. E.g., if a=123, b=74, the answer is 3.

Write a C function which takes two 32-bit unsigned int (a, b), the function returns how many positions they both have binary 0. E.g., if a=123, b=74, the answer is 26. +++ I think it should be 29?
*/
#include "header.h"

int nmb_binary_ones(unsigned int a, unsigned int b) {
	int count=0;
	
	unsigned int x = a & b;

	for (int i = 0; i < 32; i++) {
		if (((x >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}

int nmb_binary_zeros(unsigned int a, unsigned int b) {
	int count = 0;

	unsigned int x = a & b;

	for (int i = 0; i < 32; i++) {
		if (((x >> i) & 1) == 0) {
			count++;
		}
	}
	return count;
}
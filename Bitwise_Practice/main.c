#include "header.h"
#include <stdio.h>

int main(void) {
	unsigned int ret = consecutive_ones(354928946);
	printf("There are %u consecutive 1's.\n", ret);

	char addr1[] = "10.11.12.13";
	char addr2[] = "10.11.11.255";
	int n=21;
	subnet_mask_check(addr1, addr2, n);

	ret = nmb_binary_ones(123, 74);
	printf("There are %u matching 1's.\n", ret);
	ret = nmb_binary_zeros(123, 74);
	printf("There are %u matching 0's.\n", ret);

	unsigned char* result = uint2bigEndian(337);
	printf("%s\n", result);
	
}
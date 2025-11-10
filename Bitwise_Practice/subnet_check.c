/*
Write a C program which takes in 2 IPv4 addresses in dotted decimals, and the subnet mask in value of n, the program prints out are these two IP addresses in the same subnet or not.
E.g., if addr1=10.11.12.13, addr2=10.11.11.255, n=21, the answer is “yes”; for the same IP addresses, if n=22, the answer is “no”.
You need to manipulate dotted decimal string to 32-bit int also in this question. Please use bitwise AND to solve the problem.
*/

#include "header.h"
#include <string.h>
#include <stdio.h>
#include <stdint.h> //purely for uint32_t to enforce 32 bit binary

typedef struct {
	unsigned int octet[4]; //stores each octet value in the ip address, e.g. [255,255,10,0]
} ipv4;

ipv4 char_to_ipv4(const char* ip);

void subnet_mask_check(const char *ip1, const char *ip2, unsigned int mask) {
	ipv4 A = char_to_ipv4(ip1);
	ipv4 B = char_to_ipv4(ip2);
	
	uint32_t ip1_bin = ipv4_to_bin(A);
	uint32_t ip2_bin = ipv4_to_bin(B);
	uint32_t subnet_mask = mask_to_bin(mask);

	if ((ip1_bin & subnet_mask) != (ip2_bin & subnet_mask)) {
		printf("No, the two IP's %s and %s are not under the same subnet.\n", ip1, ip2);
		return;
	}
	printf("Yes, the two IP's %s and %s are under the same subnet.\n", ip1, ip2);
}

//converts char values in the array to int values which are then stored in a struct array so they can be accessed later
ipv4 char_to_ipv4(const char *ip) { 
	
	ipv4 addr = {0}; //zeros all values in the struct before use
	int arr_pos = 0;
	int arr_length = strlen(ip);
	unsigned int val = 0;
	
	for (int i = 0; i < arr_length; i++) {
		if (ip[i] == '.') {
			addr.octet[arr_pos] = val;
			arr_pos++;
			val = 0;
		}
		else {
			int char_now_int = ip[i] - '0'; //char to int
			val = val * 10 + char_now_int; //prev int shifted and current int added, e.g. ["255"]2 -> 20+5 = 25 -> 250 +5 = 255
		}
	}
	addr.octet[arr_pos] = val;
	return addr;
}


uint32_t ipv4_to_bin(ipv4 ip) { //takes values from ipv4 array and combines into one binary string
	return (ip.octet[0] << 24 | ip.octet[1] << 16 | ip.octet[2] << 8 | ip.octet[3]);
}

uint32_t mask_to_bin(int mask) {
	return (~0U) << (32 - mask); //bitwise NOT function on 0's, U signals unsigned int
}
/*
Write a C program which takes in 2 IPv4 addresses in dotted decimals, and the subnet mask in value of n, the program prints out are these two IP addresses in the same subnet or not.
E.g., if addr1=10.11.12.13, addr2=10.11.11.255, n=21, the answer is “yes”; for the same IP addresses, if n=22, the answer is “no”.
You need to manipulate dotted decimal string to 32-bit int also in this question. Please use bitwise AND to solve the problem.
*/

#include <math.h>
#include <string.h>

int subnet_mask_check(char ip1[], char ip2[], int mask) {
	int A[] = char_to_int(ip1);
	int B[] = char_to_int(ip2);

	for (int i = 0; i < 3; i++) {

	}
}

/*
1.how to make int in arr to bin
2.and bin with n ... if(A & n == B & n) ret yes else ret no
*/

int char_to_int(char ip[]) {
	
	int arr_length = strlen(ip);

	int arr_pos = 0;
	int ip_int[4]; //ip value from char -> int

	int val = 0;
	unsigned int ip_in_bi = 0;
	for (int i = 0; i < arr_length; i++) {
		if (ip[i] != ".") {
			if (val != 0) {
				val *= 10;
			}
			val += ip[i];
		}
		else { //records how big the value is before the "." marker
			ip_int[arr_pos] = val;
			arr_pos++;
			val = 0;
		}
	}
	return ip_int;
}
//ip_in_bi += ip[i] * exp2(32 - i); // ldexp(ip[i], i)) will do the same but shorter


/*
Write a C function which takes two 32-bit unsigned int (a, b), the function returns how many positions they both have binary 1. E.g., if a=123, b=74, the answer is 3.
Write a C function which takes two 32-bit unsigned int (a, b), the function returns how many positions they both have binary 0. E.g., if a=123, b=74, the answer is 26.
Write a C function which separates a 32-bit unsigned int into 4 bytes (unsigned char) in Big Endian order. 
The function should look like “void uint2bigEndian(unsigned int a, unsigned char *result)”.
*/
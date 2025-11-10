# Practice_Problems

1. Write a C function which takes in a 32-bit unsigned int, the function returns what is the longest consecutive 1s in this int. E.g., if the given int n=354928946 (binary 00010101 00100111 11001001 00110010, I added some spaces to separate them so that the value is readable), the function should return 5.

2. Write a C program which takes in 2 IPv4 addresses in dotted decimals, and the subnet mask in value of n, the program prints out are these two IP addresses in the same subnet or not. E.g., if addr1=10.11.12.13, addr2=10.11.11.255, n=21, the answer is “yes”; for the same IP addresses, if n=22, the answer is “no”. You need to manipulate dotted decimal string to 32-bit int also in this question. Please use bitwise AND to solve the problem.

3. Write a C function which takes two 32-bit unsigned int (a, b), the function returns how many positions they both have binary 1. E.g., if a=123, b=74, the answer is 3.

4. Write a C function which takes two 32-bit unsigned int (a, b), the function returns how many positions they both have binary 0. E.g., if a=123, b=74, the answer is 26.

5. Write a C function which separates a 32-bit unsigned int into 4 bytes (unsigned char) in Big Endian order. The function should look like “void uint2bigEndian(unsigned int a, unsigned char *result)”.

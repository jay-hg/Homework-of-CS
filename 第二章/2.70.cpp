#include <stdio.h>

typedef unsigned char* byte_pointer;

int fits_bits(int x,int n) {
	return !(((unsigned)x)>>n);
}
int main() {
	printf("x(6)能否表示成n(3)位二进制:%x\n",fits_bits(6,3));
	printf("x(10)能否表示成n(3)位二进制:%x\n",fits_bits(10,3));
	printf("x(100)能否表示成n(7)位二进制:%x\n",fits_bits(100,7));
	return 0;
}

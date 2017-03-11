#include <stdio.h>

typedef unsigned char* byte_pointer;

unsigned rotate_right(unsigned x,int n) {
	unsigned a = x>>n;
	x = x<<(8*sizeof(unsigned)-n);
	x = a | x;
	return x;
}
int main() {
	printf("��0x12345678����nλ(n=4):%x\n",rotate_right(0x12345678,4));
	printf("��0x12345678����nλ(n=20):%x\n",rotate_right(0x12345678,20));
	return 0;
}

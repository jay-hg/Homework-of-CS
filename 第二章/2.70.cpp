#include <stdio.h>

typedef unsigned char* byte_pointer;

int fits_bits(int x,int n) {
	return !(((unsigned)x)>>n);
}
int main() {
	printf("x(6)�ܷ��ʾ��n(3)λ������:%x\n",fits_bits(6,3));
	printf("x(10)�ܷ��ʾ��n(3)λ������:%x\n",fits_bits(10,3));
	printf("x(100)�ܷ��ʾ��n(7)λ������:%x\n",fits_bits(100,7));
	return 0;
}

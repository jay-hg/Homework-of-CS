#include <stdio.h>

typedef unsigned char* byte_pointer;

int lower_bits(int x,int n) {
	unsigned a = ~0;
	int m = (sizeof(int)<<3)-n;
	//printf("�ƶ���λ��%d\n",m);
	a >>= (m);
	return (int)a;
}
int main() {
	printf("���nλ���1��(n=6):%x\n",lower_bits(0,6));
	printf("���nλ���1��(n=13):%x\n",lower_bits(0,13));
	return 0;
}

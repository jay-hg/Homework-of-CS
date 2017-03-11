#include <stdio.h>

typedef unsigned char* byte_pointer;

int lower_bits(int x,int n) {
	unsigned a = ~0;
	int m = (sizeof(int)<<3)-n;
	//printf("移动几位：%d\n",m);
	a >>= (m);
	return (int)a;
}
int main() {
	printf("最低n位设成1？(n=6):%x\n",lower_bits(0,6));
	printf("最低n位设成1？(n=13):%x\n",lower_bits(0,13));
	return 0;
}

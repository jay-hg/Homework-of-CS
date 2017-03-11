#include <stdio.h>

typedef unsigned char* byte_pointer;

int even_ones(unsigned x) {
	x = (x>>16)^x;
	x = (x>>8)^x;
	x = (x>>4)^x;
	x = (x>>2)^x;
	return !(((x>>1)^x)&0x1);
}
int main() {
	printf("包含偶数个1？(0x07777777):%d\n",even_ones(0x07777777));
	printf("包含偶数个1？(0x07777776):%d\n",even_ones(0x07777776));
	printf("包含偶数个1？(0x07767776):%d\n",even_ones(0x07767776));
	printf("包含偶数个1？(0x5):%d\n",even_ones(0x5));
	return 0;
}

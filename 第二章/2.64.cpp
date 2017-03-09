#include <stdio.h>

typedef unsigned char* byte_pointer;

int any_even_one(unsigned x) {
	return !((x & 0x55555555) ^ 0x55555555);
}
int main() {
	printf("%d\n",sizeof(unsigned));
	printf("����ż��λ����1��(0x07777777):%d\n",any_even_one(0x07777777));
	printf("����ż��λ����1��(0xfd577777):%d\n",any_even_one(0xfd577777));
	printf("����ż��λ����1��(0x55555555):%d\n",any_even_one(0x55555555));
	return 0;
}

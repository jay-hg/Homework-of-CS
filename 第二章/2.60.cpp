#include <stdio.h>

typedef unsigned char* byte_pointer;

unsigned replace_byte (unsigned x, unsigned char b, int i) {
	byte_pointer start = (byte_pointer)&x;
	start[i] = b;
	return x;
}

int main() {
	printf("ÔËÐÐÌæ»»º¯Êýreplace_byte:\n");
	printf("replace_byte(0x12345678,0xab,2) : %x\n",replace_byte(0x12345678,0xab,2));
	printf("replace_byte(0x12345678,0xab,0) : %x\n",replace_byte(0x12345678,0xab,0));
	return 0;
}

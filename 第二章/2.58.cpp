#include <stdio.h>

typedef unsigned char* byte_pointer;

int is_little_endian() {
	short s = 0x0001;
	byte_pointer start = (byte_pointer)&s;
	if(start[0] != 0) return 1;
	return 0;
} 

int main() {
	printf("检测是不是在小端机器上运行？(1/0):%d",is_little_endian());
	return 0;
}

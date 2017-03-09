#include <stdio.h>

typedef unsigned char* byte_pointer;

int is_little_endian() {
	short s = 0x0001;
	byte_pointer start = (byte_pointer)&s;
	return start[0];
} 

int main() {
	printf("检测是不是在小端机器上运行？(1/0):%d",is_little_endian());
	return 0;
}

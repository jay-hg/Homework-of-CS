#include <stdio.h>

typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start, int len) {
	int i;
	for(i=0;i<len;i++)
		printf(" %.2x",start[i]);
	printf("\n");
}

void show_short(short n) {
	show_bytes((byte_pointer)&n,sizeof(short));
}
void show_long(long n) {
	show_bytes((byte_pointer)&n,sizeof(long));
}
void show_double(double n) {
	show_bytes((byte_pointer)&n,sizeof(double));
}
int main() {
	short s = 0x1234;
	long l = 0x12345678;
	double d = 0x123456789a;
	
	printf("short & long & double µÄÎ»ÏÔÊ¾£º\n");
	show_short(s); 
	show_long(l);
	show_double(d);
	return 0;
}

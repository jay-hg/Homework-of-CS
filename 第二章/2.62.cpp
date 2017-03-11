#include <stdio.h>

typedef unsigned char* byte_pointer;

int int_shifts_are_logical() {
	unsigned n = ~0;
	int m = ((sizeof(int)<<3)-1);
	n >>= (m);
	//printf("%d %x\n",m,n);
	n >>= 1;
	//printf("%d %x\n",m,n);
	return !(n & 1);
}

int main() {
	printf("ÓÒÒÆÊÇÂß¼­ÓÒÒÆ(1/0):%d",int_shifts_are_logical());
	return 0;
}

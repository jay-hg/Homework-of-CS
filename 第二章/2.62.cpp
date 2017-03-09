#include <stdio.h>
#include <limits.h>
typedef unsigned char* byte_pointer;

int int_shifts_are_logical() {
	int n = ~0;
	n >>= (sizeof(int)<<3)-1;
	return n & 1;
}

int main() {
	printf("ÓÒÒÆÊÇÂß¼­ÓÒÒÆ(1/0):%d",int_shifts_are_logical());
	return 0;
}

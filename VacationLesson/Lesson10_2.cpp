#include <stdio.h>

int lesson10_2() {
	int a = 10;

	int* ptr = &a;

	printf("a의 값: %d\n", a);
	printf("a의 주소: %p\n", ptr);

	return 0;
}
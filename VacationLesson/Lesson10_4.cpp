#include <stdio.h>

int lesson10_4() {
	int a = 10;
	const int* p = &a;

	printf("%d %p\n", a, p);

	return 0;
}
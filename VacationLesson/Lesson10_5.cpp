#include <stdio.h>

int lesson10_5() {
	int a = 10;
	int* const p = &a;

	printf("%d %p", a, p);

	return 0;
}
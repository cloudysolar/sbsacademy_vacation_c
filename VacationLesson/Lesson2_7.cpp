#include <stdio.h>

int lesson2_7() {
	int a = 8;
	int b = 1;
	int c = -25;

	printf("a = %d / b = %d / c = %d\n\n", a, b, c);

	printf("a += 10 = %d\n", (a += 10));
	printf("b -= a = %d\n", (b -= a));
	printf("c *= b = %d\n", (c *= b));

	return 0;
}
#include <stdio.h>

int lesson2_1() {
	// 대입 연산자
	int a = 5;
	printf("a = %d\n", a);

	// 산술 연산자 (+, -, *, /, %)
	int b = 5 + 4 * 3;
	int c = 2 + b;
	int g = 20;
	int h = 5;
	int i = 1000;
	int j = 128;
	
	printf("b = %d\n", b);
	printf("2 + b = %d\n", c);
	printf("c - 3 = %d\n", (c - 3));
	printf("10 * 5 = %d\n", (10 * 5));
	printf("%d / %d = %d\n", g, h, (g / h));
	printf("%d %% %d = %d\n", i, j, (i % j));
	printf("2 + ( %d * %d %% %d) - 1 = %d\n", a, i, b, (2 + (a * i % b) - 1));

	return 0;
}

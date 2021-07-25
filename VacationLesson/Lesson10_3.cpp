#include <stdio.h>

void add(int a, int b, int* sum) {
	*sum = a + b;
}

int lesson10_3() {
	int num1 = 0, num2 = 0;
	int sum = 0;

	scanf_s("%d %d", &num1, &num2);

	add(num1, num2, &sum);

	printf("%d + %d = %d\n", num1, num2, sum);

	return 0;
}
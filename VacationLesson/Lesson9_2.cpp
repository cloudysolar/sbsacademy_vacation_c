#include <stdio.h>

int factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

int lesson9_2() {
	int num = 0;

	scanf_s("%d", &num);
	printf("%d! 의 값은: %d\n", num, factorial(num));

	return 0;
}
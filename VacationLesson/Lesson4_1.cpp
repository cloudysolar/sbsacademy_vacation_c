#include <stdio.h>

int lesson4_1() {
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
#include <stdio.h>

int lesson4_5() {
	int i = 1;
	int sum = 0;

	do {
		sum += i;
		i++;
	} while (i <= 10);

	printf("%d\n", sum);

	return 0;
}
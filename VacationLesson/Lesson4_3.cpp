#include <stdio.h>

int lesson4_3() {
	int i = 1;
	int sum = 0;

	while (i <= 10) {
		sum += i;
		i++;
	}

	printf("%d\n", sum);

	return 0;
}
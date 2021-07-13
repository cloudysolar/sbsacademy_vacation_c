#include <stdio.h>

int lesson7_2() {
	int level = 3;

	for (int i = 0; i < level; i++) {
		for (int j = (level - i); j > 0; j--) {
			printf(" ");
		}

		for (int j = 0; j <= (i * 2); j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
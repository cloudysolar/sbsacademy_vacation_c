#include <stdio.h>

int lesson7_3() {
	// 문제 1: 구구단을 1단부터 9단까지 출력해봅시다.

	for (int i = 1; i <= 9; i++) {
		printf("\n[ %d단 ]\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("  %d X %d = %d\n", i, j, (i * j));
		}
	}

	return 0;
}
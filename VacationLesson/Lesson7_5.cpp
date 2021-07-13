#include <stdio.h>

int lesson7_5() {
	// 문제 2-2: 아래 삼각형을 출력해보고, 3방향으로 뒤집어서 출력해봅시다. (직각이 오른쪽 아래 방향인 직각삼각형)
	int level = 3;

	for (int i = 0; i < level; i++) {
		for (int j = (level - (i + 1)); j > 0; j--) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int lesson7_7() {
	// 문제 2-4: 아래 삼각형을 출력해보고, 3방향으로 뒤집어서 출력해봅시다. (직각이 오른쪽 위 방향인 직각삼각형)
	int level = 3;

	for (int i = 0; i < level; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = level; j > i; j--) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
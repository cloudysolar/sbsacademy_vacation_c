#include <stdio.h>

int lesson8_6() {
	// 문제 1: 이차원 배열을 만들어 입력받고, 모든 내용을 출력해봅시다.
	char arr[5][2];

	for (int i = 0; i < 5; i++) {
		printf("\b - 입력: ");
		scanf_s(" %c %c", &arr[i][0], 1, &arr[i][1], 1);
	}

	printf("\n - 입력된 결과:\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
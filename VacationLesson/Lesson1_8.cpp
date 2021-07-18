#include <stdio.h>

int lesson1_8() {
	// 문제 3-1: 한 변의 길이를 입력받으면 해당 길이 만큼의 정사각형을 출력해봅시다. ("*" 로 출력하기)
	int size = 0;

	scanf_s("%d", &size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
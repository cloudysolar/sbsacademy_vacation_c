#include <stdio.h>

int lesson7_9() {
	// 문제 3-2: 한 변의 길이를 입력받으면 해당 길이 만큼의 정사각형을 출력해봅시다. (가로로 1, 2, 3, 4... 의 형태로 출력하기)
	int size = 0;

	scanf_s("%d", &size);

	for (int i = 0; i < size; i++) {
		for (int j = 1; j <= size; j++) {
			printf("%2d ", ((i * size) + j));
		}
		printf("\n");
	}

	return 0;
}
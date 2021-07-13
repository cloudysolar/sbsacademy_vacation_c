#include <stdio.h>

int lesson7_10() {
	// 문제 3-3: 한 변의 길이를 입력받으면 해당 길이 만큼의 정사각형을 출력해봅시다. (세로로 1, 2, 3, 4... 출력하기)
	int size = 0;

	scanf_s("%d", &size);

	for (int i = 0; i < size; i++) {
		for (int j = 1; j <= (size * size); j+=size) {
			printf("%2d ", (i + j));
		}
		printf("\n");
	}

	return 0;
}
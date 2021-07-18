#include <stdio.h>

int lesson8_7() {
	// 문제 2: 이차원 배열을 만들고 각 배열의 합을 구해 출력해봅시다.
	int arr[5][3];
	int sums[5];
	int count = 1;

	for (int i = 0; i < 5; i++) {
		int sum = 0;

		for (int j = 0; j < 3; j++) {
			printf("\n# 입력 [%d/%d]: ", count, 15);
			scanf_s("%d", &arr[i][j]);
			sum += arr[i][j];

			count++;
		}

		sums[i] = sum;
	}

	printf("\n\n- 합계: ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", sums[i]);
	}

	return 0;
}
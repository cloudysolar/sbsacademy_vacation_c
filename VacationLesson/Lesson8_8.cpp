#include <stdio.h>

int lesson8_8() {
	// 문제 3: 이차원 배열을 만들고 각 배열의 평균을 구해 출력해봅시다.
	int arr[5][3];
	int avgs[5];

	int count = 1;

	for (int i = 0; i < 5; i++) {
		int sum = 0;

		for (int j = 0; j < 3; j++) {
			printf("\n# 입력 [%d/%d]: ", count, 15);
			scanf_s("%d", &arr[i][j]);

			count++;
			sum += arr[i][j];
		}

		avgs[i] = sum / 3;
	}

	printf("\n - 평균: ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", avgs[i]);
	}

	return 0;
}
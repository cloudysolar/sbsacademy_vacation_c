#include <stdio.h>

int lesson5_8() {
	// 문제 2: 크기가 5인 int형 배열을 만들고 숫자 5개를 입력받아 모두 더한 값을 출력하는 프로그램을 만들어봅시다.
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("\n[%d/5] 숫자 입력: ", (i + 1));
		scanf_s("%d", &arr[i]);

		sum += arr[i];
	}

	printf("\n>> 입력된 모든 숫자의 합: %d\n", sum);

	return 0;
}
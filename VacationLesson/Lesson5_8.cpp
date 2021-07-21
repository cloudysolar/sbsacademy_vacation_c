#include <stdio.h>

int Lesson5_8() {
	// 문제 1-2: 크기가 10인 int형 배열을 만들고 숫자 10개를 입력받아 출력하는 프로그램을 만들어봅시다. (for문 이용, 모두 입력 후 한번에 거꾸로 출력)
	int arr[10];

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("\n- 지금까지 입력한 수: ");

	for (int i = 9; i >= 0; i--) {
		printf("%d, ", arr[i]);
	}

	return 0;
}
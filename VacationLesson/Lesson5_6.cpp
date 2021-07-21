#include <stdio.h>

int lesson5_6() {
	// 문제 1-1: 크기가 10인 int형 배열을 만들고 숫자 10개를 입력받아 출력하는 프로그램을 만들어봅시다. (for문 이용, 입력 시 출력)
	int arr[10] = { 0 };
	char tmp = 'a';

	for (int i = 0; i < 10; i++) {
		scanf_s("%d%c", &arr[i], &tmp, 1);
		printf("\n>> %d번째 입력된 수: %d\n", (i + 1), arr[i]);
	}

	return 0;
}
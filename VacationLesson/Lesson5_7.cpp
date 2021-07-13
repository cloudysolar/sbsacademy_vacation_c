#include <stdio.h>

int lesson5_7() {
	// 문제 1-2: 크기가 10인 int형 배열을 만들고 숫자 10개를 입력받아 출력하는 프로그램을 만들어봅시다. (띄어쓰기로 구분)
	int arr[10];

	scanf_s("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	printf(">> 입력된 수: %d %d %d %d %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);

	return 0;
}
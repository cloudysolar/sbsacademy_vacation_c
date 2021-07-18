#include <stdio.h>

int lesson8_5() {
	int arr[5][10];

	int inner = sizeof(arr[0]) / sizeof(int);
	int outer = (sizeof(arr) / inner) / sizeof(int);

	printf(" - 배열 전체 크기: %d\n", sizeof(arr) / sizeof(int));
	printf(" - 외부 배열 크기: %d\n", outer);
	printf(" - 내부 배열 크기: %d\n", inner);

	return 0;
}
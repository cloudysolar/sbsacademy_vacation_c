#include <stdio.h>

int lesson8_5() {
	int arr[5][10];

	int inner = sizeof(arr[0]) / sizeof(int);
	int outer = (sizeof(arr) / inner) / sizeof(int);

	printf(" - �迭 ��ü ũ��: %d\n", sizeof(arr) / sizeof(int));
	printf(" - �ܺ� �迭 ũ��: %d\n", outer);
	printf(" - ���� �迭 ũ��: %d\n", inner);

	return 0;
}
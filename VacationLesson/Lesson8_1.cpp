#include <stdio.h>

int lesson8_1() {
	int arr[] = { 0, 1, 2, 3, 4 };

	printf("- arr[3]의 값: %d\n", arr[3]);
	printf("- arr의 길이: %d\n", sizeof(arr) / sizeof(int));

	return 0;
}
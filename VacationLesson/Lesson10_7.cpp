#include <stdio.h>

int lesson10_7() {
	int num = 1;
	int arr[5] = { 10, 20, 30, 40, 50 };

	printf("arr	: %p\n", arr);
	printf("arr[%d]	: %p (%d)\n", num, &arr[num], *(&arr[num] + 1));

	return 0;
}
#include <stdio.h>

int lesson10_6() {
	int arr[5] = { 0, 1, 2, 3, 4 };

	printf("arr	: %p\n", arr);
	printf("arr[0]	: %p", &arr[0]);

	return 0;
}
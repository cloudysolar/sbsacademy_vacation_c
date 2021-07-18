#include <stdio.h>

int lesson5_3() {
	int arr[10];

	printf("int sizeof: %d\n", sizeof(int));
	printf("arr[] sizeof: %d\n", sizeof(arr));
	printf("arr[] length: %d\n", sizeof(arr) / sizeof(int));

	return 0;
}
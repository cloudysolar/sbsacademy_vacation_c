#include <stdio.h>

int lesson5_5() {
	int arr1[10] = { 0 };
	int arr2[10] = { 0, 1 };

	int length = sizeof(arr1) / sizeof(int);

	for (int i = 0; i < length; i++) {
		printf("arr1[%d] = %d / arr2[%d] = %d\n", i, arr1[i], i, arr2[i]);
	}

	return 0;
}
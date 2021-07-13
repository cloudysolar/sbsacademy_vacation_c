#include <stdio.h>

int lesson5_4() {
	int arr[10];
	int length = sizeof(arr) / sizeof(int);
	
	for (int i = 0; i < length; i++) {
		arr[i] += 5;
		printf("%d\n", arr[i]);
	}

	return 0;
}
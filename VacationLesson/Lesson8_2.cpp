#include <stdio.h>

int lesson8_2() {
	int arr[5];

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		printf("- arr[%d]�� �Էµ� ��: %d\n\n", i, arr[i]);
	}

	return 0;
}
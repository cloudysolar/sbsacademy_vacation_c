#include <stdio.h>

int lesson8_4() {
	int arr[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };

	arr[1][1] = 10;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("- arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}

	return 0;
}
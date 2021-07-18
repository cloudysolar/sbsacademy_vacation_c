#include <stdio.h>

int lesson8_3() {
	int arr[2][5] = { { 0, 1, 2, 3, 4 }, { 5, 6, 7, 8, 9 } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("- arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}

	return 0;
}
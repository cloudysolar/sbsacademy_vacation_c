#include <stdio.h>

int lesson8_8() {
	// ���� 3: ������ �迭�� ����� �� �迭�� ����� ���� ����غ��ô�.
	int arr[5][3];
	int avgs[5];

	int count = 1;

	for (int i = 0; i < 5; i++) {
		int sum = 0;

		for (int j = 0; j < 3; j++) {
			printf("\n# �Է� [%d/%d]: ", count, 15);
			scanf_s("%d", &arr[i][j]);

			count++;
			sum += arr[i][j];
		}

		avgs[i] = sum / 3;
	}

	printf("\n - ���: ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", avgs[i]);
	}

	return 0;
}
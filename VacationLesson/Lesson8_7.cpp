#include <stdio.h>

int lesson8_7() {
	// ���� 2: ������ �迭�� ����� �� �迭�� ���� ���� ����غ��ô�.
	int arr[5][3];
	int sums[5];
	int count = 1;

	for (int i = 0; i < 5; i++) {
		int sum = 0;

		for (int j = 0; j < 3; j++) {
			printf("\n# �Է� [%d/%d]: ", count, 15);
			scanf_s("%d", &arr[i][j]);
			sum += arr[i][j];

			count++;
		}

		sums[i] = sum;
	}

	printf("\n\n- �հ�: ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", sums[i]);
	}

	return 0;
}
#include <stdio.h>

int lesson8_6() {
	// ���� 1: ������ �迭�� ����� �Է¹ް�, ��� ������ ����غ��ô�.
	char arr[5][2];

	for (int i = 0; i < 5; i++) {
		printf("\b - �Է�: ");
		scanf_s(" %c %c", &arr[i][0], 1, &arr[i][1], 1);
	}

	printf("\n - �Էµ� ���:\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
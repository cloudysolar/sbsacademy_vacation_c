#include <stdio.h>

int lesson5_8() {
	// ���� 2: ũ�Ⱑ 5�� int�� �迭�� ����� ���� 5���� �Է¹޾� ��� ���� ���� ����ϴ� ���α׷��� �����ô�.
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("\n[%d/5] ���� �Է�: ", (i + 1));
		scanf_s("%d", &arr[i]);

		sum += arr[i];
	}

	printf("\n>> �Էµ� ��� ������ ��: %d\n", sum);

	return 0;
}
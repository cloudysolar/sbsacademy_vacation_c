#include <stdio.h>

int lesson5_6() {
	// ���� 1-1: ũ�Ⱑ 10�� int�� �迭�� ����� ���� 10���� �Է¹޾� ����ϴ� ���α׷��� �����ô�. (for�� �̿�)
	int arr[10] = { 0 };
	char tmp = 'a';

	for (int i = 0; i < 10; i++) {
		scanf_s("%d%c", &arr[i], &tmp, 1);
		printf("\n>> %d��° �Էµ� ��: %d\n", (i + 1), arr[i]);
	}

	return 0;
}
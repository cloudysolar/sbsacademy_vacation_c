#include <stdio.h>

int lesson5_7() {
	// ���� 1-2: ũ�Ⱑ 10�� int�� �迭�� ����� ���� 10���� �Է¹޾� ����ϴ� ���α׷��� �����ô�. (����� ����)
	int arr[10];

	scanf_s("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	printf(">> �Էµ� ��: %d %d %d %d %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);

	return 0;
}
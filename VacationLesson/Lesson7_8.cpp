#include <stdio.h>

int lesson7_8() {
	// ���� 3-1: �� ���� ���̸� �Է¹����� �ش� ���� ��ŭ�� ���簢���� ����غ��ô�. ("*" �� ����ϱ�)
	int size = 0;

	scanf_s("%d", &size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
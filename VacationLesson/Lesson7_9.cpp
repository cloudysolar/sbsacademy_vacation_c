#include <stdio.h>

int lesson7_9() {
	// ���� 3-2: �� ���� ���̸� �Է¹����� �ش� ���� ��ŭ�� ���簢���� ����غ��ô�. (���η� 1, 2, 3, 4... �� ���·� ����ϱ�)
	int size = 0;

	scanf_s("%d", &size);

	for (int i = 0; i < size; i++) {
		for (int j = 1; j <= size; j++) {
			printf("%2d ", ((i * size) + j));
		}
		printf("\n");
	}

	return 0;
}
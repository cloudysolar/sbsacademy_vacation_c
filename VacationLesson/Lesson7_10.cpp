#include <stdio.h>

int lesson7_10() {
	// ���� 3-3: �� ���� ���̸� �Է¹����� �ش� ���� ��ŭ�� ���簢���� ����غ��ô�. (���η� 1, 2, 3, 4... ����ϱ�)
	int size = 0;

	scanf_s("%d", &size);

	for (int i = 0; i < size; i++) {
		for (int j = 1; j <= (size * size); j+=size) {
			printf("%2d ", (i + j));
		}
		printf("\n");
	}

	return 0;
}
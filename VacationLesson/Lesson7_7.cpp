#include <stdio.h>

int lesson7_7() {
	// ���� 2-4: �Ʒ� �ﰢ���� ����غ���, 3�������� ����� ����غ��ô�. (������ ������ �� ������ �����ﰢ��)
	int level = 3;

	for (int i = 0; i < level; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = level; j > i; j--) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
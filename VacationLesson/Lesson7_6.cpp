#include <stdio.h>

int lesson7_6() {
	// ���� 2-3: �Ʒ� �ﰢ���� ����غ���, 3�������� ����� ����غ��ô�. (������ ���� �� ������ �����ﰢ��)
	int level = 3;

	for (int i = 0; i < level; i++) {
		for (int j = level; j > i; j--) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
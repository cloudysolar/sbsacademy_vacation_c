#include <stdio.h>

int lesson7_5() {
	// ���� 2-2: �Ʒ� �ﰢ���� ����غ���, 3�������� ����� ����غ��ô�. (������ ������ �Ʒ� ������ �����ﰢ��)
	int level = 3;

	for (int i = 0; i < level; i++) {
		for (int j = (level - (i + 1)); j > 0; j--) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int lesson7_4() {
	// ���� 2-1: �Ʒ� �ﰢ���� ����غ���, 3�������� ����� ����غ��ô�. (������ ���� �Ʒ� ������ �����ﰢ��)
	int level = 3;

	for (int i = 0; i < level; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int lesson7_3() {
	// ���� 1: �������� 1�ܺ��� 9�ܱ��� ����غ��ô�.

	for (int i = 1; i <= 9; i++) {
		printf("\n[ %d�� ]\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("  %d X %d = %d\n", i, j, (i * j));
		}
	}

	return 0;
}
#include <stdio.h>

int lesson3_5() {
	int i = 20;

	switch (i) {
	case 10:
		printf("i�� ���� 10�̸� �� ������ ������!\n");
	case 20:
		printf("i�� ���� 20�̸� �� ������ ������!\n");
	default:
		printf("i�� ���� 10�� �ƴϰ� 20�� �ƴϸ� �� ������ ������!\n");
	}

	return 0;
}
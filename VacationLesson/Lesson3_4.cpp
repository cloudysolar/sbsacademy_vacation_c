#include <stdio.h>

int lesson3_4() {
	int i = 10;

	switch (i) {
		case 10:
			printf("i�� ���� 10�̸� �� ������ ������!\n");
			break;
		case 20:
			printf("i�� ���� 20�̸� �� ������ ������!\n");
			break;
		default:
			printf("i�� ���� 10�� �ƴϰ� 20�� �ƴϸ� �� ������ ������!\n");
			break;
	}

	return 0;
}
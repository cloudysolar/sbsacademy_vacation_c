#include <stdio.h>

int lesson3_6() {
	// ���� 1: ���ڸ� �Է¹ް� ¦����� "¦���Դϴ�", Ȧ����� "Ȧ���Դϴ�"�� ����ϱ�

	int input = 0;

	scanf_s("%d", &input);
	
	if (input % 2 == 0) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}

	return 0;
}
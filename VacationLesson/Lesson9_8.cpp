#include <stdio.h>

bool isPrimeNumber(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int lesson9_8() {
	int input = 0;

	printf("[�Ҽ��Ǻ�] �Ҽ� �Ǻ��� �� ���ڸ� �Է����ּ���: ");
	scanf_s("%d", &input);

	printf("[�Ҽ��Ǻ�] %d�� %s�Դϴ�!\n", input, isPrimeNumber(input) ? "�Ҽ�" : "�ռ���");

	return 0;
}
#include <stdio.h>

int lesson3_9() {
	// ���� 3-1: ���� 2���� ��� �����ڸ� �Է¹޾� �ش� �����ڿ� �ش��ϴ� ��� �� ��� ����ϴ� ���� ����� (if �̿�)

	int a = 0;
	int b = 0;
	int result = 0;

	char op = 'a';

	printf("\n[����] ����ϰ� ���� ���� \"10 a 5\"�� ���� �Է����ּ��� (a: + | m: - | t: * | d: / | r: %): ");
	scanf_s("%d %c %d", &a, &op, 1, &b);

	if (op == 'a') {
		op = '+';
		result = a + b;
	}
	else if (op == 'm') {
		op = '-';
		result = a - b;
	}
	else if (op == 't') {
		op = '*';
		result = a * b;
	}
	else if (op == 'd') {
		op = '/';
		result = a / b;
	}
	else if (op == 'r') {
		op = '%';
		result = a % b;
	}
	else {
		result = -1;
		printf("\n[����] �� �� ���� ��� ��ȣ�Դϴ�!\n");
	}

	printf("\n");
	printf("[����] %d %c %d�� ����� %d�Դϴ�.\n", a, op, b, result);

	return 0;
}
#include <stdio.h>

int lesson3_10() {
	// ���� 3-2: ���� 2���� ��� �����ڸ� �Է¹޾� �ش� �����ڿ� �ش��ϴ� ��� �� ��� ����ϴ� ���� ����� (switch-case �̿�)

	int a = 0;
	int b = 0;
	int result = 0;

	char op = 'a';

	printf("\n[����] ����ϰ� ���� ���� \"10 a 5\"�� ���� �Է����ּ��� (a: + | m: - | t: * | d: / | r: %): ");
	scanf_s("%d %c %d", &a, &op, 1, &b);

	switch (op) {
		case 'a':
			op = '+';
			result = a + b;
			break;
		case 'm':
			op = '-';
			result = a - b;
			break;
		case 't':
			op = '*';
			result = a * b;
			break;
		case 'd':
			op = '/';
			result = a / b;
			break;
		case 'r':
			op = '%';
			result = a % b;
			break;
		default:
			result = -1;
			printf("\n[����] �� �� ���� ��� ��ȣ�Դϴ�!\n");
			break;
	}

	printf("\n");
	printf("[����] %d %c %d�� ����� %d�Դϴ�.\n", a, op, b, result);

	return 0;
}
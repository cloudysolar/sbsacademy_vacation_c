#include <stdio.h>

int lesson4_8() {
	// ���� 1-2: ���ǹ��� �ݺ����� �̿��� ���⸦ �����ô�. (switch-case �̿�)

	do {
		int a = 0;
		int b = 0;
		int result = 0;

		char op = 'a';

		printf("\n[����] ����ϰ� ���� ���� \"10 a 5\"�� ���� �Է����ּ��� (a: + | m: - | t: * | d: / | r: %)\n");
		printf("[����] �������� 0 e 0�� �Է��ϼ���: ");
		scanf_s("%d %c %d", &a, &op, 1, &b);

		switch (op) {
		case 'e':
			printf("\n[����] ������� ��û���� ���α׷��� �����մϴ�.\n");
			break;
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

		if (op != 'e') {
			printf("\n");
			printf("[����] %d %c %d�� ����� %d�Դϴ�.\n", a, op, b, result);
		}
		else {
			break;
		}
	} while (1);

	return 0;
}
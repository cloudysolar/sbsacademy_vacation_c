#include <stdio.h>

int lesson4_9() {
	// ���� 2: ���ڸ� �Է¹ް� �ش� ������ �������� 1���� 9���� ����غ��ô�.
	int input = 0;

	scanf_s("%d", &input);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", input, i, (input * i));
	}

	return 0;
}
#include <stdio.h>

int lesson4_10() {
	// ���� 3: ū ���ڸ� �Է¹ް� 1���� �ش� ���ڱ����� 3�� ����� ����غ��ô�.
	int input = 0;

	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (i % 3 == 0) {
			printf("1���� %d������ �� �� 3�� ����� ã�ҽ��ϴ�: %d\n", input, i);
		}
	}

	return 0;
}
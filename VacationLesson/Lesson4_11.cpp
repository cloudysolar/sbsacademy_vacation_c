#include <stdio.h>

int lesson4_11() {
	// ���� 4: ū ���ڸ� �Է¹ް� �ش� ������ ����� ����� ã�Ƽ� ����غ��ô�.
	int input = 0;
	int count = 0;

	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (input % i == 0) {
			count++;
		}
	}

	printf("%d�� ����� �� ������ %d�� �Դϴ�.\n", input, count);

	return 0;
}
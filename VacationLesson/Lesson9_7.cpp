#include <stdio.h>

int getFirstNumber(int num) {
	return num %= 10;
}

int lesson9_7() {
	// ���� 3: �����ϰ� 369������ �����ô�. ��, 369�� �Է��ߴ����� ���� ��� ó���� �Լ��� ���� ������غ��ô�. (�ִ� ���ڴ� 5�ڸ��� �սô�)
	int input = 0;

	do {
		printf("\n[369����] �ƹ� ���ڳ� �Է����ּ���: ");
		scanf_s("%d", &input);

		if (getFirstNumber(input) == 3 || getFirstNumber(input) == 6 || getFirstNumber(input) == 9) {
			printf("[369����] ¦!\n");
		}
		else {
			printf("[369����] %d!\n", input);
		}
	} while (1);

	return 0;
}
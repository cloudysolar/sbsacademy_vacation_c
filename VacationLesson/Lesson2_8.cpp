#include <stdio.h>

int lesson2_8() {
	// ���� 1: ������ ��Ģ������ �����ϴ� ���⸦ �����ô�.
	int a = 0, b = 0;

	printf("��� ��Ģ������ ������ ���� 2���� ����� ������ �Է� �� ���͸� �����ּ���: \n");
	scanf_s("%d %d", &a, &b);

	printf("\n");
	printf("%d + %d = %d\n", a, b, (a + b));
	printf("%d - %d = %d\n", a, b, (a - b));
	printf("%d * %d = %d\n", a, b, (a * b));
	printf("%d / %d = %d\n", a, b, (a / b));
	printf("%d %% %d = %d\n", a, b, (a % b));

	return 0;
}
#include <stdio.h>

int lesson2_11() {
	// ���� 4: 256�� 32�� �̿��� ��Ʈ������ �ϰ� �� ������� ����غ��ô�.
	int a = 256;
	int b = 8;

	printf("%d & %d = %d\n", a, b, (a & b));
	printf("%d | %d = %d\n", a, b, (a | b));
	printf("%d ^ %d = %d\n", a, b, (a ^ b));
	printf("~%d = %d\n", a, ~a);
	printf("%d << %d = %d\n", a, b, (a << b));
	printf("%d >> %d = %d\n", a, b, (a >> b));

	return 0;
}
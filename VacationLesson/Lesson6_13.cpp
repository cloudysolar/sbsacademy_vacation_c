#include <stdio.h>
#include <string.h>

int lesson6_13() {
	// ���� 5: �̸��� ���̸� �Է¹ް� '�̸� (����)'�� ���� ���·� ����غ��ô�.
	char name[20] = "";
	char tmp = '\0';

	int age = 0;

	scanf_s("%[^\n]s", name, sizeof(name));
	scanf_s("%c", &tmp, 1);
	scanf_s("%d", &age);

	printf("\n - %s (%d)\n", name, age);

	return 0;
}
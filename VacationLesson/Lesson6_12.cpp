#include <stdio.h>
#include <string.h>

int lesson6_12() {
	// ���� 4: ���ڿ� 2���� �Է¹ް� �� ���ڿ��� ���� ���� ���ĺ��ô�.
	char input1[100] = "";
	char input2[100] = "";
	char tmp = '\0';

	scanf_s("%[^\n]s", input1, sizeof(input1));
	printf("\n");

	scanf_s("%c", &tmp, 1);
	scanf_s("%[^\n]s", input2, sizeof(input2));
	printf("\n");

	strcat_s(input1, sizeof(input1), input2);

	printf(" - ������ ���ڿ�: %s\n", input1);

	return 0;
}
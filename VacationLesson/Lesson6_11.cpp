#include <stdio.h>
#include <string.h>

int lesson6_11() {
	// ���� 3: ���ڿ� 3���� �Է¹ް� ù ��° ���ڿ��� ���� �� ��° ���ڿ��� �����غ��ô�.
	char input1[100] = "";
	char input2[100] = "";
	char input3[100] = "";
	char tmp = '\0';

	scanf_s("%[^\n]s", input1, sizeof(input1));
	printf("\n");

	scanf_s("%c", &tmp, 1);
	scanf_s("%[^\n]s", input2, sizeof(input2));
	printf("\n");

	scanf_s("%c", &tmp, 1);
	scanf_s("%[^\n]s", input3, sizeof(input3));
	printf("\n");

	strcpy_s(input3, sizeof(input3), input1);

	printf(" - ù ��° ���ڿ�: %s\n", input1);
	printf(" - �� ��° ���ڿ�: %s\n", input2);
	printf(" - �� ��° ���ڿ�: %s\n", input3);

	return 0;
}
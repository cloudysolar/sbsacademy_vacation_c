#include <stdio.h>
#include <string.h>

int lesson6_10() {
	// ���� 2: ���ڿ� 2���� �Է¹ް� �ش� ���ڿ��� ���� ����� ����غ��ô�.
	char input1[100] = "";
	char input2[100] = "";
	char tmp = '\0';

	scanf_s("%[^\n]s", input1, sizeof(input1));
	printf("\n");

	scanf_s("%c", &tmp, 1);
	scanf_s("%[^\n]s", input2, sizeof(input2));

	printf("\n - ù ��° ���ڿ�: %s\n", input1);
	printf(" - �� ��° ���ڿ�: %s\n", input2);

	printf("\n - �� ���ڿ��� �� ���: %d\n", strcmp(input1, input2));

	return 0;
}
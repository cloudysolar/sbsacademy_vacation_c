#include <stdio.h>
#include <string.h>

int lesson6_15() {
	// ���� 6-2: �ذ��ߴٸ� �ڸ� ���ڿ��� ���̸� ���غ��ô�.
	char input[100] = "";
	char findStr[100] = "";
	char find = '\0';
	char tmp = '\0';

	scanf_s("%[^\n]s", input, sizeof(input));
	scanf_s("%c", &tmp, 1);
	printf("\n");

	scanf_s("%c", &find, 1);

	strcpy_s(findStr, sizeof(findStr), strchr(input, find));
	printf("\n - �ڸ� ���ڿ�: %s\n", findStr);
	printf(" - ���ڿ� ����: %d\n", strlen(findStr));

	return 0;
}
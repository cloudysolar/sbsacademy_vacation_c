#include <stdio.h>
#include <string.h>

int lesson6_14() {
	// ���� 6-1: ���ڿ� �ϳ��� ���� �ϳ��� �Է¹ް� ���ڿ����� �ش� ���ڸ� ã�� �ش� ������ ��ġ���� ����غ��ô�.
	char input[100] = "";
	char find = '\0';
	char tmp = '\0';

	scanf_s("%[^\n]s", input, sizeof(input));
	scanf_s("%c", &tmp, 1);
	printf("\n");

	scanf_s("%c", &find, 1);

	printf("%s\n", strchr(input, find));

	return 0;
}
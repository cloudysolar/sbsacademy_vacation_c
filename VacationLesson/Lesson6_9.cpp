#include <stdio.h>
#include <string.h>

int lesson6_9() {
	// ���� 1: ���ڿ��� �Է¹ް� �ش� ���ڿ��� ���̸� ���غ��ô�. (�ִ� ���� 100)
	char input[100] = "";

	scanf_s("%[^\n]s", input, sizeof(input));
	printf("\n - �Էµ� ���ڿ�: %s\n", input);
	printf(" - �Էµ� ���ڿ��� ����: %d\n", strlen(input));

	return 0;
}
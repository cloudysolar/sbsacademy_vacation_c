#include <stdio.h>
#include <string.h>

int lesson6_14() {
	// 문제 6-1: 문자열 하나와 문자 하나를 입력받고 문자열에서 해당 문자를 찾아 해당 문자의 위치부터 출력해봅시다.
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
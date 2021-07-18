#include <stdio.h>
#include <string.h>

int lesson6_15() {
	// 문제 6-2: 해결했다면 자른 문자열의 길이를 구해봅시다.
	char input[100] = "";
	char findStr[100] = "";
	char find = '\0';
	char tmp = '\0';

	scanf_s("%[^\n]s", input, sizeof(input));
	scanf_s("%c", &tmp, 1);
	printf("\n");

	scanf_s("%c", &find, 1);

	strcpy_s(findStr, sizeof(findStr), strchr(input, find));
	printf("\n - 자른 문자열: %s\n", findStr);
	printf(" - 문자열 길이: %d\n", strlen(findStr));

	return 0;
}
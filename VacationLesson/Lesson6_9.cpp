#include <stdio.h>
#include <string.h>

int lesson6_9() {
	// 문제 1: 문자열을 입력받고 해당 문자열의 길이를 구해봅시다. (최대 길이 100)
	char input[100] = "";

	scanf_s("%[^\n]s", input, sizeof(input));
	printf("\n - 입력된 문자열: %s\n", input);
	printf(" - 입력된 문자열의 길이: %d\n", strlen(input));

	return 0;
}
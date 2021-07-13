#include <stdio.h>
#include <string.h>

int lesson6_10() {
	// 문제 2: 문자열 2개를 입력받고 해당 문자열을 비교해 결과를 출력해봅시다.
	char input1[100] = "";
	char input2[100] = "";
	char tmp = '\0';

	scanf_s("%[^\n]s", input1, sizeof(input1));
	printf("\n");

	scanf_s("%c", &tmp, 1);
	scanf_s("%[^\n]s", input2, sizeof(input2));

	printf("\n - 첫 번째 문자열: %s\n", input1);
	printf(" - 두 번째 문자열: %s\n", input2);

	printf("\n - 두 문자열의 비교 결과: %d\n", strcmp(input1, input2));

	return 0;
}
#include <stdio.h>
#include <string.h>

int lesson6_12() {
	// 문제 4: 문자열 2개를 입력받고 두 문자열을 보기 좋게 합쳐봅시다.
	char input1[100] = "";
	char input2[100] = "";
	char tmp = '\0';

	scanf_s("%[^\n]s", input1, sizeof(input1));
	printf("\n");

	scanf_s("%c", &tmp, 1);
	scanf_s("%[^\n]s", input2, sizeof(input2));
	printf("\n");

	strcat_s(input1, sizeof(input1), input2);

	printf(" - 합쳐진 문자열: %s\n", input1);

	return 0;
}
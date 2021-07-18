#include <stdio.h>
#include <string.h>

int lesson6_11() {
	// 문제 3: 문자열 3개를 입력받고 첫 번째 문자열의 값을 세 번째 문자열에 복사해봅시다.
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

	printf(" - 첫 번째 문자열: %s\n", input1);
	printf(" - 두 번째 문자열: %s\n", input2);
	printf(" - 세 번째 문자열: %s\n", input3);

	return 0;
}
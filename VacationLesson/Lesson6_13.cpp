#include <stdio.h>
#include <string.h>

int lesson6_13() {
	// 문제 5: 이름과 나이를 입력받고 '이름 (나이)'와 같은 형태로 출력해봅시다.
	char name[20] = "";
	char tmp = '\0';

	int age = 0;

	scanf_s("%[^\n]s", name, sizeof(name));
	scanf_s("%c", &tmp, 1);
	scanf_s("%d", &age);

	printf("\n - %s (%d)\n", name, age);

	return 0;
}
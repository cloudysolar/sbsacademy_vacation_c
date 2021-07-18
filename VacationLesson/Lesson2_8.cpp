#include <stdio.h>

int lesson2_8() {
	// 문제 1: 간단한 사칙연산을 수행하는 계산기를 만들어봅시다.
	int a = 0, b = 0;

	printf("모든 사칙연산을 수행할 숫자 2개를 띄어쓰기로 구분해 입력 후 엔터를 눌러주세요: \n");
	scanf_s("%d %d", &a, &b);

	printf("\n");
	printf("%d + %d = %d\n", a, b, (a + b));
	printf("%d - %d = %d\n", a, b, (a - b));
	printf("%d * %d = %d\n", a, b, (a * b));
	printf("%d / %d = %d\n", a, b, (a / b));
	printf("%d %% %d = %d\n", a, b, (a % b));

	return 0;
}
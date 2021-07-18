#include <stdio.h>

int lesson2_9() {
	// 문제 2: 입력된 수가 짝수인지 홀수인지에 따라 0(짝수)과 1(홀수)를 출력해봅시다.
	int input = 0;

	printf("짝수인지 홀수인지를 판별할 수를 입력해주세요: ");
	scanf_s("%d", &input);

	printf("\n나눗셈 결과: %d\n", (input % 2));
	printf("삼항 연산 결과: %s\n", (input % 2 ? "홀수" : "짝수"));

	return 0;
}
#include <stdio.h>

int factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

int lesson9_6() {
	// 문제 2: 팩토리얼을 구하는 프로그램을 만들어봅시다.

	int num = 0;

	printf("[팩토리얼] 팩토리얼을 계산할 숫자를 입력해주세요: ");
	scanf_s("%d", &num);

	printf("\n[팩토리얼] %d!의 값은 %d입니다.\n", num, factorial(num));

	return 0;
}
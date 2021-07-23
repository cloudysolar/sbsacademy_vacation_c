#include <stdio.h>

bool isPrimeNumber(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int lesson9_8() {
	int input = 0;

	printf("[소수판별] 소수 판별을 할 숫자를 입력해주세요: ");
	scanf_s("%d", &input);

	printf("[소수판별] %d는 %s입니다!\n", input, isPrimeNumber(input) ? "소수" : "합성수");

	return 0;
}
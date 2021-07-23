#include <stdio.h>

int getFirstNumber(int num) {
	return num %= 10;
}

int lesson9_7() {
	// 문제 3: 간단하게 369게임을 만들어봅시다. 단, 369를 입력했는지에 대한 결과 처리는 함수를 따로 만들어해봅시다. (최대 숫자는 5자리로 합시다)
	int input = 0;

	do {
		printf("\n[369게임] 아무 숫자나 입력해주세요: ");
		scanf_s("%d", &input);

		if (getFirstNumber(input) == 3 || getFirstNumber(input) == 6 || getFirstNumber(input) == 9) {
			printf("[369게임] 짝!\n");
		}
		else {
			printf("[369게임] %d!\n", input);
		}
	} while (1);

	return 0;
}
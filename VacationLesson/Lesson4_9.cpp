#include <stdio.h>

int lesson4_9() {
	// 문제 2: 숫자를 입력받고 해당 숫자의 구구단을 1부터 9까지 출력해봅시다.
	int input = 0;

	scanf_s("%d", &input);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", input, i, (input * i));
	}

	return 0;
}
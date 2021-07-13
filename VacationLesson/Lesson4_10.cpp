#include <stdio.h>

int lesson4_10() {
	// 문제 3: 큰 숫자를 입력받고 1부터 해당 숫자까지의 3의 배수만 출력해봅시다.
	int input = 0;

	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (i % 3 == 0) {
			printf("1부터 %d까지의 수 중 3의 배수를 찾았습니다: %d\n", input, i);
		}
	}

	return 0;
}
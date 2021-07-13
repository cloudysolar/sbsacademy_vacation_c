#include <stdio.h>

int lesson1_11() {
	// 문제 1: 숫자를 입력받고 그대로 출력해봅시다.
	int q1 = 0;

	scanf_s("%d", &q1);
	printf("[문제 1] 답: %d\n", q1);

	// 문제 2: 알파벳 또는 숫자를 입력받고 그대로 출력해봅시다.
	char q2 = 'A';

	scanf_s(" %c", &q2, 1);
	printf("[문제 2] 답: %c\n", q2);

	// 문제 3: 알파벳을 입력받고 숫자로 출력해봅시다.
	printf("[문제 3] 답: %d\n", q2);

	// 문제 4: 숫자를 입력 받고 알파벳으로 출력해봅시다.
	printf("[문제 4] 답: %c\n", (char)q1);

	return 0;
}
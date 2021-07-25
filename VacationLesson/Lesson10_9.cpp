#include <stdio.h>

void test(int* var, int value) {
	*var = value;
}

int lesson10_9() {
	// 문제 2: 함수를 만들어 포인터를 매개변수로 넘겨봅시다. 어떤 일이 일어날까요?
	int num1 = 0;

	scanf_s("%d", &num1);
	test(&num1, 30);

	printf("num1: %d", num1);

	return 0;
}
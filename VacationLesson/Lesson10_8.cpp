#include <stdio.h>

int lesson10_8() {
	// 문제 1: 일반 변수와 포인터 변수를 만들고, 두 변수의 값과 주소를 출력해봅시다.
	int num = 22;
	int* ptr = &num;

	printf("num: %d (%p)\n", num, &num);
	printf("ptr: %d (%p / %p)\n", *ptr, ptr, &ptr);

	return 0;
}
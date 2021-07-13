#include <stdio.h>

int lesson2_11() {
	// 문제 4: 256과 32를 이용해 비트연산을 하고 각 결과값을 출력해봅시다.
	int a = 256;
	int b = 8;

	printf("%d & %d = %d\n", a, b, (a & b));
	printf("%d | %d = %d\n", a, b, (a | b));
	printf("%d ^ %d = %d\n", a, b, (a ^ b));
	printf("~%d = %d\n", a, ~a);
	printf("%d << %d = %d\n", a, b, (a << b));
	printf("%d >> %d = %d\n", a, b, (a >> b));

	return 0;
}
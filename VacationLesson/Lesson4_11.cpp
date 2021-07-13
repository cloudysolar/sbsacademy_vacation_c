#include <stdio.h>

int lesson4_11() {
	// 문제 4: 큰 숫자를 입력받고 해당 숫자의 약수는 몇개인지 찾아서 출력해봅시다.
	int input = 0;
	int count = 0;

	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++) {
		if (input % i == 0) {
			count++;
		}
	}

	printf("%d의 약수의 총 개수는 %d개 입니다.\n", input, count);

	return 0;
}
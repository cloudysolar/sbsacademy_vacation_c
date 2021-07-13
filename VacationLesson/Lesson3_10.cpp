#include <stdio.h>

int lesson3_10() {
	// 문제 3-2: 숫자 2개와 산술 연산자를 입력받아 해당 연산자에 해당하는 계산 후 결과 출력하는 계산기 만들기 (switch-case 이용)

	int a = 0;
	int b = 0;
	int result = 0;

	char op = 'a';

	printf("\n[계산기] 계산하고 싶은 식을 \"10 a 5\"와 같이 입력해주세요 (a: + | m: - | t: * | d: / | r: %): ");
	scanf_s("%d %c %d", &a, &op, 1, &b);

	switch (op) {
		case 'a':
			op = '+';
			result = a + b;
			break;
		case 'm':
			op = '-';
			result = a - b;
			break;
		case 't':
			op = '*';
			result = a * b;
			break;
		case 'd':
			op = '/';
			result = a / b;
			break;
		case 'r':
			op = '%';
			result = a % b;
			break;
		default:
			result = -1;
			printf("\n[계산기] 알 수 없는 산술 기호입니다!\n");
			break;
	}

	printf("\n");
	printf("[계산기] %d %c %d의 결과는 %d입니다.\n", a, op, b, result);

	return 0;
}
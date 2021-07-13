#include <stdio.h>

int lesson4_7() {
	// 문제 1-1: 조건문과 반복문을 이용해 계산기를 만들어봅시다. (if 이용)

	do {
		int a = 0;
		int b = 0;
		int result = 0;

		char op = 'a';

		printf("\n[계산기] 계산하고 싶은 식을 \"10 a 5\"와 같이 입력해주세요 (a: + | m: - | t: * | d: / | r: %)\n");
		printf("[계산기] 끝내려면 0 e 0을 입력하세요: ");
		scanf_s("%d %c %d", &a, &op, 1, &b);

		if (op == 'e') {
			printf("\n[계산기] 사용자의 요청으로 프로그램을 종료합니다.\n");
			break;
		}

		if (op == 'a') {
			op = '+';
			result = a + b;
		}
		else if (op == 'm') {
			op = '-';
			result = a - b;
		}
		else if (op == 't') {
			op = '*';
			result = a * b;
		}
		else if (op == 'd') {
			op = '/';
			result = a / b;
		}
		else if (op == 'r') {
			op = '%';
			result = a % b;
		}
		else {
			result = -1;
			printf("\n[계산기] 알 수 없는 산술 기호입니다!\n");
		}

		printf("\n");
		printf("[계산기] %d %c %d의 결과는 %d입니다.\n", a, op, b, result);
	} while (1);

	return 0;
}
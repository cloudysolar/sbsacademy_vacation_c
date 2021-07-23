#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

int minus(int num1, int num2) {
	return num1 - num2;
}

int multiply(int num1, int num2) {
	return num1 * num2;
}

int divide(int num1, int num2) {
	return num1 / num2;
}

int remain(int num1, int num2) {
	return num1 % num2;
}

int lesson9_5() {
	// 문제 1: "또" 계산기를 만들어봅시다. 이번엔 조건문을 이용하되 계산은 함수를 이용해봅시다.

	bool isExit = false;

	int num1 = 0, num2 = 0;
	int result = 0;

	char op = '+';

	do {
		printf("[계산기] 계산할 두 숫자를 입력해주세요: ");
		scanf_s("%d %d", &num1, &num2);

		printf("\n[계산기] 연산할 기호를 입력해주세요. 종료하려면 'e'를 입력하세요. (+, -, *, /, %%): ");
		scanf_s(" %c", &op, 1);

		switch (op) {
			case '+':
				result = add(num1, num2);
				break;
			case '-':
				result = minus(num1, num2);
				break;
			case '*':
				result = multiply(num1, num2);
				break;
			case '/':
				result = divide(num1, num2);
				break;
			case '%':
				result = remain(num1, num2);
				break;
			case 'e':
				isExit = true;
				break;
			default:
				printf("\n[계산기] 잘못 입력하셨습니다. 다시 입력해주세요!");
				break;
		}

		if (isExit) {
			printf("\n[계산기] 사용자의 요청으로 프로그램을 종료합니다.");
			break;
		}

		printf("\n[계산기] %d %c %d = %d\n\n", num1, op, num2, result);
	} while (1);

	return 0;
}
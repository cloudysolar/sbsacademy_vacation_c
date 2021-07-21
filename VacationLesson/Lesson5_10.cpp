#include <stdio.h>

int lesson5_10() {
	// 문제 3: 3개의 배열을 만들어 입력받고 나머지 2개의 배열에는 짝수와 홀수를 구분해 넣고 출력해봅시다.
	int input[5];
	int even[5];
	int odd[5];

	int evenCount = 0;
	int oddCount = 0;

	for (int i = 0; i < 5; i++) {
		input[i] = 0;
		even[i] = 0;
		odd[i] = 0;

		scanf_s("%d", &input[i]);

		if (input[i] % 2 == 0) {
			even[evenCount] = input[i];
			evenCount++;
		}
		else {
			odd[oddCount] = input[i];
			oddCount++;
		}
	}

	printf("\n[입력된 수] ");

	for (int i = 0; i < 5; i++) {
		printf("%d, ", input[i]);
	}

	printf("\n[짝수] ");

	for (int i = 0; i < 5; i++) {
		printf("%d, ", even[i]);
	}

	printf("\n[홀수] ");

	for (int i = 0; i < 5; i++) {
		printf("%d, ", odd[i]);
	}

	return 0;
}
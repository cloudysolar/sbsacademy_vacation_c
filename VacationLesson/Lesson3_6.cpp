#include <stdio.h>

int lesson3_6() {
	// 문제 1: 숫자를 입력받고 짝수라면 "짝수입니다", 홀수라면 "홀수입니다"를 출력하기

	int input = 0;

	scanf_s("%d", &input);
	
	if (input % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}

	return 0;
}
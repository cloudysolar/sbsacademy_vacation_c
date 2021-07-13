#include <stdio.h>

int lesson3_3() {
	int i = 10;

	if (i < 10) {
		printf("i < 10 조건식의 결과가 참이면 이 문장이 보여요!\n");
	}
	else if (i > 10) {
		printf("i > 10 조건식의 결과가 참이면 이 문장이 보여요!\n");
	}
	else {
		printf("모든 조건식의 결과가 거짓이면 이 문장이 보여요!\n");
	}

	return 0;
}
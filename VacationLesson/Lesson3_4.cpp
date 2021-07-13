#include <stdio.h>

int lesson3_4() {
	int i = 10;

	switch (i) {
		case 10:
			printf("i의 값이 10이면 이 문장이 보여요!\n");
			break;
		case 20:
			printf("i의 값이 20이면 이 문장이 보여요!\n");
			break;
		default:
			printf("i의 값이 10도 아니고 20도 아니면 이 문장이 보여요!\n");
			break;
	}

	return 0;
}
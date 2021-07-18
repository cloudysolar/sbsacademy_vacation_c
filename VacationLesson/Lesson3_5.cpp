#include <stdio.h>

int lesson3_5() {
	int i = 20;

	switch (i) {
	case 10:
		printf("i의 값이 10이면 이 문장이 보여요!\n");
	case 20:
		printf("i의 값이 20이면 이 문장이 보여요!\n");
	default:
		printf("i의 값이 10도 아니고 20도 아니면 이 문장이 보여요!\n");
	}

	return 0;
}
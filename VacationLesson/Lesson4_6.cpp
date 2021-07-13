#include <stdio.h>

int lesson4_6() {
	int count = 0;

	do {
		printf("현재 %d번째 실행 중입니다. 끝내려면 프로그램을 종료하세요!\n", count++);
	} while (1);

	return 0;
}
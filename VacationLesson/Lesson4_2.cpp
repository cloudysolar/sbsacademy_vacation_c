#include <stdio.h>

int lesson4_2() {
	int count = 0;

	for (;;) {
		printf("현재 %d번째 반복문이 실행 중입니다. 끝내려면 프로그램을 종료하세요!\n", count++);
	}

	return 0;
}
﻿#include <stdio.h>

int lesson1_4() {
	// 문제 2: 오늘 날짜를 "연4자리-월2자리-일2자리"로 출력해봅시다.
	printf("오늘은 2021-07-06 입니다.\n");
	
	// 문제 3: 2번의 내용을 서식문자 %d를 이용해 출력해봅시다.
	printf("오늘은 %04d-%02d-%02d 입니다.\n", 2021, 07, 06);

	return 0;
}
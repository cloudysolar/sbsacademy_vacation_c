#include <stdio.h>

int lesson3_8() {
	// 문제 2-2: 숫자를 입력받고 아래 조건에 맞게 출력하기 (switch-case문 이용)

	int age = 0;

	scanf_s("%d", &age);

	switch (age) {
		case 0:
			printf("전체이용가입니다. 누구나 이용할 수 있습니다.\n");
			break;
		case 12:
			printf("12세 이용가입니다. 부모의 관리감독이 필요할 수 있습니다.\n");
			break;
		case 15:
			printf("15세 이용가입니다. 알아서 잘 하겠죠?\n");
			break;
		case 19:
			printf("19세 이용가입니다. 말이 더 필요한가요?\n");
			break;
		default:
			printf("잘못 입력하신 것 같습니다!\n");
			break;
	}

	return 0;
}
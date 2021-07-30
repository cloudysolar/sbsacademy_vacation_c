#include <stdio.h>

int lesson12_5() {
	// 유클리드 호제법(Euclidean Algorithm)으로 최대 공약수(Greatest Common Divisor; GCD) 구하기
	int input1 = 0, input2 = 0;
	int num1 = 0, num2 = 0, gcd = 0;

	// 입력 받기
	printf("# 최대공약수를 구할 두 수를 \"큰 순서\"대로 띄어쓰기로 구분해 입력해주세요: ");
	scanf_s("%d %d", &input1, &input2);

	num1 = input1;
	num2 = input2;

	// 컴퓨터는 0으로 나눌 수 없기 때문에 나누어 떨어지는 수가 0이 되기 전에 종료 
	while (num2 > 0) {
		gcd = num1 % num2;
		num1 = num2;
		num2 = gcd;
	}

	// 모두 나누어 떨어졌다면 나누어 지는 수를 최대 공약수로 설정
	gcd = num1;

	// 출력
	printf("[!] %d와 %d 두 수의 최대 공약수는 %d입니다.\n", input1, input2, gcd);

	return 0;
}
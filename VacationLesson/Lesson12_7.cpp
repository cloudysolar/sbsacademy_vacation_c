#include <stdio.h>
#include <math.h> // 제곱함수인 pow() 함수를 이용하기 위해 사용

int lesson12_7() {
	// 페르마 소수 테스트(Fermat privality test) 또는 페르마 소정리(Fermat's little theorem)를 통해 해당 수가 소수인지 아닌지 확인하기
	// a가 정수, p가 소수일 때 페르마의 소정리에 따르면 법 p에서 a^p와 a는 서로 합동이다 - 위키백과 "페르마의 소정리"(https://ko.wikipedia.org/wiki/%ED%8E%98%EB%A5%B4%EB%A7%88%EC%9D%98_%EC%86%8C%EC%A0%95%EB%A6%AC)
	int input = 0;

	// 입력 받기
	printf("# 소수인지를 판별할 수를 입력해주세요: ");
	scanf_s("%d", &input);

	// 페르마의 소정리를 구하려면 (input - 1)부터 1까지의 모든 수에 input을 제곱하여야 하기 때문에 반복문 생성
	for (int i = (input - 1); i >= 1; i--) {
		// i에 input을 제곱 (pow는 math.h에서 제공하는 제곱 함수. 첫 번째 매개변수가 "밑", 두 번째 매개변수가 "지수"를 뜻함.)
		int result = (int) pow(i, input);

		// 제곱된 수를 다시 input으로 mod(%)연산 했을 때 밑이 그대로 나오는지 확인
		if (result % input == i) {
			// 나왔는는데 i가 1이라면 소수일 가능성이 높은 수
			if (i == 1) {
				printf("\n[O] 이 수는 소수일 가능성이 높습니다!");
			}
		}
		// 밑이 그대로 나오지 않았다면 소수가 아닐 가능성이 높은 수
		else {
			printf("\n[X] 이 수는 소수가 아닐 가능성이 높습니다!");
			break;
		}
	}

	return 0;
}
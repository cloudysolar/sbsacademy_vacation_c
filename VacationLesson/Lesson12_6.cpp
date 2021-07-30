#include <stdio.h>

int lesson12_6() {
	// 에라토스테네스의 체를 구현해 입력된 수까지의 소수 구하기
	int input = 0;
	int i, j;

	// 입력 받기
	printf("# 모든 소수를 구할 최대값을 입력해주세요: ");
	scanf_s("%d", &input);

	// 구함과 동시에 출력하기
	printf("\n[!] %d까지의 소수는 다음과 같습니다: ", input);
	// 1은 소수가 아니기 때문에 2부터 계산
	for (i = 2; i <= input; i++) {
		// 위와 동일
		for (j = 2; j < i; j++) {
			// 만약 i와 j가 0으로 나누어 떨어진다면 반복문 종료
			if (i % j == 0) {
				break;
			}
		}

		// 다만 두 수가 같은 경우 (소수는 1과 자기자신만을 약수로 갖는 수이므로) 소수로 판별 후 출력
		if (i == j) {
			printf("%d, ", i);
		}
	}

	printf("\n");

	return 0;
}
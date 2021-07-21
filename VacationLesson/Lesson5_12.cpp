#include <stdio.h>

int main() {
	// 문제 4-2: 2개의 배열을 만들어 입력받고 두 배열이 같은지 다른지 확인하는 프로그램을 만들어봅시다. (두 개의 배열 모두 입력, 두 번째 배열 입력 시 비교)
	int arr1[5];
	int arr2[5];

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr1[i]);
	}

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr2[i]);

		if (arr1[i] == arr2[i]) {
			printf("두 배열의 값이 같습니다!\n");
		}
		else {
			printf("두 배열의 값이 다릅니다!\n");
		}
	}

	return 0;
}
#include <stdio.h>

int main() {
	// 선형 검색 구현하기
	int arr[20] = { 1, -7, 9, 100, 20, 13, 5, 7, 3, -4, -11, 2, 8, 80, 70, 72, 66, 73, 21, 25 };
	int search = 0;

	// 입력 받을지에 대한 여부
	bool allowInput = false;

	// 입력을 받을 때만 scanf_s() 실행.
	if (allowInput) {
		// 배열 입력 받기
		for (int i = 0; i < 20; i++) {
			printf("# 입력 [%2d/%2d] : ", (i + 1), 20);
			scanf_s("%d", &arr[i]);
		}
	}

	// 찾을 값 입력받기
	printf("# 찾는 값: ");
	scanf_s("%d", &search);

	// 값을 0번부터 차례대로 검색해 나오면 반복문 중지 후 결과 출력, 아니면 전체 후 결과 출력
	for (int i = 0; i < 20; i++) {
		if (i == 19) {
			printf("\n[X] 찾으려는 값 %d은 배열에 있는 값이 아닙니다.\n", search);
		}

		if (i == search) {
			printf("\n[O] 찾으려는 값 %d(을)를 배열의 %d번째에서 발견하였습니다.\n", search, (i + 1));
			break;
		}
	}

	return 0;
}
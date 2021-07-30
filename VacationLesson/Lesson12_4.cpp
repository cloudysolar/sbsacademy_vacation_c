#include <stdio.h>

int main() {
	// 이진 검색 구현하기 (이진 검색은 정렬된 배열에서만 가능함)
	int arr[20] = { -11, -7, -4, 1, 2, 3, 5, 7, 8, 9, 13, 20, 21, 25, 66, 70 ,72, 73, 80 ,100 };

	// 검색할 값
	int search = 0;

	int first = 0;	// 검색 범위의 첫 번째 값 (초기: 배열에서의 첫 번재 인덱스)
	int middle = 0;	// 검색 범위의 중간 값
	int last = 19;	// 검색 범위의 마지막 값 (초기: 배열에서의 마지막 인덱스)

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

	while (first <= last) {
		middle = (first + last) / 2;

		// 검색하려는 값과 배열의 중간 값이 같은 경우
		if (search == arr[middle]) {
			printf("\n[O] 찾으려는 값 %d(을)를 배열의 %d번째에서 발견하였습니다.\n", search, (middle + 1));
			return 0;
		}

		// 검색하려는 값이 배열의 중간 값 보다 큰 경우
		else if (search > arr[middle]) {
			// 검색 범위의 첫 번째 값을 중간 값 보다 1 큰 값으로 하고 재검색 ((middle + 1) ~ last)
			first = middle + 1;
		}

		// 검색하려는 값이 배열의 중간 값 보다 작은 경우
		else {
			// 검색 범위의 마지막 값을 중간 값  보다 1 작은 값으로 하고 재검색 (first ~ (middle - 1))
			last = middle - 1;
		}
	}

	printf("\n[X] 찾으려는 값 %d은 배열에 있는 값이 아닙니다.\n", search);
	return 0;
}
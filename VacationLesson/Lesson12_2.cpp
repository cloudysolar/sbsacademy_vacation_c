#include <stdio.h>

int main() {
	// 선택 정렬 구현하기
	int arr[20] = { 1, -7, 9, 100, 20, 13, 5, 7, 3, -4, -11, 2, 8, 80, 70, 72, 66, 73, 21, 25 };

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

	// 정렬 전 상태 출력하기
	printf("\n\n- 입력한 배열	: ");
	for (int i = 0; i < 20; i++) {
		printf("%3d, ", arr[i]);
	}

	// 배열 정렬하기
	for (int i = 0; i < 20; i++) {
		// _CRT_INT_MAX는 int값의 최대값인 2,147,483,647이 저장된 변수. 최솟값 검색 시 기본 최솟값을 해당 변수의 최대값으로 설정해야함.
		int min = _CRT_INT_MAX;

		// 선택한 요소의 방 번호를 저장하기 위한 변수
		int index = 0;

		// 최솟값 찾기 시작
		for (int j = i; j < 20; j++) {
			// 만약 sort[j]의 값이 min보다 작은 경우
			if (arr[j] < min) {
				// min 값을 sort[j]로 변경
				min = arr[j];

				// j의 위치 기억
				index = j;
			}
		}

		// 검색된 최솟값을 맨 앞으로 이동하기 위해 임시 변수에 저장
		int temp = arr[i];

		// sort[i]의 값을 min으로 변경
		arr[i] = min;

		// 선택된 요소의 index를 가져와 그 위치에 원래 i번째에 있는 요소 이동
		arr[index] = temp;
	}

	// 정렬 후 상태 출력하기
	printf("\n- 정렬된 배열	: ");
	for (int i = 0; i < 20; i++) {
		printf("%3d, ", arr[i]);
	}

	printf("\n");

	return 0;
}
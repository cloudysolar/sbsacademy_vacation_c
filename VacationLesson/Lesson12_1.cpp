#include <stdio.h>

int lesson12_1() {
	// 버블 정렬 구현하기
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

	// 배열 정렬하기 (첫 번째 for문은 0부터 출발)
	for (int i = 0; i < 20; i++) {
		// 두 번째 for문은 i번째 부터 출발
		for (int j = i; j < 20; j++) {
			// 만약 sort[i]가 sort[j]보다 크면
			if (arr[i] > arr[j]) {
				// sort[i]를 임시 저장
				int temp = arr[i];

				// sort[i]를 sort[j]로 변경
				arr[i] = arr[j];

				// sort[j]를 임시 저장한 sort[i]로 변경
				arr[j] = temp;
			}
		}
	}

	// 정렬 후 상태 출력하기
	printf("\n- 정렬된 배열	: ");
	for (int i = 0; i < 20; i++) {
		printf("%3d, ", arr[i]);
	}

	printf("\n");

	return 0;
}
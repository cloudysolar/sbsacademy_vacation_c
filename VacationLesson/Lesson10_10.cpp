#include <stdio.h>

int lesson10_10() {
	// 문제 3: 간단한 배열을 만들고 배열의 주소를 가져와봅시다. 그리고 포인터 변수를 1씩 더하거나 빼고 주소에 저장된 값을 확인해봅시다.
	int num = 0;
	int arr[5] = { 20, 30, 40, 50, 60 };
	int* ptr = arr;

	printf("arr	: %p\n", arr);
	printf("arr[%d]	: %p (%d)\n", num, &arr[num], arr[num]);
	printf("=====\n");
	printf("arr[%d]	: %p (%d)\n", (num + 1), &arr[num + 1], arr[num + 1]);
	printf("arr[%d]	: %p (%d)\n", (num + 1), &arr[num] + 1, *(&arr[num] + 1));

	return 0;
}
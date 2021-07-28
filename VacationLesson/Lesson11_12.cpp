#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	double size;
	int price;
} Drink;

Drink setDrinkInfo(const char* name, double size, int price) {
	Drink tmp;

	strcpy_s(tmp.name, sizeof(tmp.name), name);
	tmp.size = size;
	tmp.price = price;

	return tmp;
}

int lesson11_12() {
	// 문제 2-a: 해봤다면 다른 함수에서 초기화하고 main() 함수에서 출력해봅시다.
	Drink cider = setDrinkInfo("사이다", 1.5, 2500);

	printf("- 음료의 이름: %s\n", cider.name);
	printf("- 음료의 양: %.1fL\n", cider.size);
	printf("- 음료의 가격: %d원\n", cider.price);

	return 0;
}
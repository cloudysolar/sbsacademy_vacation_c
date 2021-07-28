#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	double size;
	int price;
} Drink;

void showDrinkInfo(Drink drink) {
	printf("- 음료의 이름: %s\n", drink.name);
	printf("- 음료의 양: %.1fL\n", drink.size);
	printf("- 음료의 가격: %d원\n", drink.price);
}

int lesson11_11() {
	// 문제 2: 위(문제 1)에서 만든 구조체를 다른 함수에서 출력해봅시다.
	Drink cider;

	strcpy_s(cider.name, sizeof(cider.name), "사이다");
	cider.size = 1.5;
	cider.price = 2500;

	showDrinkInfo(cider);

	return 0;
}
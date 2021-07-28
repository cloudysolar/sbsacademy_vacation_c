#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	double size;
	int price;
} Drink;

void changeDrink(Drink* drink) {
	strcpy_s(drink->name, sizeof(drink->name), "콜라");
	drink->size = 1.5;
	drink->price = 1800;
}

int lesson11_14() {
	// 문제 4: 포인터로 만든 구조체를 함수의 매개변수로 넘겨봅시다.
	Drink* cider;

	strcpy_s(cider->name, sizeof(cider->name), "사이다");
	cider->size = 1.5;
	cider->price = 2500;

	changeDrink(cider);

	printf("- 음료의 이름: %s\n", cider->name);
	printf("- 음료의 양: %.1fL\n", cider->size);
	printf("- 음료의 가격: %d원\n", cider->price);

	return 0;
}
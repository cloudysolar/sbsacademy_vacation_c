#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	double size;
	int price;
} Drink;

int lesson11_13() {
	// 문제 3: 구조체를 포인터로 만들고 멤버 변수를 초기화하고 출력해봅시다.
	Drink* cider;

	strcpy_s(cider->name, sizeof(cider->name), "사이다");
	cider->size = 1.5;
	cider->price = 2500;

	printf("- 음료의 이름: %s\n", cider->name);
	printf("- 음료의 양: %.1fL\n", cider->size);
	printf("- 음료의 가격: %d원\n", cider->price);

	return 0;
}
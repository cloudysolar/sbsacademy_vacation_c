#include <stdio.h>

typedef struct {
	char name[20];
	double size;
	int price;
} Drink;

int main() {
	// 문제 1: 아무 구조체나 만들어 멤버 변수를 초기화하고 출력해봅시다.
	Drink cider = { "사이다", 1.5, 2500 };

	printf("- 음료의 이름: %s\n", cider.name);
	printf("- 음료의 양: %.1fL\n", cider.size);
	printf("- 음료의 가격: %d원\n", cider.price);

	return 0;
}
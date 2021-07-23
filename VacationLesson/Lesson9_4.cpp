#include <stdio.h>

int add(int num1, int num2);

int main() {
	int num1 = 0, num2 = 0;

	scanf_s("%d %d", &num1, &num2);
	printf("- %d + %d = %d\n", num1, num2, add(num1, num2));

	return 0;
}

int add(int num1, int num2) {
	return num1 + num2;
}
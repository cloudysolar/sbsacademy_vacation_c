#include <stdio.h>

int lesson2_5() {
	// »ïÇ× ¿¬»êÀÚ
	int a = 10;
	int b = 30;

	int c = a >= 10 ? 30 : 5;
	int d = b == 30 ? 20 : 10;

	printf("a = %d / b = %d / c = %d / d = %d\n", a, b, c, d);

	return 0;
}
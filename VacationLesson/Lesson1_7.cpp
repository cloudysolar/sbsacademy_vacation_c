#include <stdio.h>

int lesson1_7() {
	double d = 3.141592;
	int i = (int) d;

	printf("원주율을 double로 출력하면 %.6f 입니다.\n", d);
	printf("원주율을 int로 출력하면 %d 입니다.\n", i);

	return 0;
}
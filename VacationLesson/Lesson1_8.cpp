#include <stdio.h>

int lesson1_8() {
	// 자료형: bool
	bool b = true;

	// 자료형: char
	unsigned char c = 'A';

	// 자료형: short
	unsigned short s = 10;

	// 자료형: int
	unsigned int i = 200;

	// 자료형: long
	unsigned long l = 500;

	// 자료형: long long
	unsigned long long ll = 2147483648;

	// 자료형: float
	float f = 3.141592f;

	// 자료형: double
	double d = 50.4894321;

	// 자료형: long double
	long double ld = 5000.123456;

	printf("== 각 자료형의 값과 크기 ==\n\n");
	printf("- bool:		%d						(크기: %d)\n", b, sizeof(bool));
	printf("- char:		%c / %d						(크기: %d)\n", c, c, sizeof(unsigned char));
	printf("- short:	%d						(크기: %d)\n", s, sizeof(unsigned short));
	printf("- int:		%d						(크기: %d)\n", i, sizeof(unsigned int));
	printf("- long:		%ld						(크기: %d)\n", l, sizeof(unsigned long));
	printf("- long long:	%lld					(크기: %d)\n", ll, sizeof(unsigned long long));
	printf("- float:	%f / %e/ %g		(크기: %d)\n", f, f, f, sizeof(float));
	printf("- double:	%f / %e / %g		(크기: %d)\n", d, d, d, sizeof(double));
	printf("- long double:	%Lf					(크기: %d)\n", ld, sizeof(long double));

	return 0;
}
#include <stdio.h>

int lesson1_8() {
	// �ڷ���: bool
	bool b = true;

	// �ڷ���: char
	unsigned char c = 'A';

	// �ڷ���: short
	unsigned short s = 10;

	// �ڷ���: int
	unsigned int i = 200;

	// �ڷ���: long
	unsigned long l = 500;

	// �ڷ���: long long
	unsigned long long ll = 2147483648;

	// �ڷ���: float
	float f = 3.141592f;

	// �ڷ���: double
	double d = 50.4894321;

	// �ڷ���: long double
	long double ld = 5000.123456;

	printf("== �� �ڷ����� ���� ũ�� ==\n\n");
	printf("- bool:		%d						(ũ��: %d)\n", b, sizeof(bool));
	printf("- char:		%c / %d						(ũ��: %d)\n", c, c, sizeof(unsigned char));
	printf("- short:	%d						(ũ��: %d)\n", s, sizeof(unsigned short));
	printf("- int:		%d						(ũ��: %d)\n", i, sizeof(unsigned int));
	printf("- long:		%ld						(ũ��: %d)\n", l, sizeof(unsigned long));
	printf("- long long:	%lld					(ũ��: %d)\n", ll, sizeof(unsigned long long));
	printf("- float:	%f / %e/ %g		(ũ��: %d)\n", f, f, f, sizeof(float));
	printf("- double:	%f / %e / %g		(ũ��: %d)\n", d, d, d, sizeof(double));
	printf("- long double:	%Lf					(ũ��: %d)\n", ld, sizeof(long double));

	return 0;
}
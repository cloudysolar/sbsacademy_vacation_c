#include <stdio.h>

int lesson1_6() {
	// �ڷ���: bool
	bool b = true;

	// �ڷ���: char
	char c = 'A';

	// �ڷ���: short
	short s = 10;

	// �ڷ���: int
	int i = 200;

	// �ڷ���: long
	long l = 500;

	// �ڷ���: long long
	long long ll = 2147483648;

	// �ڷ���: float
	float f = 3.141592f;

	// �ڷ���: double
	double d = 50.4894321;

	// �ڷ���: long double
	long double ld = 5000.123456;

	printf("== �� �ڷ����� ���� ũ�� ==\n\n");
	printf("- bool:		%d						(ũ��: %d)\n", b, sizeof(bool));
	printf("- char:		%c / %d						(ũ��: %d)\n", c, c, sizeof(char));
	printf("- short:	%d						(ũ��: %d)\n", s, sizeof(short));
	printf("- int:		%d						(ũ��: %d)\n", i, sizeof(int));
	printf("- long:		%ld						(ũ��: %d)\n", l, sizeof(long));
	printf("- long long:	%lld					(ũ��: %d)\n", ll, sizeof(long long));
	printf("- float:	%f / %e/ %g		(ũ��: %d)\n", f, f, f, sizeof(float));
	printf("- double:	%f / %e / %g		(ũ��: %d)\n", d, d, d, sizeof(double));
	printf("- long double:	%Lf					(ũ��: %d)\n", ld, sizeof(long double));

	return 0;
}
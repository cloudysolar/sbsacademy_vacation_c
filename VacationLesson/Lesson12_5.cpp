#include <stdio.h>

int lesson12_5() {
	// ��Ŭ���� ȣ����(Euclidean Algorithm)���� �ִ� �����(Greatest Common Divisor; GCD) ���ϱ�
	int input1 = 0, input2 = 0;
	int num1 = 0, num2 = 0, gcd = 0;

	// �Է� �ޱ�
	printf("# �ִ������� ���� �� ���� \"ū ����\"��� ����� ������ �Է����ּ���: ");
	scanf_s("%d %d", &input1, &input2);

	num1 = input1;
	num2 = input2;

	// ��ǻ�ʹ� 0���� ���� �� ���� ������ ������ �������� ���� 0�� �Ǳ� ���� ���� 
	while (num2 > 0) {
		gcd = num1 % num2;
		num1 = num2;
		num2 = gcd;
	}

	// ��� ������ �������ٸ� ������ ���� ���� �ִ� ������� ����
	gcd = num1;

	// ���
	printf("[!] %d�� %d �� ���� �ִ� ������� %d�Դϴ�.\n", input1, input2, gcd);

	return 0;
}
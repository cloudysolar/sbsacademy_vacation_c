#include <stdio.h>

int lesson2_9() {
	// ���� 2: �Էµ� ���� ¦������ Ȧ�������� ���� 0(¦��)�� 1(Ȧ��)�� ����غ��ô�.
	int input = 0;

	printf("¦������ Ȧ�������� �Ǻ��� ���� �Է����ּ���: ");
	scanf_s("%d", &input);

	printf("\n������ ���: %d\n", (input % 2));
	printf("���� ���� ���: %s\n", (input % 2 ? "Ȧ��" : "¦��"));

	return 0;
}
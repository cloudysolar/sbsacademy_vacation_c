#include <stdio.h>

int lesson3_8() {
	// ���� 2-2: ���ڸ� �Է¹ް� �Ʒ� ���ǿ� �°� ����ϱ� (switch-case�� �̿�)

	int age = 0;

	scanf_s("%d", &age);

	switch (age) {
		case 0:
			printf("��ü�̿밡�Դϴ�. ������ �̿��� �� �ֽ��ϴ�.\n");
			break;
		case 12:
			printf("12�� �̿밡�Դϴ�. �θ��� ���������� �ʿ��� �� �ֽ��ϴ�.\n");
			break;
		case 15:
			printf("15�� �̿밡�Դϴ�. �˾Ƽ� �� �ϰ���?\n");
			break;
		case 19:
			printf("19�� �̿밡�Դϴ�. ���� �� �ʿ��Ѱ���?\n");
			break;
		default:
			printf("�߸� �Է��Ͻ� �� �����ϴ�!\n");
			break;
	}

	return 0;
}
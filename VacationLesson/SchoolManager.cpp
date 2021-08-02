#include <stdio.h>
#include <string.h>

#define max_class 10
#define max_student 10

typedef struct t_score {
	double kor = 0.0;
	double eng = 0.0;
	double math = 0.0;
} Score;

typedef struct t_student {
	char* name = 0;
	int age = 0;
	int number = -1;
	Score score;
} Student;

typedef struct t_teacher {
	char* name = 0;
	char* subject = 0;
	int age = 0;
} Teacher;

typedef struct t_class {
	int classNum = -1;
	Teacher teacher;
	Student students[max_student];
} Class;

Class classes[max_class];
Teacher teachers[max_class];
Student students[(max_class * max_student)];

// ���ݱ��� ������ �б� ���� ��ȯ�ϴ� �Լ�
int createdClassCount() {
	int count = 0;

	for (int i = 0; i < max_class; i++) {
		if (classes[i].classNum != -1) {
			count++;
		}
	}

	return count;
}

// ���ݱ��� ��ϵ� ������ ���� ��ȯ�ϴ� �Լ� 
int registeredTeacherCount() {
	int count = 0;

	for (int i = 0; i < max_class; i++) {
		if (strlen(teachers[i].name) != 0) {
			count++;
		}
	}

	return count;
}

// ���ݱ��� ��ϵ� �л� ���� ��ȯ�ϴ� �Լ�
int registeredStudentCount() {
	int count = 0;

	for (int i = 0; i < (max_class * max_student); i++) {
		if (strlen(students[i].name) != 0) {
			count++;
		}
	}

	return count;
}

// ������ �б� ����� ����ϴ� �Լ�
void showClassList() {
	if (createdClassCount() == 0) {
		printf("  - ������ �б��� �����ϴ�.\n");
	}
	else {
		for (int i = 0; i < max_class; i++) {
			if (classes[i].classNum != -1) {
				printf("  - %d. %d��\n", (i + 1), classes[i].classNum);
			}
		}
	}
}

// �� �б��� �����ϴ� �Լ�
// @param �� ��ȣ
void createNewClass(int classNum) {
	if (createdClassCount() < max_class) {
		Class tmp_class = { 0 };
		tmp_class.classNum = classNum;

		classes[createdClassCount() - 1] = tmp_class;
		printf(" [*] %d���� ���� �����Ǿ����ϴ�.\n", classNum);
	}
	else {
		printf(" [!] �� �̻� ���� ������ �� �����ϴ�.\n");
	}
}

// ���� �Լ�
int main() {
	printf("\n");

	do {
		int input_mm = 0;

		printf(" [ �б� ���� ���α׷� ]\n");
		printf(" ���ϴ� �޴��� �Է� �� ���͸� �����ּ���.\n\n");
		printf(" 1. �б� ����\n");
		printf(" 2. �л� ����\n");
		printf(" 3. ������ ����\n");
		printf(" 4. ���α׷� ����\n\n");
		printf(" # �Է�: ");

		scanf_s("%d", &input_mm);
		printf("\n");

		// �б� ����(��Ϻ���/����/����(�л� �߰�/����, ������ �߰�/����)/����)
		if (input_mm == 1) {
			do {
				int input_mc = 0;

				printf(" [ �б� ���� ���α׷� > �б� ���� ]\n");
				printf(" ���ϴ� �޴��� �Է� �� ���͸� �����ּ���.\n\n");
				printf(" 1. ������ �б� ���\n");
				printf(" 2. �� �б� ����\n");
				printf(" 3. �б� ���� ����\n");
				printf(" 4. �б� ����\n");
				printf(" 5. ���� �޴���\n\n");
				printf(" # �Է�: ");

				scanf_s("%d", &input_mc);
				printf("\n");

				// �б� ��� ���
				if (input_mc == 1) {
					printf(" [ �б� ���� ���α׷� > �б� ���� > �б� ��� ���]\n");
					showClassList();

					printf("\n\n");
				}

				// �� �б� ���� (�ִ� max_class��)
				else if (input_mc == 2) {
					int input_cn = 0;

					printf(" [ �б� ���� ���α׷� > �б� ���� > �б� ���� ]\n");
					printf(" ���� %d���� �б��� �����Ǿ� �ֽ��ϴ�.\n\n", createdClassCount());

					printf(" # ���ο� �б��� ��ȣ�� �Է����ּ���: ");
					scanf_s("%d", &input_cn);

					printf("\n");

					createNewClass(input_cn);
				}

				// �б� ���� ���� (�б޿� �л� �Ǵ� ������ �߰�/����, �� ��ȣ ����)
				else if (input_mc == 3) {

				}

				// �б� ����
				else if (input_mc == 4) {
					do {
						int input_dc = 0;

						printf(" [ �б� ���� ���α׷� > �б� ���� > �б� ���� ]\n");
						printf(" ���� %d���� �б��� �����Ǿ� �ֽ��ϴ�.\n\n", createdClassCount());

						showClassList();

						printf(" # ������ �б��� ��ȣ(�� ��ȣ)�� �Է����ּ��� (����Ϸ��� -1�� �Է����ּ���.): ");
						scanf_s("%d", &input_dc);

						printf("\n");

						if (input_dc == -1) {
							printf(" [!] �б� ���� �۾��� �����մϴ�.\n");
							break;
						}
						else if (0 < input_dc && input_dc <= max_class) {
							do {
								char input_dc_req = 'N';

								printf(" [ �б� ���� ���α׷� > �б� ���� > �б� ���� > ����: %d��(%d) ]\n", classes[input_dc - 1].classNum, input_dc);
								printf(" ���� ���õ� �б��� %d���Դϴ�. �����Ͻðڽ��ϱ�? (Y/N): ", classes[input_dc - 1].classNum);
								scanf_s(" %c", &input_dc_req, sizeof(input_dc_req));

								printf("\n");

								if (input_dc_req == 'Y' || input_dc_req == 'y') {

									break;
								}
								else if (input_dc_req == 'N' || input_dc_req == 'n') {

									break;
								}
								else {
									printf(" [!] �߸� �Է��ϼ̽��ϴ�. Y �Ǵ� N�� �Է��� �� �ֽ��ϴ�.\n");
									continue;
								}
							} while (true);
						}
						else {
							printf(" [!] �߸� �Է��ϼ̽��ϴ�. �Է� ������ ������ %d~%d���� �Դϴ�.\n", 1, max_class);
							continue;
						}
					} while (true);

					break;
				}

				else if (input_mc == 5) {
					printf(" [!] �б� ���� �۾��� �����մϴ�.\n");
					break;
				}
				else {
					printf(" [!] �� �� ���� �޴��Դϴ�. �ٽ� �Է����ּ���.\n");
					continue;
				}
			} while (true);
		}

		// �л� ����(��Ϻ���/���/����/����)
		else if (input_mm == 2) {

		}

		// ������ ����(��Ϻ���/���/����/����)
		else if (input_mm == 3) {

		}
		else if (input_mm == 4) {
			printf(" [!] ������� ��û���� ���α׷��� �����մϴ�.\n");
			break;
		}
		else {
			printf(" [!] �� �� ���� �޴��Դϴ�. �ٽ� �Է����ּ���.\n");
			continue;
		}
	} while (true); 

	return 0;
}
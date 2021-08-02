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

// 지금까지 생성된 학급 수를 반환하는 함수
int createdClassCount() {
	int count = 0;

	for (int i = 0; i < max_class; i++) {
		if (classes[i].classNum != -1) {
			count++;
		}
	}

	return count;
}

// 지금까지 등록된 선생님 수를 반환하는 함수 
int registeredTeacherCount() {
	int count = 0;

	for (int i = 0; i < max_class; i++) {
		if (strlen(teachers[i].name) != 0) {
			count++;
		}
	}

	return count;
}

// 지금까지 등록된 학생 수를 반환하는 함수
int registeredStudentCount() {
	int count = 0;

	for (int i = 0; i < (max_class * max_student); i++) {
		if (strlen(students[i].name) != 0) {
			count++;
		}
	}

	return count;
}

// 생성된 학급 목록을 출력하는 함수
void showClassList() {
	if (createdClassCount() == 0) {
		printf("  - 생성된 학급이 없습니다.\n");
	}
	else {
		for (int i = 0; i < max_class; i++) {
			if (classes[i].classNum != -1) {
				printf("  - %d. %d반\n", (i + 1), classes[i].classNum);
			}
		}
	}
}

// 새 학급을 생성하는 함수
// @param 반 번호
void createNewClass(int classNum) {
	if (createdClassCount() < max_class) {
		Class tmp_class = { 0 };
		tmp_class.classNum = classNum;

		classes[createdClassCount() - 1] = tmp_class;
		printf(" [*] %d반이 새로 생성되었습니다.\n", classNum);
	}
	else {
		printf(" [!] 더 이상 반을 생성할 수 없습니다.\n");
	}
}

// 메인 함수
int main() {
	printf("\n");

	do {
		int input_mm = 0;

		printf(" [ 학급 관리 프로그램 ]\n");
		printf(" 원하는 메뉴를 입력 후 엔터를 눌러주세요.\n\n");
		printf(" 1. 학급 관리\n");
		printf(" 2. 학생 관리\n");
		printf(" 3. 선생님 관리\n");
		printf(" 4. 프로그램 종료\n\n");
		printf(" # 입력: ");

		scanf_s("%d", &input_mm);
		printf("\n");

		// 학급 관리(목록보기/생성/수정(학생 추가/삭제, 선생님 추가/삭제)/삭제)
		if (input_mm == 1) {
			do {
				int input_mc = 0;

				printf(" [ 학급 관리 프로그램 > 학급 관리 ]\n");
				printf(" 원하는 메뉴를 입력 후 엔터를 눌러주세요.\n\n");
				printf(" 1. 생성된 학급 목록\n");
				printf(" 2. 새 학급 생성\n");
				printf(" 3. 학급 정보 수정\n");
				printf(" 4. 학급 삭제\n");
				printf(" 5. 메인 메뉴로\n\n");
				printf(" # 입력: ");

				scanf_s("%d", &input_mc);
				printf("\n");

				// 학급 목록 출력
				if (input_mc == 1) {
					printf(" [ 학급 관리 프로그램 > 학급 관리 > 학급 목록 출력]\n");
					showClassList();

					printf("\n\n");
				}

				// 새 학급 생성 (최대 max_class개)
				else if (input_mc == 2) {
					int input_cn = 0;

					printf(" [ 학급 관리 프로그램 > 학급 관리 > 학급 생성 ]\n");
					printf(" 현재 %d개의 학급이 생성되어 있습니다.\n\n", createdClassCount());

					printf(" # 새로운 학급의 번호를 입력해주세요: ");
					scanf_s("%d", &input_cn);

					printf("\n");

					createNewClass(input_cn);
				}

				// 학급 정보 수정 (학급에 학생 또는 선생님 추가/삭제, 반 번호 수정)
				else if (input_mc == 3) {

				}

				// 학급 삭제
				else if (input_mc == 4) {
					do {
						int input_dc = 0;

						printf(" [ 학급 관리 프로그램 > 학급 관리 > 학급 삭제 ]\n");
						printf(" 현재 %d개의 학급이 생성되어 있습니다.\n\n", createdClassCount());

						showClassList();

						printf(" # 삭제할 학급의 번호(반 번호)를 입력해주세요 (취소하려면 -1을 입력해주세요.): ");
						scanf_s("%d", &input_dc);

						printf("\n");

						if (input_dc == -1) {
							printf(" [!] 학급 삭제 작업을 종료합니다.\n");
							break;
						}
						else if (0 < input_dc && input_dc <= max_class) {
							do {
								char input_dc_req = 'N';

								printf(" [ 학급 관리 프로그램 > 학급 관리 > 학급 삭제 > 선택: %d반(%d) ]\n", classes[input_dc - 1].classNum, input_dc);
								printf(" 현재 선택된 학급은 %d반입니다. 삭제하시겠습니까? (Y/N): ", classes[input_dc - 1].classNum);
								scanf_s(" %c", &input_dc_req, sizeof(input_dc_req));

								printf("\n");

								if (input_dc_req == 'Y' || input_dc_req == 'y') {

									break;
								}
								else if (input_dc_req == 'N' || input_dc_req == 'n') {

									break;
								}
								else {
									printf(" [!] 잘못 입력하셨습니다. Y 또는 N만 입력할 수 있습니다.\n");
									continue;
								}
							} while (true);
						}
						else {
							printf(" [!] 잘못 입력하셨습니다. 입력 가능한 범위는 %d~%d까지 입니다.\n", 1, max_class);
							continue;
						}
					} while (true);

					break;
				}

				else if (input_mc == 5) {
					printf(" [!] 학급 관리 작업을 종료합니다.\n");
					break;
				}
				else {
					printf(" [!] 알 수 없는 메뉴입니다. 다시 입력해주세요.\n");
					continue;
				}
			} while (true);
		}

		// 학생 관리(목록보기/등록/수정/삭제)
		else if (input_mm == 2) {

		}

		// 선생님 관리(목록보기/등록/수정/삭제)
		else if (input_mm == 3) {

		}
		else if (input_mm == 4) {
			printf(" [!] 사용자의 요청으로 프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf(" [!] 알 수 없는 메뉴입니다. 다시 입력해주세요.\n");
			continue;
		}
	} while (true); 

	return 0;
}
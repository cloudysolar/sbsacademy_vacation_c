#include <stdio.h>

typedef struct {
	char name[10];		// 학생의 이름
	char gender;		// 학생의 성별
	char phone[15];		// 학생의 전화번호
	int age;			// 학생의 나이
	int achieveLevel;	// 학생의 성취도
} Student;

int lesson11_5() {
	Student std[2] = {
		{ "홍길동" },
		{ "김수한무"}
	};

	for (int i = 0; i < 2; i++) {
		printf("- 학생의 이름: %s\n", std[i].name);
	}

	return 0;
}
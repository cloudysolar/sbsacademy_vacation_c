#include <stdio.h>

typedef struct {
	char name[10];		// 학생의 이름
	char gender;		// 학생의 성별
	char phone[15];		// 학생의 전화번호
	int age;			// 학생의 나이
	int achieveLevel;	// 학생의 성취도
} Student;

int lesson11_6() {
	Student std = { "홍길동", 'M', "010-1234-5678", 20, 5 };
	Student* ptr = &std;

	printf("- 학생의 성별: %c\n", ptr->gender);

	return 0;
}
#include <stdio.h>

typedef struct {
	char name[10];		// 학생의 이름
	char gender;		// 학생의 성별
	char phone[15];		// 학생의 전화번호
	int age;			// 학생의 나이
	int achieveLevel;	// 학생의 성취도
} Student;

void setStudent(Student* student) {
	printf("- 학생의 이름: %s\n", student->name);
	printf("- 학생의 성별: %c\n", student->gender);
	printf("- 학생의 전화번호: %s\n", student->phone);
	printf("- 학생의 나이: %d\n", student->age);
	printf("- 학생의 성취도: %d\n", student->achieveLevel);
}

int lesson11_7() {
	Student std = { "홍길동", 'M', "010-1234-5678", 20, 5 };

	setStudent(&std);

	return 0;
}
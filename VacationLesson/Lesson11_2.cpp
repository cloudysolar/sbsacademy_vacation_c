#include <stdio.h>

struct student {
	char name[10];		// 학생의 이름
	char gender;		// 학생의 성별
	char phone[15];		// 학생의 전화번호
	int age;			// 학생의 나이
	int achieveLevel;	// 학생의 성취도
};

int lesson11_2() {
	struct student student1 = { "홍길동", 'M', "010-1234-5678", 20, 5 };

	printf("- 학생의 이름: %s\n", student1.name);
	printf("- 학생의 성별: %c\n", student1.gender);
	printf("- 학생의 전화번호: %s\n", student1.phone);
	printf("- 학생의 나이: %d\n", student1.age);
	printf("- 학생의 성취도: %d\n", student1.achieveLevel);

	return 0;
}
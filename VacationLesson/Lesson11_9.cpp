#include <stdio.h>

typedef struct {
	char name[10];
	char phone[15];
} Teacher;

typedef struct {
	Teacher teacher;    // 담당 선생님

	char name[10];		// 학생의 이름
	char gender;		// 학생의 성별
	char phone[15];		// 학생의 전화번호
	int age;			// 학생의 나이
	int achieveLevel;	// 학생의 성취도
} Student;

int lesson11_9() {
	Teacher tc = { "홍길동", "010-1234-5678" };
	Student std = { tc, "김수한무", 'F', "010-2345-6789", 20, 5 };


	printf("- 학생의 선생님: \n");
	printf("  - 이름: %s\n", tc.name);
	printf("  - 전화번호: %s\n", tc.phone);
	printf("- 학생의 이름: %s\n", std.name);
	printf("- 학생의 성별: %c\n", std.gender);
	printf("- 학생의 전화번호: %s\n", std.phone);
	printf("- 학생의 나이: %d\n", std.age);
	printf("- 학생의 성취도: %d\n", std.achieveLevel);

	return 0;
}
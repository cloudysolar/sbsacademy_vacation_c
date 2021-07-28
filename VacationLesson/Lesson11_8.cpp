#include <stdio.h>
#include <string.h>

typedef struct {
	char name[10];		// 학생의 이름
	char gender;		// 학생의 성별
	char phone[15];		// 학생의 전화번호
	int age;			// 학생의 나이
	int achieveLevel;	// 학생의 성취도
} Student;

Student setStudent(const char* name, char gender, const char* phone, int age, int achieveLevel) {
	Student std;

	strcpy_s(std.name, sizeof(std.name), name);
	strcpy_s(std.phone, sizeof(std.phone), phone);

	std.gender = gender;
	std.age = age;
	std.achieveLevel = achieveLevel;

	return std;
}

int main() {
	Student std = setStudent("홍길동", 'M', "010-1234-5678", 20, 5);

	printf("- 학생의 이름: %s\n", std.name);
	printf("- 학생의 성별: %c\n", std.gender);
	printf("- 학생의 전화번호: %s\n", std.phone);
	printf("- 학생의 나이: %d\n", std.age);
	printf("- 학생의 성취도: %d\n", std.achieveLevel);

	return 0;
}
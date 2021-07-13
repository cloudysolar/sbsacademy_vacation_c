#include <stdio.h>
#include <string.h>

int lesson6_6() {
	char target[10] = "Hello!";
	char source[10] = "World!";

	strcpy_s(target, sizeof(target), source);

	printf("%s\n", target);

	return 0;
}
#include <stdio.h>
#include <string.h>

int lesson6_7() {
	char target[30] = "Hello ";
	char added[10] = "World!";

	strcat_s(target, sizeof(target), added);
	printf("%s\n", target);

	return 0;
}
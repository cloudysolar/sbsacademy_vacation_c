#include <stdio.h>
#include <string.h>

int lesson6_8() {
	char arr[30] = "Hello World!";
	char find = 'W';

	printf("%s\n", strchr(arr, find));
	return 0;
}
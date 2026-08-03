#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_SIZE 8
#define MAX_SIZE 15

typedef enum { False = 0, True = 1 } Bool;

Bool is_length_valid(int n) {
	return (n >= 8 && n <= 15) ? True : False;
}

Bool is_code_valid(char *p, int n) {
	if (*(p) == '+' && *(p + 1) == '3' && *(p + 2) == '9') {
		return True;
	} else {
		return False;
	}
}

Bool is_phone_valid(char *p, int n) {
	int count = 0;
	for (int i = 3; i < n; i++) {
		count++;
	}

	if (count >= 9 && count <= 10)
		return True;
	return False;
}

int main (int argc, char **argv) {

	int n, count = 0; scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char *str = (char*)malloc(sizeof(char) * MAX_SIZE);
		scanf("%s", str);
		if (is_length_valid(strlen(str)) && is_code_valid(str, strlen(str)) && is_phone_valid(str, strlen(str))) {
			count++;
		}
		free(str);

	}

	printf("%d\n", count);

	return 0;
}

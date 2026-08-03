#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int main(int argc, char **argv) {
	unsigned int n;
	int counter = 1;
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%d", &n);
	sprintf(str, "%d", n);
	for (int i = 0; i < strlen(str) - 1; i++) {
		int num = str[i] - '0';
		int next = str[i + 1] - '0';
		if (num + 1 == next) {
			printf("Iter %d: %d %d\n", i+1, num, next);
		} else {
			next = (10 * (str[i+1] - '0'));
			printf("Iter %d: %d %d\n", i+1, num, next);
		}
	}
	free(str);
	return 0;
}

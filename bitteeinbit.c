#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main() {
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", str);
	int size = strlen(str);
	int random = rand() % size;
	printf("%c\n", str[random]);
	return 0;
}

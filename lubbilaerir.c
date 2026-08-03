#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int main(int argc, char **argv) {
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", str);
	printf("%c\n", str[0]);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(int argc, char **argv) {
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", str);
	printf("Kvedja,\n%s", str);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Created on: 2025-12-21 by Merih Bora Pocan */

#define SIZE 100

int main(int argc, char **argv) {
	char *s, *t, *str;
	s = malloc(sizeof(char) * SIZE);
	t = malloc(sizeof(char) * SIZE);
	str = malloc(sizeof(char) * (SIZE * 2));

	scanf("%s\n%s", s, t);

	strcat(str, s);
	strcat(str, t);

	printf("%s\n", str);


	return 0;
}

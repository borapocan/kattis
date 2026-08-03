#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Created on: 2024-09-30 by Merih Bora Pocan */

int main(int argc, char **argv) {
	int n; scanf("%d", &n);
	int size = n + 1;
	char **arr = malloc(sizeof(char*) * size);
	for (int i = 0; i < n; i++) {
		*(arr + i) = malloc(sizeof(char) * 10);
		scanf("%s", *(arr + i));
	}
	*(arr + size) = "";

	for (int i = 1; i < size; i++) {
		if (strcmp(*(arr + (i)), "Present!") != 0) {
			printf("%s\n", *(arr + (i - 1)));
		}
	}


	return 0;
}

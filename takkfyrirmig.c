#include <stdio.h>
#include <stdlib.h>

/* Created on: 2025-12-21 by Merih Bora Pocan */

#define SIZE 100

int main(int argc, char **argv) {
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char *name = malloc(sizeof(char) * SIZE);
		scanf("%s", name);
		printf("Takk %s\n", name);
	}

	return 0;
}

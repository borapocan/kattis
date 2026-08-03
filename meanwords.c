#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Created on: 2025-01-13 by Merih Bora Pocan */

#define MAX_SIZE 45

int main(int argc, char **argv) {
	int n, max_line = 0; scanf("%d", &n);
	char **words = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		*(words + i) = (char*)malloc(sizeof(char) * MAX_SIZE);
		char *word = (char*)malloc(sizeof(char) * MAX_SIZE);
		scanf("%s", *(words + i));
		if (max_line < strlen(*(words + i))) {
			max_line = strlen(*(words + i));
		}
	}

	for (int j = 0; j < max_line; j++) {
		int counter = 0;
		int tot = 0;
		for (int i = 0; i < n; i++) {
			if (j < strlen(words[i])) {
				counter += words[i][j];
				tot++;
			}
		}
		counter /= tot;


		printf("%c", counter);
	}

	return 0;
}

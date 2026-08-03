#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 11

int starts_with(const char *str, const char *prefix) {
	return strncmp(str, prefix, strlen(prefix)) == 0;
}

int main() {

	int A, B;

	char **names, **nicknames;

	scanf("%d", &A);

	names = (char**)malloc(sizeof(char*) * A);

	for (int i = 0; i < A; i++) {
		*(names + i) = (char*)malloc(sizeof(char) * SIZE);
		scanf("%s", *(names + i));
	}

	scanf("%d", &B);

	nicknames = (char**)malloc(sizeof(char*) * B);

	for (int i = 0; i < B; i++) {
		*(nicknames + i) = (char*)malloc(sizeof(char) * SIZE);
		scanf("%s", *(nicknames + i));
	}


	for (int i = 0; i < B; i++) {

		int count = 0;

		for (int j = 0; j < A; j++) {

			if (starts_with(*(names + j), *(nicknames + i))) {

				count++;

			}

		}

		printf("%d\n", count);
	}



	for (int i = 0; i < A; i++) {
		free(*(names + i));
	}

	for (int i = 0; i < B; i++) {
		free(*(nicknames + i));
	}

	free(names);
	free(nicknames);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, count = 0;

	scanf("%d", &n);

	getchar(); // consume the newline after the number

	char **arr = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++) {
		*(arr + i) = (char*)malloc(sizeof(char) * 100);
		scanf("%s", *(arr + i));
		if ((strcmp(*(arr + i), "he") == 0) ||
		    (strcmp(*(arr + i), "him") == 0) ||
		    (strcmp(*(arr + i), "she") == 0) ||
		    (strcmp(*(arr + i), "her") == 0)) {
			count++;
		}

	}

	for (int i = 0; i < n; i++) {
		free(*(arr + i));
	}

	free(arr);

	printf("%d\n", count);


	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Created on: 2025-12-20 by Merih Bora Pocan */

int main(int argc, char **argv) {

	int l, a, *arr;

	scanf("%d %d", &l, &a);

	arr = malloc(sizeof(int) * l + 1);

	for (int i = 0; i < l + 1; i++) {
		scanf("%d ", (arr + i));
	}

	for (int i = 0; i < l; i++) {
		if (a < *(arr + (i + 1)) - *(arr + i)) {
			printf("BUG REPORT\n");
			exit(0);
		}

	}

	printf("POSSIBLE\n");

	free(arr);

	return 0;
}

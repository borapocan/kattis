#include <stdio.h>
#include <stdlib.h>

/* Created on: 2025-12-20 by Merih Bora Pocan */

int main(int argc, char **argv) {

	int n, k, *arr;

	scanf("%d %d", &n, &k);

	arr = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d ", (arr + i));
	}

	for (int i = 0; i < n; i++) {

		if (i == 0 && k == *(arr)) {
			printf("fyrst\n");
			break;
		}

		if (i == 1 && k == *(arr + i)) {
			printf("naestfyrst\n");
			break;
		}

		if (k == *(arr + i)) {
			printf("%d fyrst\n", i + 1);
			break;
		}

	}

	free(arr);

	return 0;
}

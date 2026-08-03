#include <stdio.h>
#include <stdlib.h>

/* Created on: 2024-10-09 by Merih Bora Pocan */

void swap(int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void sort(int *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(arr + i) > *(arr + j)) {
				swap(arr + i, arr + j);
			}
		}
	}
}

int main(int argc, char **argv) {

	int n, *arr; scanf("%d", &n);

	arr = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}

	sort(arr, n);

	for (int i = 0; i < n - 2; i++) {
		if (*(arr + i) )
	}







	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Created on: 2024-05-22 by Merih Bora Pocan */

#define TIMES 4

int is_unique(int *array, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, char **argv) {

	int n, count = 0;
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * TIMES);

	for (int i = 0; i < n; i++) {
		int rolled_number;
		scanf("%d", &rolled_number);
		*(arr + i) = rolled_number;
	}

	for (int i = n; i < TIMES; i++) {

		for (int j = 1, k = j + 1; j <= 5; j++, k++) {
			if (*(arr + j) != *(arr + k)) {
				*(arr + i) = j;
				*(arr + (i+1)) = k;
			}
			if (is_unique(arr, TIMES)) {
				count++;
			}
		}



	}

	printf("%d\n", count);




	return 0;
}

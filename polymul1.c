#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

/* Created on: 2024-09-30 by Merih Bora Pocan */

typedef struct {
	int degree;
	int32_t coefficient;
} Polynomial;

int main(int argc, char **argv) {
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int n;
		scanf("%d", &n);
		Polynomial *p = malloc(sizeof(Polynomial) * (n + 1));
		for (int j = 0; j < n + 1; j++) {
			(p + j)->degree = j;
			//scanf("%d", &(p + j)->coefficient);
			scanf("%" SCNd32, &(p + j)->coefficient);
		}

		int m;
		scanf("%d", &m);
		Polynomial *q = malloc(sizeof(Polynomial) * (m + 1));
		for (int j = 0; j < m + 1; j++) {
			(q + j)->degree = j;
			//scanf("%d", &(q + j)->coefficient);
			scanf("%" SCNd32, &(q + j)->coefficient);
		}

		int r_size = n + m;
		Polynomial *result = malloc(sizeof(Polynomial) * (r_size + 1));

		for (int j = 0; j <= r_size; j++) {
			result[j].coefficient = 0;
		}

		for (int j = 0; j < n + 1; j++) {
			for (int k = 0; k < m + 1; k++) {
				result[j + k].coefficient += p[j].coefficient * q[k].coefficient;
			}
		}

		printf("%d\n", r_size);
		for (int j = 0; j <= r_size; j++) {
			//printf("%d ", result[j].coefficient);
			printf("%" PRId32 " ", result[j].coefficient);
		}
		printf("\n");

		free(p);
		free(q);
		free(result);
	}

	return 0;
}

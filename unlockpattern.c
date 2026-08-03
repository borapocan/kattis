#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created on: 2024-09-30 by Merih Bora Pocan */

#define ROW 3
#define COL 3

int main(int argc, char **argv) {
	int **matrix = malloc(sizeof(int*) * ROW);
	for (int i = 0; i < ROW; i++) {
		*(matrix + i) = malloc(sizeof(int) * COL);
		for (int j = 0; j < COL; j++) {
			int num;
			scanf("%d ", (*(matrix + i) + j));
		}
	}

	double total = 0.0;
	int x1, x2, y1, y2;
	for (int target = 1; target < 9; target ++) {
		for (int i = 0; i < ROW; i++) {
			for (int j = 0; j < COL; j++) {
				if (matrix[i][j] == target) {
					x1 = i, y1 = j;
				}
				if (matrix[i][j] == target + 1) {
					x2 = i, y2 = j;
				}
			}
		}
		total += sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
	}
	printf("%.10f\n", total);
	return 0;
}

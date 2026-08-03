#include <stdio.h>
#include <stdlib.h>

/* Created on: 2024-10-12 by Merih Bora Pocan */

#define ROW 3
#define COL 3

int main(int argc, char **argv) {


	char **matrix = malloc(sizeof(char*) * ROW);

	for (int i = 0; i < ROW; i++) {
		*(matrix + i) = malloc(sizeof(char) * COL);
		for (int j = 0; j < COL; j++) {
			scanf("%c", (*(matrix + i) + j));
		}
	}

	for (int i = 0; i < ROW - 2; i++) {
		for (int j = 0; j < COL - 2; j++) {
			if (*(*(matrix + i) + j) == 'O' &&
			    *(*(matrix + i) + (j + 1)) == 'O' &&
			    *(*(matrix + i) + (j + 2)) == 'O') {
				printf("Jebb\n");

			}
		}
		printf("\n");
	}


	return 0;
}

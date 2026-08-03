#include <stdio.h>
#include <stdlib.h>

/* Created on: 2024-09-27 by Merih Bora Pocan */

#define ROW 3
#define COL 3

int main(int argc, char **argv) {
	char **mat = malloc(sizeof(char*) * ROW);
	for (int i = 0; i < ROW; i++) {
		*(mat + i) = malloc(sizeof(char) * COL);

		for (int j = 0; j < COL; j++) {
			scanf("%c ", (*(mat + i) + j));
		}
	}

	int win = 0;

	for (int i = 0; i < ROW; i++) {
		if (mat[i][0] == 'X' && mat[i][1] == 'X' && mat[i][2] == 'X') {
			printf("Johan har vunnit\n");
			win = 1;
		} else if (mat[i][0] == 'O' && mat[i][1] == 'O' && mat[i][2] == 'O') {
			printf("Abdullah har vunnit\n");
			win = 1;
		}
    	}

    	for (int j = 0; j < COL; j++) {
		if (mat[0][j] == 'X' && mat[1][j] == 'X' && mat[2][j] == 'X') {
			printf("Johan har vunnit\n");
			win = 1;
    	    	} else if (mat[0][j] == 'O' && mat[1][j] == 'O' && mat[2][j] == 'O') {
			printf("Abdullah har vunnit\n");
			win = 1;
    	    	}
    	}

    	if (mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X') {
		printf("Johan har vunnit\n");
		win = 1;
    	}
	if (mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O') {
		printf("Abdullah har vunnit\n");
		win = 1;
    	}
    	if (mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X') {
		printf("Johan har vunnit\n");
		win = 1;
    	}
	if (mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O') {
		printf("Abdullah har vunnit\n");
		win = 1;
    	}

	if (!win) {
		printf("ingen har vunnit\n");
	}


	for (int i = 0; i < ROW; i++) {
		free(mat[i]);
	}

	free(mat);

	return 0;
}

//|| mat[i][j] == 'Y'
//|| mat[i + 1][j] == 'Y'
//|| mat[i + 2][j] == 'Y'
//|| mat[i][j] == 'Y'
//|| mat[i + 1][j] == 'Y'
//|| mat[i + 2][j] == 'Y'

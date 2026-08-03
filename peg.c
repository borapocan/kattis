/*
Author: Merih Bora Poçan
Sat 31 Jan 2026 10:40:29 PM +03
*/

#include <stdio.h>
#include <stdlib.h>

#define LINE 7

int main(int argc, char **argv)
{
	int count = 0;
	char **board = (char**)malloc(sizeof(char*) * LINE);
	for (int i = 0; i < LINE; i++) {
		*(board + i) = (char*)malloc(sizeof(char) * LINE);
		for (int j = 0; j < LINE; j++) {
			scanf("%c", (*(board + i) + j));
		}
		getchar();
	}

	for (int i = 0; i < LINE - 2; i++) {
		for (int j = 0; j < LINE; j++) {

			// o o .
			if (board[i][j] == 'o' &&
			    board[i+1][j] == 'o' &&
			    board[i+2][j] == '.')
				count++;

			// . o o
			if (board[i][j] == '.' &&
			    board[i+1][j] == 'o' &&
			    board[i+2][j] == 'o')
				count++;
		}
	}

	for (int i = 0; i < LINE; i++) {
		for (int j = 0; j < LINE - 2; j++) {

			// o o .
			if (board[i][j] == 'o' &&
			    board[i][j+1] == 'o' &&
			    board[i][j+2] == '.')
				count++;

			// . o o
			if (board[i][j] == '.' &&
			    board[i][j+1] == 'o' &&
			    board[i][j+2] == 'o')
				count++;
		}
	}

	printf("%d\n", count);
	return 0;
}

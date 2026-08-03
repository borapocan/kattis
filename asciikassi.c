// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * asciikassi.c - MrRobotOS Linux
 *
 * Copyright (C) 2026 Merih Bora Poçan - MrRobotOS Linux
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 *
 * Contact: borapocan@github.com
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main(int argc, char **argv)
{
	int n; scanf("%d", &n);
	char **matrix = (char**)malloc(sizeof(char*) * (n + 2));
	for (int i = 0; i <= (n+1); i++) {
		*(matrix + i) = (char*)malloc(sizeof(char) * (n + 2));
		for (int j = 0; j <= (n+1); j++) {
			if (i == 0 && j == 0) {
				*(*(matrix + i) + j) = '+';
			} else if (i == 0 && j == (n+1)) {
				*(*(matrix + i) + j) = '+';
			} else if (i == (n+1) && j == 0) {
				*(*(matrix + i) + j) = '+';
			} else if (i == (n+1) && j == (n+1)) {
				*(*(matrix + i) + j) = '+';
			} else if (i == 0 && (j != 0 && j != (n + 1))) {
				*(*(matrix + i) + j) = '-';
			} else if ((i != 0 && i != (n+1)) && j == 0) {
				*(*(matrix + i) + j) = '|';
			} else if ((i != 0 && i != (n+1)) && j == (n + 1)) {
				*(*(matrix + i) + j) = '|';
			} else if (i == (n+1) && (j != 0 && j != (n + 1))) {
				*(*(matrix + i) + j) = '-';
			} else {
				*(*(matrix + i) + j) = ' ';
			}
		}
	}

	for (int i = 0; i <= (n+1); i++) {
		for (int j = 0; j <= (n+1); j++) {
			printf("%c", *(*(matrix + i) + j));
		}
		printf("\n");
	}

	for (int i = 0; i <= (n+1); i++) {
		free(*(matrix + i));
	}
	free(matrix);
	return 0;
}

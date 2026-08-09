// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * weakvertices.c - MrRobotOS Linux
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

int main(int argc, char **argv)
{
	while (1) {
		int n; scanf("%d", &n);
		if (n == -1) {
			break;
		}
		int **matrix = (int**)malloc(sizeof(int*) * n);
		int weak_vertices[n], count = 0;
		for (int i = 0; i < n; i++) {
			weak_vertices[i] = 1;
			*(matrix + i) = (int*)malloc(sizeof(int) * n);
			for (int j = 0; j < n; j++) {
				scanf("%d", (*(matrix + i) + j));
			}
			getchar();
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					if (matrix[i][j] && matrix[j][k] && matrix[k][i]) {
						weak_vertices[i] = 0;
						weak_vertices[j] = 0;
						weak_vertices[k] = 0;
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			if (weak_vertices[i])
				printf("%d ", i);
		}
		printf("\n");
		for (int i = 0; i < n; i++) {
			free(*(matrix + i));
		}
		free(matrix);
	}

	return 0;
}

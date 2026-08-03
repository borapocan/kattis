// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * skener.c - MrRobotOS Linux
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

#define READ_INT1(x)       scanf("%d", &(x))
#define READ_INT2(x, y)    scanf("%d %d", &(x), &(y))
#define READ_INT3(x, y, z) scanf("%d %d %d", &(x), &(y), &(z))
#define READ_INT4(x, y, z, w) scanf("%d %d %d %d", &(x), &(y), &(z), &(w))

#define GET_READ_INT(_1, _2, _3, _4, NAME, ...) NAME

#define READ_INT(...) \
    GET_READ_INT(__VA_ARGS__, READ_INT4, READ_INT3, READ_INT2, READ_INT1)(__VA_ARGS__)

int main(int argc, char **argv)
{
	int row, col, row_inc, col_inc;
	READ_INT(row, col, row_inc, col_inc); getchar();
	char **matrix = (char**)malloc(sizeof(char*) * row);
	for (int i = 0; i < row; i++) {
		*(matrix + i) = (char*)malloc(sizeof(char) * col);
		for (int j = 0; j < col; j++) {
			scanf("%c", (*(matrix + i) + j));
		}
		getchar();
	}

	for (int i = 0; i < row; i++) {
		for (int new_row = 0; new_row < row_inc; new_row++) {
			for (int j = 0; j < col; j++) {
				for (int new_col = 0; new_col < col_inc; new_col++) {
					printf("%c", *(*(matrix + i) + j));
				}
			}
			printf("\n");
		}
	}

	for (int i = 0; i < row; i++) {
		free(*(matrix + i));
	}
	free(matrix);
	return 0;
}

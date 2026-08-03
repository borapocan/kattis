// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * welcomesign.c - MrRobotOS Linux
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
#include <string.h>

#define ul unsigned long

int main(int argc, char **argv)
{
	int r, c;
	scanf("%d %d", &r, &c);
	char **led = (char**)malloc(r * sizeof(char*));
	for (int i = 0; i < r; i++) {
		*(led + i) = (char*)malloc((c + 1) * sizeof(char));
		scanf("%s", *(led + i));
	}

	for (int i = 0; i < r; i++) {
		int str_size = strlen(led[i]);
		int dot_size = c - str_size;

		int left_dots, right_dots;
		if (i % 2 == 0) {
			left_dots = dot_size / 2;          // floor
		} else {
			left_dots = (dot_size + 1) / 2;    // ceil
		}
		right_dots = dot_size - left_dots;

		for (int j = 0; j < left_dots; j++)  printf(".");
		printf("%s", led[i]);
		for (int j = 0; j < right_dots; j++) printf(".");
		printf("\n");
	}	return 0;
}

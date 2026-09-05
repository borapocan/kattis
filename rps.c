// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * rps.c - MrRobotOS Linux
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

#define SIZE 75

int main(int argc, char **argv)
{
	char *p1, *p2;
	p1 = (char*)malloc(sizeof(char) * (SIZE + 1));
	p2 = (char*)malloc(sizeof(char) * (SIZE + 1));
	while (scanf("%s %s", p1, p2) && (strcmp(p1, "E") != 0) && (strcmp(p2, "E") != 0)) {
		int p1_count = 0, p2_count = 0, size = strlen(p1);
		for (int i = 0; i < size; i++) {
			if (*(p1 + i) == 'P' && *(p2 + i) == 'R') {
				p1_count++;
			} else if (*(p1 + i) == 'R' && *(p2 + i) == 'S') {
				p1_count++;
			} else if (*(p1 + i) == 'S' && *(p2 + i) == 'P') {
				p1_count++;
			} else if (*(p1 + i) == 'R' && *(p2 + i) == 'P') {
				p2_count++;
			} else if (*(p1 + i) == 'S' && *(p2 + i) == 'R') {
				p2_count++;
			} else if (*(p1 + i) == 'P' && *(p2 + i) == 'S') {
				p2_count++;
			} else if (*(p1 + i) == 'P' && *(p2 + i) == 'P') {

			} else if (*(p1 + i) == 'R' && *(p2 + i) == 'R') {

			} else if (*(p1 + i) == 'S' && *(p2 + i) == 'S') {

			}
		}
		printf("P1: %d\nP2: %d\n", p1_count, p2_count);
	}
	free(p1);
	free(p2);
	return 0;
}

// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * translation.c - MrRobotOS Linux
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

#define MAX 15

typedef struct {
	char a[MAX + 1];
	char b[MAX + 1];
} Pair;

int main(int argc, char **argv)
{
	int n, m; scanf("%d", &n);
	char **words = (char**)malloc(sizeof(char*) * n);
	Pair *pairs;
	for (int i = 0; i < n; i++) {
		*(words + i) = (char*)malloc(sizeof(char) * (MAX + 1));
		scanf("%s", *(words + i));
	}
	scanf("%d", &m);
	pairs = (Pair*)malloc(sizeof(Pair) * m);
	for (int i = 0; i < m; i++) {
		scanf("%s %s", (pairs + i)->a, (pairs + i)->b);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (strcmp(*(words + i), (pairs + j)->a) == 0) {
				printf("%s ", (pairs + j)->b);
				break;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		free(*(words + i));
	}
	free(words);
	free(pairs);
	return 0;
}

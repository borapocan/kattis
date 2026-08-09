// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * hairofthedog.c - MrRobotOS Linux
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

#define MAX 100

int main(int argc, char **argv)
{
	int n, count = 0; scanf("%d", &n);
	char **arr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		*(arr + i) = (char*)malloc(sizeof(char) * MAX);
		scanf("%s", *(arr + i));
	}
	for (int i = 0, j = i + 1; i < n - 1; i++, j++) {
		if (strcmp(*(arr + i), "sober") == 0 &&
		    strcmp(*(arr + j), "drunk") == 0) {
			count++;
		    }
	}
	printf("%d\n", count);
	for (int i = 0; i < n; i++) {
		free(*(arr + i));
	}
	free(arr);
	return 0;
}

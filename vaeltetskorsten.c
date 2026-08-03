// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * vaeltetskorsten.c - MrRobotOS Linux
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

typedef struct Chimney {
	int number;
	char word[4];
} Chimney;

int main(int argc, char **argv)
{
	int n; scanf("%d", &n);
	Chimney *arr = (Chimney*)malloc(sizeof(Chimney) * n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &(arr + i)->number, (arr + i)->word);
		if (strcmp((arr + i)->word, "nej") == 0) {
			if ((arr + i)->number > ans)
				ans = (arr + i)->number;
		}
	}
	printf("%d\n", ans);
	return 0;
}

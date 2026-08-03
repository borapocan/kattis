// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * superyatzy.c - MrRobotOS Linux
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
	int n, m, max, *arr, *freq; scanf("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int) * n);
	freq = (int*)malloc(sizeof(int) * 7);
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}

	for (int i = 0; i < 7; i++) {
		*(freq + i) = 0;
	}

	for (int i = 0; i < n; i++) {
		*(freq + (*(arr + i))) += 1;
	}

	max = *(freq);

	for (int i = 1; i <= 6 ; i++) {
		if (*(freq + i) > max) {
			max = *(freq + i);
		}
	}

	if (max + m >= n) {
		printf("Ja\n");
	} else {
		printf("Nej\n");
	}

	return 0;
}

// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * findingforks.c - MrRobotOS Linux
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

int comp(const void* a,const void* b) {
  	return *(int*)a - *(int*)b;
}

int main() {
	int n; scanf("%d", &n);
	int *arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}
  	qsort(arr, n, sizeof(int), comp);
      	printf("%d ", arr[0] + arr[1]);
	free(arr);
  	return 0;
}

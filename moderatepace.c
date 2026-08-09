// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * moderatepace.c - MrRobotOS Linux
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

int compare(const void *a, const void *b) {
	return (*(int *)a - *(int *)b);
}

int find_median(int arr[], int n) {
	qsort(arr, n, sizeof(int), compare);

	if (n % 2 == 0) {
		return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
	} else {
		return arr[n / 2];
	}
}

void read_arr(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}
}

int main(int argc, char **argv)
{
	int n, *k, *a, *b; scanf("%d", &n);
	k = (int*)malloc(sizeof(int) * n);
	a = (int*)malloc(sizeof(int) * n);
	b = (int*)malloc(sizeof(int) * n);
	read_arr(k, n);
	read_arr(a, n);
	read_arr(b, n);
	for (int i = 0; i < n; i++) {
		int size = 3;
		int arr[size];
		for (int j = 0; j < size; j++) {
			arr[0] = *(k + j);
			arr[1] = *(a + j);
			arr[2] = *(b + j);
		}
		qsort(arr, size, sizeof(int), compare);
		int median = ((size + 1) / 2) - 1;

		printf("%d ", arr[median]);
	}
	return 0;
}

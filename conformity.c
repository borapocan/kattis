// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * conformity.c - MrRobotOS Linux
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

void swap(int *a, int *b) {
	if (a == b) return;
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void sort(int *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(arr + i) > *(arr + j)) {
				swap((arr + i), (arr + j));
			}
		}
	}
}

void rev_sort(int *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(arr + i) < *(arr + j)) {
				swap((arr + i), (arr + j));
			}
		}
	}
}

int main(int argc, char **argv)
{
	int n; scanf("%d", &n);
	char **students = (char**)malloc(sizeof(char*) * (n + 1));
	for (int i = 0; i < n; i++) {
		int *arr = (int*)malloc(sizeof(int) * 5);
		*(students + i) = (char*)malloc(sizeof(char) * (16));
		**(students + i) = '\0';
		for (int j = 0; j < 5; j++) {
			scanf("%d", (arr + j));
		}
		sort(arr, 5);
		char temp[4];
		for (int j = 0; j < 5; j++) {
			snprintf(temp, sizeof(temp), "%d", *(arr + j));
			strcat(*(students + i), (const char *)temp);
		}
		free(arr);

	}

	int freq[n];

	for (int i = 0; i < n; i++) {
		freq[i] = 0;
	}

	int checked[n];
	for (int i = 0; i < n; i++) checked[i] = 0;

	for (int i = 0; i < n; i++) {
		if (checked[i]) continue;
		freq[i]++;
		for (int j = i + 1; j < n; j++) {
			if (strcmp(*(students + i), *(students + j)) == 0) {
				freq[i]++;
				checked[j] = 1;
			}
		}
	}

	rev_sort(freq, n);

	int highest_popularity = freq[0];
	int result = 0;
	for (int i = 0; i < n; i++) {
		if (freq[i] == highest_popularity)
			result += highest_popularity;
	}
	printf("%d\n", result);

	return 0;
}

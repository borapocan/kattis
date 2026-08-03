// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * kanelbullar.c - MrRobotOS Linux
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

int get_min(int *arr, int n) {
	int min = *(arr);
	for (int i = 1; i < n; i++) {
		if (min > *(arr + i))
			min = *(arr + i);
	}
	return min;
}

int main(int argc, char **argv)
{
	int fr, yr, br, mr, sr, f, y, b, m, s;
	scanf("%d %d %d %d %d %d %d %d %d %d", &fr, &yr, &br, &mr, &sr, &f, &y, &b, &m, &s);
	int arr[5] = {f/fr, y/yr, b/br, m/mr, s/sr};
	printf("%d\n", get_min(arr, sizeof(arr)/sizeof(arr[0])));
	return 0;
}

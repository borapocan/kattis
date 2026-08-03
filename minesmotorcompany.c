// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * minesmotorcompany.c - MrRobotOS Linux
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
	int n; scanf("%d", &n); int x_arr[n], y_arr[n]; getchar();
	for (int i = 0; i < n; i++) {
		char x, y;
		scanf("%c%c", &x, &y); getchar();
		x_arr[i] = (int)x;
		y_arr[i] = (int)y;

	}
	int total_x = 0, total_y = 0;
	for (int i = 0; i < n - 1; i++) {
		total_x += abs(x_arr[i] - x_arr[i + 1]);
		total_y += abs(y_arr[i] - y_arr[i + 1]);
	}
	printf("%d\n", total_y + total_x);
	return 0;
}

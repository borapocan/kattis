// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * busassignment.c - MrRobotOS Linux
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

int main(int argc, char **argv)
{
	int n, max = 0, total = 0; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b; scanf("%d %d", &a, &b);
		total += (b - a);
		max < total ? max = total : max;
	}
	printf("%d\n", max);
	return 0;
}

// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * thendaysofchristmas.c - MrRobotOS Linux
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
	int n; scanf("%d", &n);
	int daily_sum = 0, total_sum = 0;
	for (int i = 1; i <= n ; i++) {
		daily_sum = 0;
		for (int j = 1; j <= i; j++) {
			daily_sum += j;
			total_sum += j;
		}
	}
	printf("%d\n", daily_sum);
	printf("%d\n", total_sum);
	return 0;
}

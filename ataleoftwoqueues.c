// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * ataleoftwoqueues.c - MrRobotOS Linux
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
	int n, m, left = 0, right = 0; scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		int left_i; scanf("%d", &left_i);
		left += left_i;
	}
	for (int i = 0; i < m; i++) {
		int right_i; scanf("%d", &right_i);
		right += right_i;
	}
	printf("%s\n", left < right ? "left" : left > right ? "right" : "either");
	return 0;
}

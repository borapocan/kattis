// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * generalizedfizzbuzz.c - MrRobotOS Linux
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
	int n, a, b, f_count = 0, b_count = 0, fb_count = 0;
	scanf("%d %d %d", &n, &a, &b);
	for (int i = 1; i <= n; i++) {
		if (i % a == 0 && i % b == 0) {
			fb_count++;
		} else {
			if (i % a == 0) {
				f_count++;
			} else if (i % b == 0) {
				b_count++;
			}
		}
	}
	printf("%d %d %d\n", f_count, b_count, fb_count);
	return 0;
}

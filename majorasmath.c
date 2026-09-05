// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * majorasmath.c - MrRobotOS Linux
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
#include <string.h>

int main(int argc, char **argv)
{
	int h, n; scanf("%d %d", &h, &n);
	int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
	int total = 0;
	for (int i = 0; i < n; i++) {
		char s[10]; scanf("%s", s);
		if (strcmp(s, "standard") == 0) {
			total += a;
		}
		else if (strcmp(s, "fire") == 0) {
			total += b;
		}
		else if (strcmp(s, "ice") == 0) {
			total += c;
		}
		else {
			total += d;
		}
	}
	(h - total <= 0) ? printf("dead\n") : printf("%d\n", h - total);
	return 0;
}

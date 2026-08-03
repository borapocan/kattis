// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * nostragglers.c - MrRobotOS Linux
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
	int n, visitors; scanf("%d", &n); getchar();
	int total_in = 0, total_out = 0;
	for (int i = 0; i < n; i++) {
		int visitors;
		char person[3], direction[3];
		scanf("%s %s %d", person, direction, &visitors); getchar();
		if (strcmp(direction, "IN") == 0) {
			total_in += visitors;
		} else {
			total_out += visitors;
		}
	}
	(total_in == total_out) ? printf("NO STRAGGLERS\n") : printf("%d\n", total_in - total_out);
	return 0;
}

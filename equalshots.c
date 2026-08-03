// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * equalshots.c - MrRobotOS Linux
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
	int a, b;
	float vol_a = 0, vol_b = 0;
	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++) {
		int v, c; scanf("%d %d", &v, &c);
		vol_a += (v*(c/100.0));
	}

	for (int i = 0; i < b; i++) {
		int v, c; scanf("%d %d", &v, &c);
		vol_b += (v*(c/100.0));
	}

	(vol_a == vol_b) ? printf("same\n") : printf("different\n");
	return 0;
}

// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * kingarthur.c - MrRobotOS Linux
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

#define PI 3.14159

int main(int argc, char **argv)
{
	double d, w; int n;
	scanf("%lf %lf %d", &d, &w, &n);
	double table_c = 2.0 * PI * (d / 2.0);
	double knights_w = w * n;
	if (table_c >= knights_w) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}

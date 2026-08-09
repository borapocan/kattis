// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * fairgrading.c - MrRobotOS Linux
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
	double x, y, z, avg = 0; scanf("%lf %lf %lf", &x, &y, &z);
	avg = ((x * (25.0/100)) + (y * (25.0/100)) + (z * (50.0/100)));
	switch ((int)avg) {
		case 0 ... 59:
			printf("F\n");
			break;
		case 60 ... 69:
			printf("D\n");
			break;
		case 70 ... 79:
			printf("C\n");
			break;
		case 80 ... 89:
			printf("B\n");
			break;
		case 90 ... 100:
			printf("A\n");
			break;
	}
	return 0;
}

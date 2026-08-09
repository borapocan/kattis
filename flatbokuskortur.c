// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * flatbokuskortur.c - MrRobotOS Linux
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

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	float x_area = M_PI * (pow(x / 2.0, 2));
	float y_area = M_PI * (pow(y / 2.0, 2));
	if (x_area <= y_area * z) {
		printf("Jebb\n");
	} else {
		printf("Neibb\n");
	}
	return 0;
}

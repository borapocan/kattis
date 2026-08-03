// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * budget2.c - MrRobotOS Linux
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

int main(int argc, char **argv)
{
	int b, p1, p2, p3; scanf("%d %d %d %d", &b, &p1, &p2, &p3);
	if (b >= (p1 + p2 + p3))
		printf("Budget is sufficient.\n");
	else
		printf("Budget is insufficient.\n");
	return 0;
}

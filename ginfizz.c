// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * ginfizz.c - MrRobotOS Linux
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
	int n, gin = 45, lemon_juice = 30, syrup = 10, lemon_slice = 1;
	scanf("%d", &n);
	if (n == 1)
		printf("%d ml gin\n%d ml fresh lemon juice\n%d ml simple syrup\n%d slice of lemon\n",
			(n * gin), (n * lemon_juice), (n * syrup), (n * lemon_slice));
	else if (n > 1)
		printf("%d ml gin\n%d ml fresh lemon juice\n%d ml simple syrup\n%d slices of lemon\n",
			(n * gin), (n * lemon_juice), (n * syrup), (n * lemon_slice));

	return 0;
}

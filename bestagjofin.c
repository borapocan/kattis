// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * bestagjofin.c - MrRobotOS Linux
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
	int n; scanf("%d", &n);
	int tmp_num = 0; char tmp_name[21];
	for (int i = 0; i < n; i++) {
		char name[21];
		int num;
		scanf("%s %d", name, &num);
		if (num >= tmp_num) {
			tmp_num = num;
			strcpy(tmp_name, name);
		}
	}
	printf("%s", tmp_name);
	return 0;
}

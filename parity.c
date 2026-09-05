// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * parity.c - MrRobotOS Linux
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
#include <string.h>

#define SIZE 32

int main(int argc, char **argv)
{
	char *str = (char*)malloc(sizeof(char) * (SIZE + 1));
	while (scanf("%s", str) && strcmp(str, "#") != 0) {
		int size = strlen(str), one_count = 0;
		for (int i = 0; i < size; i++) {
			if (*(str + i) == '1')
				one_count++;
		}
		if (str[size - 1] == 'e') {
			if (one_count % 2 == 0)
				str[size - 1] = '0';
			else
				str[size - 1] = '1';
		} else {
			if (one_count % 2 == 0)
				str[size - 1] = '1';
			else
				str[size - 1] = '0';
		}
		printf("%s\n", str);
	}
	return 0;
}

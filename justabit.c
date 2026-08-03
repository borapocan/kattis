// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * justabit.c - MrRobotOS Linux
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

#define MAX 20

int main(int argc, char **argv)
{
	int zero_count = 0, one_count = 0;
	char *s = (char*)malloc(sizeof(char) * (MAX + 1));
	scanf("%s", s);
	while (*s != '\0') {
		if (*s == '0')
			zero_count++;
		else
			one_count++;
		s++;
	}
	printf("%d %d\n", zero_count, one_count);
	    free(s - (zero_count + one_count));
	return 0;
}

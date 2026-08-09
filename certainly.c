// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * certainly.c - MrRobotOS Linux
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

#define MAX 10000

int count_substring(char *str, char *sub) {
	int count = 0;
	int sub_len = strlen(sub);
	char *ptr = str;
	while ((ptr = strstr(ptr, sub)) != NULL) {
		count++;
		ptr += sub_len;
	}

	return count;
}

int main(int argc, char **argv)
{
	char *s = (char*)malloc(sizeof(char) * (MAX +1));
	scanf("%[^\n]", s);
	int count = count_substring(s, "certainly");
	printf("%d", count);
	return 0;
}

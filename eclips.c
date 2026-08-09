// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * eclips.c - MrRobotOS Linux
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

#define WORDS 100
#define SIZE 20

int search_char(char *s, char c, int n) {
	for (int i = 0; i < n; i++) {
		if (*(s + i) == c) {
			return 1;
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	char *s = (char*)malloc(sizeof(char) * (WORDS * SIZE + 1));
	char **words = (char**)malloc(sizeof(char*) * (WORDS + 1));
	int count = 0;
	scanf("%[^\n]", s);
	char *token = strtok(s, " ");
	while (token) {
		*(words + count) = malloc(sizeof(char) * strlen(token));
		*(words + count) = token;
		count++;
		token = strtok(NULL, " ");
	}
	int check_e = 0;
	for (int i = 0; i < count; i++) {
		if (search_char(*(words + i), 'e', strlen(*(words + i)))) {
			check_e++;
			printf("%s ", *(words + i));
		}
	}
	if (!check_e) {
		printf("oh noes\n");
	}
	return 0;
}

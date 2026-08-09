// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * andmal.c - MrRobotOS Linux
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
#include <time.h>

#define MAX 10

void random_string(char *str, int n) {
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int size = sizeof(charset) - 1;
	for (int i = 0; i < n; i++) {
		int key = rand() % size;
		*(str + i) = charset[key];
	}
	str[n] = '\0';
}

int main(int argc, char **argv)
{
	char *s1 = (char*)malloc(sizeof(char) * (MAX + 1));
	scanf("%s", s1);
	char *s2 = (char*)malloc(sizeof(char) * (MAX + 1));
	srand(time(NULL));
	int random_size = (rand() % MAX) + 1;
	while (1) {
		random_string(s2, random_size);
		if (strcmp(s1, s2) != 0) {
			break;
		}

	}
	printf("%s\n", s2);
	return 0;
}

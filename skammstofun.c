// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * skammstofun.c - MrRobotOS Linux
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

#define MAX 1000

int main(int argc, char **argv)
{
	int n, count = 0; scanf("%d", &n); getchar();
	char *s = (char*)malloc(sizeof(char) * (MAX + 1));
	if (fgets(s, (MAX + 1), stdin) != NULL) {
		s[strcspn(s, "\n")] = '\0';
		char *token = strtok(s, " ");
		while (token && count < n) {
			if (*(token) >= 65 && *(token) <= 90)
				printf("%c", *(token));
			count++;
			token = strtok(NULL, " ");
		}
	}
	free(s);
	return 0;
}

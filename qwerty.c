// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * qwerty.c - MrRobotOS Linux
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

int get_index(char *s, char e, int n) {
	for (int i = 0; i < n; i++) {
		if (*(s + i) == e) {
			return i;
		}
	}
	return -1;
}

int main(int argc, char **argv)
{
	int n; scanf("%d", &n); getchar();
	char *s = (char*)malloc(sizeof(char) * (n + 1));
	scanf("%[^\n]", s);
	char *abcdef = " abcdefghijklmnopqrstuvwxyz";
	char *qwerty = " qwertyuiopasdfghjklzxcvbnm";
	for (int i = 0; i < n; i++) {
		int index = get_index(abcdef, s[i], strlen(abcdef));
		if (i == n - 1)
			printf("%c\n", qwerty[index]);
		else
			printf("%c", qwerty[index]);
	}
	free(s);
	return 0;
}

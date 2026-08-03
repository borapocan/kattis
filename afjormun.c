// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * afjormun.c - MrRobotOS Linux
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

#define MAX 300

int main(int argc, char **argv)
{
	int n; scanf("%d", &n); getchar();
	for (int i = 0; i < n; i++) {
		char *s = (char*)malloc(sizeof(char) * (MAX + 1));
		if (fgets(s, (MAX + 1), stdin) != NULL) {
			if (*(s) >= 97 && *(s) <= 122)
				*(s) -= 32;
			int length = strlen(s);
			for (int j = 1; j < length; j++) {
				if (*(s + j) >= 65 && *(s + j) <= 90)
					*(s + j) += 32;
			}
		}
		printf("%s", s);
		free(s);
	}

	return 0;
}

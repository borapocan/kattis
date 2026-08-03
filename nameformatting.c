// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * nameformatting.c - MrRobotOS Linux
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

#define MAX 1E+6

int main(int argc, char **argv)
{
	char *s = (char*)malloc(sizeof(char) * (MAX + 1));
	if (fgets(s, (MAX + 1),	stdin) != NULL) {
		s[strcspn(s, "\n")] = '\0';
		char *name = strchr(s, ' ');
		if (name) {
			int length = name - (s+1);
			name++;
			printf("%c. ", *(name) - 32);
			printf("%c", *s - 32);
			printf("%.*s\n", length - 1, &s[1]);
		}
	}
	return 0;
}

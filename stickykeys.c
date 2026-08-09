// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * stickykeys.c - MrRobotOS Linux
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

#define MAX 1000

char *remove_adj(char *s, char *new, int index, int count) {

	if (s[index] == '\0') {
		new[count] = '\0';
		return new;
	}
	if (count == 0 || s[index] != new[count - 1]) {
		new[count] = s[index];
		count++;
	}
	return remove_adj(s, new, index + 1, count);
}

int main(int argc, char **argv)
{
	int count = 0;
	char *s = (char*)malloc(sizeof(char) * (MAX + 1));
	char *new = (char*)malloc(sizeof(char) * (MAX + 1));
	scanf("%[^\n]", s);
	new = remove_adj(s, new, 0, count);
	printf("%s\n", new);
	free(s);
	free(new);
	return 0;
}

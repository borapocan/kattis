// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * intuitiveelements.c - MrRobotOS Linux
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

#define MAX 50

int build_mask(char *s) {
    int mask = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        mask |= (1 << (s[i] - 'a'));
    }
    return mask;
}

int main(int argc, char **argv)
{
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int mask, found = 1;
		char *a = malloc(sizeof(char) * (MAX + 1));
		char *b = malloc(sizeof(char) * MAX);
		scanf("%s", a);
		scanf("%s", b);
		mask = build_mask(a);
		for (int j = 0; b[j] != '\0'; j++) {
			int pos = b[j] - 'a';
			if (!(mask & (1 << pos))) {
				found = 0;
				break;
			}
		}
		printf(found ? "YES\n" : "NO\n");
	}
	return 0;
}

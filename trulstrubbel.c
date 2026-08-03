// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * trulstrubbel.c - MrRobotOS Linux
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

#define MAX 30

int main(int argc, char **argv)
{
	int t_count = 0, h_count = 0;
	char *s = (char*)malloc(sizeof(char) * (MAX + 1));
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		if (*(s + i) == 'T')
			t_count++;
		else
			h_count++;
		if ((t_count >= 11 && t_count - h_count >= 2) ||
		    (h_count >= 11 && h_count - t_count >= 2)) {
			t_count = 0;
			h_count = 0;
		}
	}
	printf("%d-%d", t_count, h_count);
	return 0;
}

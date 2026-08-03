// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * akureyri.c - MrRobotOS Linux
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

typedef struct Location {
	int count;
	char *name;
} Location;

int main(int argc, char **argv)
{
	int n; scanf("%d", &n); getchar();
	Location *locations = (Location*)malloc(sizeof(Location) * n);
	for (int i = 0; i < n; i++) {
		(locations + i)->name = (char*)malloc(sizeof(char) * 100);
		(locations + i)->count = 0;
		char contestant[100], location[100];
		scanf("%s %s", contestant, location); getchar();
		if (strcmp(locations[i].name, location) != 0) {
			strcpy((locations + i)->name, location);
			locations[i].count++;
		} else {
			locations[i].count++;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%s %d\n", (locations + i)->name, (locations + i)->count);
	}
	return 0;
}

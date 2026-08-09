// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * rollingthedice.c - MrRobotOS Linux
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

#define MAX 100

int main(int argc, char **argv)
{
	char *s =(char*)malloc(sizeof(char) * (MAX + 1));
	scanf("%s", s);
	int size = strlen(s);
	int d_index = 0, plus_index = 0;
	for (int i = 0; i < size; i++) {
		if (*(s + i) == 'd')
			d_index = i;
		if (*(s + i) == '+')
			plus_index = i;
	}
	float val1 = 0.0f, val2 = 0.0f, val3 = 0.0f;
	sscanf(s, "%fd%f+%f", &val1, &val2, &val3);

	float min = val1 + val3;
	float max = (val1 * val2) + val3;
	printf("%f\n", (min + max) / 2);

	return 0;
}

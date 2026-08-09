// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * ptice.c - MrRobotOS Linux
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

int main(int argc, char **argv)
{
	int n, adrian = 0, bruno = 0, goran = 0, max = 0; scanf("%d", &n);
	char *p1 = "ABC";
	char *p2 = "BABC";
	char *p3 = "CCAABB";
	char *s = (char*)malloc(sizeof(char) * (n + 1));
	scanf("%s", s);
	for (int i = 0; i < n; i++) {
		if (*(s + i) == *(p1 + (i % 3))) {
			adrian++;
		}
		if (*(s + i) == *(p2 + (i % 4))) {
			bruno++;
		}
		if (*(s + i) == *(p3 + (i % 6))) {
			goran++;
		}
	}
	max = (adrian > bruno) ? ((adrian > goran) ? adrian : goran) : ((bruno > goran) ? bruno : goran);
	printf("%d\n", max);
	if (adrian == max) {
		printf("Adrian\n");
	}
	if (bruno == max) {
		printf("Bruno\n");
	}
	if (goran == max) {
		printf("Goran\n");
	}
	return 0;
}

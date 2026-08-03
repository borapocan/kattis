// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * nafnauki.c - MrRobotOS Linux
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

#define MAX 32

int main(int argc, char **argv)
{
	int count = 0;
	char *filename = (char*)malloc(sizeof(char) * (MAX + 1));
	scanf("%s", filename);
	int size = strlen(filename);
	for (size_t i = size - 1; i > 0; i--) {
		if (*(filename + i) == '.') {
			count = i;
			break;
		}

	}
	printf("%.*s", size - count, &filename[count]);
	//for (size_t i = i; i < strlen(filename); i++) {
	//	if (*(filename + i) == '.')
	//		count++;
	//}
	//int dot_count = -1;
	//char *token = strtok(filename, ".");
	//while (token) {
	//	dot_count++;
	//	if (dot_count == count)
	//		printf(".%s\n", token);
	//	token = strtok(NULL, ".");

	//}
	return 0;
}

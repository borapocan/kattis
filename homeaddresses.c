// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * homeaddresses.c - MrRobotOS Linux
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
#define WORD_SIZE 15
#define DIGIT_SIZE 4

typedef struct {
	char *address;
	int num;
} Pair;

int main(int argc, char **argv)
{
	int num, index = 0;
	char address[WORD_SIZE + 1];
	Pair *pairs = malloc(sizeof(Pair) * MAX);
	while (scanf("%s %d", address, &num) == 2 && strcmp(address, "q") != 0) {
		(pairs + index)->address = (char*)malloc(sizeof(char) * (WORD_SIZE + 1));
		strcpy((pairs + index)->address, address);
		(pairs + index)->num = num;
		index++;
	}
	printf("[");
	for (int i = 0; i < index; i++) {
		if (i == index - 1)
			printf("'%s %d'", (pairs + i)->address, (pairs + i)->num);
		else
			printf("'%s %d', ", (pairs + i)->address, (pairs + i)->num);
	}
	printf("]\n[");
	for (int i = 0; i < index; i++) {
		if (i == index - 1)
			printf("('%s', '%d')", (pairs + i)->address, (pairs + i)->num);
		else
			printf("('%s', '%d'), ", (pairs + i)->address, (pairs + i)->num);
	}
	printf("]\n");
	free(pairs);
	return 0;
}

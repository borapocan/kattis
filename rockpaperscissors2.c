// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * rockpaperscissors2.c - MrRobotOS Linux
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

#define SIZE 10

int main(int argc, char **argv)
{
	char *p1, *p2;
	p1 = (char*)malloc(sizeof(char) * (SIZE + 1));
	p2 = (char*)malloc(sizeof(char) * (SIZE + 1));
	scanf("%s %s", p1, p2);
	if (strcmp(p1, "rock") == 0 && strcmp(p2, "rock") == 0) {
		printf("Draw\n");
	} else if (strcmp(p1, "rock") == 0 && strcmp(p2, "paper") == 0) {
		printf("Player 2\n");

	} else if (strcmp(p1, "rock") == 0 && strcmp(p2, "scissors") == 0) {
		printf("Player 1\n");
	} else if (strcmp(p1, "paper") == 0 && strcmp(p2, "rock") == 0) {
		printf("Player 1\n");
	} else if (strcmp(p1, "paper") == 0 && strcmp(p2, "paper") == 0) {
		printf("Draw\n");

	} else if (strcmp(p1, "paper") == 0 && strcmp(p2, "scissors") == 0) {
		printf("Player 2\n");
	} else if (strcmp(p1, "scissors") == 0 && strcmp(p2, "rock") == 0) {
		printf("Player 2\n");
	} else if (strcmp(p1, "scissors") == 0 && strcmp(p2, "paper") == 0) {
		printf("Player 1\n");
	} else if (strcmp(p1, "scissors") == 0 && strcmp(p2, "scissors") == 0) {
		printf("Draw\n");
	} else {
		printf("Invalid input\n");
	}
	return 0;
}

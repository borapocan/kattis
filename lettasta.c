// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * lettasta.c - MrRobotOS Linux
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

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

typedef struct Awards {
	char s[MAX];
	int value;
} Awards;

char *get_prob(Awards *awards, int n) {
	int max = 0; char *s = (char*)malloc(sizeof(char) * (MAX));
	for (int i = 0; i < n; i++) {
		if (max < awards[i].value)
			max = awards[i].value;
	}
	for (int i = 0; i < n; i++) {
		if (max == awards[i].value)
			strcpy(s, awards[i].s);
	}
	return s;
}


int main(int argc, char **argv)
{
	int n, m, count = 0; scanf("%d %d", &n, &m);
	getchar();
	char *s = (char*)malloc(sizeof(char) * (MAX));
	char **problems = (char**)malloc(sizeof(char*) * n);
	if (fgets(s, MAX, stdin) != NULL) {
		s[strcspn(s, "\n")] = '\0';
		char *token = strtok(s, " ");
		while (token && count < n) {
			problems[count] = strdup(token);
			count++;
			token = strtok(NULL, " ");
		}
	}
	Awards *awards = (Awards*)malloc(sizeof(Awards) * n);
	for (int i = 0; i < count; i++) {
		strcpy(awards[i].s, problems[i]);
		awards[i].value = 0;
		free(problems[i]);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int point; scanf("%d", &point);
			awards[j].value += point;
		}
	}

	char *res = (char*)malloc(sizeof(char) * (MAX));
	res = get_prob(awards, n);
	printf("%s\n", res);

	return 0;
}

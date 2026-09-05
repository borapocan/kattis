// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * snakehiss.c - MrRobotOS Linux
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

int main(void)
{
    int n;
    scanf("%d", &n);

    char *str = malloc(4);
    strcpy(str, "His");

    str = realloc(str, n + 5);

    for (int i = 0; i < n; i++) {
        str[3 + i] = 's';
    }

    str[3 + n] = '!';
    str[4 + n] = '\0';

    printf("%s\n", str);

    free(str);
    return 0;
}

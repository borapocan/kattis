// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * everyotherletter.c - MrRobotOS Linux
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

#define MAX 1000000

int main(void)
{
    char *s = malloc(MAX + 1);

    if (fgets(s, MAX + 1, stdin) != NULL) {
        s[strcspn(s, "\n")] = '\0';

        size_t len = strlen(s);

        for (size_t i = 0; i < len; i += 2) {
            printf("%c", s[i]);
        }
    }

    free(s);

    return 0;
}

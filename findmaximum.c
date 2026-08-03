// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * findmaximum.c - MrRobotOS Linux
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

int main(void)
{
    int temp = INT_MIN;
    for (int i = 0; i < 3; i++) {
        int num;scanf("%d", &num);
        if (num > temp)
            temp = num;
    }
    printf("%d\n", temp);
    return 0;
}

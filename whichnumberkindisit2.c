// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * whichnumberkindisit2.c - MrRobotOS Linux
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
#include <math.h>

int is_square(int num) {
    if (num < 0) return 0;
    int r = (int)sqrt((double)num);
    for (int cand = r - 1; cand <= r + 1; cand++) {
        if (cand >= 0 && cand * cand == num) return 1;
    }
    return 0;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        int odd = (num % 2 != 0);
        int sqr = is_square(num);
        if (odd && sqr) printf("OS\n");
        else if (odd) printf("O\n");
        else if (sqr) printf("S\n");
        else printf("EMPTY\n");
    }
    return 0;
}

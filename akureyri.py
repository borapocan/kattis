#!/usr/bin/env python3


# SPDX-License-Identifier: GPL-3.0-or-later
#
# akureyri.py - MrRobotOS Linux
#
# Copyright (C) 2026 Merih Bora Poçan - MrRobotOS Linux
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <https://www.gnu.org/licenses/>.
#
# Contact: borapocan@github.com


n = int(input());
locations = []
for i in range(0, n):
    name = str(input())
    location = str(input())
    key_found = False
    for entry in locations:
        if location in entry:
            entry[location] += 1
            key_found = True
            break
    if not key_found:
        locations.append({location: 1})

locations.sort(key=lambda item: list(item.keys())[0])
for location in locations:
    for key, value in location.items():
        print(key + " " + str(value))

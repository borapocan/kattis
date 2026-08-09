// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * karte.c - MrRobotOS Linux
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

#define MAX 1000
#define CHUNK 3

typedef struct {
	char suit;
	int cards[13];
} Cards;

int main(int argc, char **argv)
{
	char *s = (char*)malloc(sizeof(char) * (MAX + 1));
	scanf("%s", s);
	int s_size = strlen(s);
	int c_size = s_size / CHUNK;
	Cards *cards = (Cards*)malloc(sizeof(Cards) * c_size);
	char suit_letters[4] = {'P', 'K', 'H', 'T'};
	for (int i = 0; i < 4; i++) {
		cards[i].suit = suit_letters[i];
		for (int j = 0; j < 13; j++) {
			cards[i].cards[j] = 0;
		}
	}
	for (int i = 0; i < s_size; i += CHUNK) {
		char *card = malloc(sizeof(char) * (CHUNK + 1));
		strncpy(card, s + i, CHUNK);
		card[CHUNK] = '\0';
		char current_suit = card[0];
		int card_number = atoi(card + 1);
		for (int j = 0; j < 4; j++) {
			if (cards[j].suit == current_suit) {
				if (card_number >= 1 && card_number <= 13) {
					(cards + j)->cards[card_number - 1]++;
				}
				break;
			}
		}
		free(card);
	}

	int p_count = 0, k_count = 0, h_count = 0, t_count = 0;
	for (int i = 0; i < c_size; i++) {
		for (int j = 0; j < 13; j++) {
			if ((cards + i)->cards[j] > 1) {
				printf("GRESKA\n");
				return 0;
			} else {
				if ((cards + i)->suit == 'P') {
					if ((cards + i)->cards[j] == 0)
						p_count++;
				} else if ((cards + i)->suit == 'K') {
					if ((cards + i)->cards[j] == 0)
						k_count++;
				} else if ((cards + i)->suit == 'H') {
					if ((cards + i)->cards[j] == 0)
						h_count++;
				} else if ((cards + i)->suit == 'T') {
					if ((cards + i)->cards[j] == 0)
						t_count++;
				}


			}
		}
	}
	printf("%d %d %d %d\n", p_count, k_count, h_count, t_count);
	free(s);
	free(cards);
	return 0;
}

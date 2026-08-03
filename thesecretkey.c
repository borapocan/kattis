/*
Author: Merih Bora Poçan
Sun 11 Jan 2026 07:11:30 PM +03
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **generate_keys(int n) {
    unsigned int limit = 1u << n;

    char **keys = malloc(limit * sizeof(char *));
    if (!keys) return NULL;

    for (unsigned int i = 0; i < limit; i++) {
        keys[i] = malloc((n + 1) * sizeof(char));
        if (!keys[i]) return NULL;

        for (int j = 0; j < n; j++) {
            keys[i][j] = ((i >> (n - 1 - j)) & 1) ? '1' : '0';
        }

        keys[i][n] = '\0';
    }

    return keys;
}


int main(int argc, char **argv)
{
	int n; scanf("%d", &n);
	char **possible_keys = generate_keys(n);
	char **used_keys = (char**)malloc(sizeof(char*) * (1u << n));
	for (int i = 0; i < n; i++) {
		*(used_keys + i) = (char*)malloc(sizeof(char) * (n + 1));
		scanf("%s", *(used_keys + i));
	}
	for (int i = 0; i < (1u << n); i++) {
		int found = 0;
		for (int j = 0; j < n; j++) {
			if (strcmp(*(possible_keys + i), *(used_keys + j)) == 0) {
				found = 1;
				break;
			}
		}
		if (!found) {
			printf("%s\n", *(possible_keys + i));
			break;
		}
	}



	return 0;
}

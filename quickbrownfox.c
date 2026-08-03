#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 102

/* Created on: 2026-01-02 by Merih Bora Pocan */

int main(int argc, char **argv) {

	int n; scanf("%d", &n);

	getchar();

	for (int i = 0; i < n; i++) {

		char *str = (char*)malloc(sizeof(char) * SIZE);

		int alphabet[26] = { 0 };

		fgets(str, (SIZE + 1), stdin);

		for (int j = 0; j < strlen(str); j++) {

			char c = tolower((unsigned char)str[j]);

			if ((c - 'a' >= 0) && (c - 'a' < 26)) {
				alphabet[c - 'a'] = 1;
			}


		}

		int pangram = 1;

		for (int j = 0; j < 26; j++) {
			if (!alphabet[j]) {
				if (pangram) {
					printf("%s ", "missing");
				}
				pangram = 0;
				printf("%c", (char)(j + 'a'));

			}
		}

		(pangram) ? printf("pangram\n") : printf("\n");

	}


	return 0;
}

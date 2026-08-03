#include <stdio.h>
#include <stdlib.h>

/* Created on: 2026-01-07 by Merih Bora Pocan */

int main(int argc, char **argv) {

	int n, k;

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {

		int withdrawal; scanf("%d", &withdrawal);

		if (k - withdrawal >= 0) {

			k -= withdrawal;

			printf("1");

		} else {

			printf("0");

		}
	}

	return 0;

}

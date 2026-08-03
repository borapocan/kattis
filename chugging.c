#include <stdio.h>
#include <stdlib.h>

/* Created on: 2024-09-30 by Merih Bora Pocan */

int main(int argc, char **argv) {
	int n; scanf("%d", &n);
	int tA, dA, tB, dB, alice = 0, bob = 0;
	scanf("%d %d", &tA, &dA);
	scanf("%d %d", &tB, &dB);
	for (int i = 0; i < n; i++) {
		alice += (tA + (i * dA));
		bob += (tB + (i * dB));
	}
	if (alice < bob) {
		printf("Alice\n");
	} else if (alice > bob) {
		printf("Bob\n");
	} else {
		printf("=\n");
	}
	return 0;
}

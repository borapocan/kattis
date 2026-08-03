#include <stdio.h>
#include <stdlib.h>

/* Created on: 2024-09-29 by Merih Bora Pocan */

int main(int argc, char **argv) {
	int s; scanf("%d", &s);

	printf("%d %d %d", s / 3600, (s % 3600) / 60, s % 60);

	return 0;
}

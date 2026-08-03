#include <stdio.h>
#include <stdlib.h>

/* Created on: 2025-12-20 by Merih Bora Pocan */

int main(int argc, char **argv) {

	int a;
	scanf("%d", &a);
	if (a != 0 && a != 7) {
		printf("%d\n", a + 1);
	} else {
		if (a == 0) {
			printf("%d\n", 0);
		} else {
			printf("%d\n", 7);
		}
	}

	return 0;
}

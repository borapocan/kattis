#include <stdio.h>
#include <stdlib.h>

/* Created on: 2025-12-20 by Merih Bora Pocan */

int calc_vol(int h, int w, int l) {
	return (h * l * w);
}

int main(int argc, char **argv) {

	int h, w, l, c, vol;
	scanf("%d %d %d %d\n", &h, &w, &l, &c);
	vol = calc_vol(h, l, w);
	if (vol == c) {
		printf("COZY\n");
	} else if (vol > c) {
		printf("SO MUCH SPACE\n");
	} else {
		printf("TOO TIGHT\n");
	}

	return 0;
}

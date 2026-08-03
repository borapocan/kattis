/*
Author: Merih Bora Poçan
Mon 12 Jan 2026 02:25:49 AM +03
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int r, g, b;

	scanf("%d %d %d", &r, &g, &b);

	if (r > g && r > b) {
		printf("raudur\n");
	} else if (g > r && g > b) {
		printf("graenn\n");
	} else if (b > g && b > r) {
		printf("blar\n");
	} else if (r == g && r > b) {
		printf("gulur\n");
	} else if (r == b && r > g) {
		printf("fjolubleikur\n");
	} else if (g == b && g > r) {
		printf("blagraenn\n");
	} else if (r == 0 && g == 0 && b == 0) {
		printf("svartur\n");
	} else if (r == 255 && g == 255 && b == 255) {
		printf("hvitur\n");
	} else if ((r != 0) && (r != 255) && (r == g) && (r == b)) {
		printf("grar\n");
	} else {
		printf("othekkt\n");
	}

	return 0;
}

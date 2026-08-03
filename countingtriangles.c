#include <stdio.h>
#include <stdlib.h>

#define true 1
/* Created on: 2025-12-21 by Merih Bora Pocan */

typedef struct Coordinate {
	double x, y;
} Coordinate;

double orient(Coordinate coord1, Coordinate coord2, Coordinate coord3) {
	double res = ((coord2.x - coord1.x) * (coord3.y - coord1.y)) - ((coord2.y - coord1.y) * (coord3.x - coord1.x));
	return res;

}

int main(int argc, char **argv) {

	Coordinate coord1 = {1.350, 3.825};
	Coordinate coord2 = {1.890, 3.330};
	Coordinate coord3 = {1.350, 4.545};

	double res = orient(coord1, coord2, coord3);

	if (res > 0) {
		printf("coord3, coord1 → coord2’nin solunda\n");
	} else if (res < 0) {
		printf("saginda\n");
	} else {
		printf("aynı doğru üzerinde\n");
	}






	return 0;
}

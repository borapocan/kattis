/*
Author: Merih Bora Poçan
Fri 16 Jan 2026 01:40:55 AM +03
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.14159265358979323846

double degree_to_radian(double degree) {
	return (degree * (PI / 180));
}

int euclidian_distance(double x, double y) {
	double total = pow(x, 2) + pow(y, 2);
	total = sqrt(total);
	return round(total);
}

int main(int argc, char **argv)
{
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		double x = 0.0, y = 0.0;
		int angle = 0;
		for (int i = 0; i < n; i++) {
			int dist;
			char *rotation = (char*)malloc(sizeof(char) * 2);
			scanf("%s %d", rotation, &dist);
			if (strcmp(rotation, "fd") == 0) {
				x += dist * cos(degree_to_radian(angle));
				y += dist * sin(degree_to_radian(angle));
			} else if (strcmp(rotation, "bk") == 0) {
				x -= dist * cos(degree_to_radian(angle));
				y -= dist * sin(degree_to_radian(angle));
			} else if (strcmp(rotation, "rt") == 0) {
				angle -= dist;
			} else {
				angle += dist;
			}

		}

		printf("%d\n", euclidian_distance(x, y));

	}


	return 0;
}

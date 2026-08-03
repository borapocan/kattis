/*
Author: Merih Bora Poçan
Fri 16 Jan 2026 05:18:55 AM +03
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void shoelace(int *x, int *y, int n) {
	double total = 0;
	for (int i = 0; i < n - 1; i++) {
		total += (double)x[i] * y[i + 1]
			- (double)y[i] * x[i + 1];
	}
	total += (double)x[n - 1] * y[0]
		- (double)y[n - 1] * x[0];
	double area = fabs(total) / 2.0;
	total > 0 ? printf("CCW %.1f\n", area) : printf("CW %.1f\n", area);
}

int main(int argc, char **argv)
{
	int n, xi[MAX], yi[MAX];
	while (scanf("%d", &n)) {
		if (!n)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &xi[i], &yi[i]);
		}
		shoelace(xi, yi, n);
	}

	//shoelace(xi, yi, 3);


	return 0;
}

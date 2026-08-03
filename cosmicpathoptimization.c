/*
Author: Merih Bora Poçan
Sat 17 Jan 2026 07:35:31 PM +03
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double mean(double *arr, int n) {
	double mean = 0;
	for (int i = 0; i < n; i++) {
		mean += *(arr + i);
	}

	return (floor(mean / n));
}

int main(int argc, char **argv)
{
	int n; double *arr; scanf("%d", &n);

	arr = (double*)malloc(sizeof(double) * n);

	for (int i = 0; i < n; i++) {
		scanf("%lf", (arr + i));
	}

	printf("%d", (int)mean(arr, n));

	return 0;
}

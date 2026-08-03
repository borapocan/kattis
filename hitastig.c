#include <stdio.h>
#include <stdlib.h>

/* Created on: 2024-09-27 by Merih Bora Pocan */



int main(int argc, char **argv) {
	int n;
	scanf("%d", &n);
	long long int num, max, min;
	for (int i = 0; i < n; i++) {

		scanf("%lld", &num);
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}

	printf("%lld %lld", max, min);
	return 0;
}

/*
Author: Merih Bora Poçan
Thu 15 Jan 2026 10:18:59 PM +03
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n; scanf("%d", &n);
	int times = 0;

	while (times * times < n) {
		times++;
	}

	printf("%d\n", times);
	return 0;
}

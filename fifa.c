#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k, year = 2022;
	scanf("%d %d", &n, &k);
	printf("%d\n", year + (n / k));
	return 0;
}

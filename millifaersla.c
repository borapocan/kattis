#include <stdio.h>

int main(int argc, char **argv) {
	int a , b, c;
	scanf("%d %d %d", &a, &b, &c);
	(a > b && a > c) ? printf("Monnei\n") : ((b > a && b > c) ? printf("Fjee\n") : printf("Dolladollabilljoll\n"));
	return 0;
}

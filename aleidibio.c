#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	c -= (a + b);
	printf("%d\n", c);
	return 0;
}

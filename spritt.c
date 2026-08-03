#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	while (n--) {
		int a;
		scanf("%d", &a);
		x -= a;
	}
	if (x >= 0) {
		printf("Jebb\n");
	} else {
		printf("Neibb\n");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
	return a < b ? a : b;
}

int main(int argc, char **argv) {
	int b, l, ans;
	scanf("%d %d\n", &b, &l);
	ans = min(b, l) * 2;
	printf("%d\n", ans);
	return 0;
}

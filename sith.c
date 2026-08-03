#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

int main() {
	int a, b, c;
	char *str = (char*)malloc(sizeof(char) * MAX + 1);
	scanf("%100[^\n] %d %d %d", str, &a, &b, &c);
	if (c == abs(a - b) && c == a - b) {
		printf("VEIT EKKI\n");
	} else if (c == a - b) {
		printf("JEDI\n");
	} else if (c == abs(a - b)) {
		printf("SITH\n");
	}
	return 0;
}

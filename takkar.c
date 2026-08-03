#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
	int a, b; scanf("%d %d", &a, &b);
	a > b ? printf("MAGA!\n") :
	a < b ? printf("FAKE NEWS!\n") :
		printf("WORLD WAR 3!\n");
	return 0;
}

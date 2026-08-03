#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/* Created on: 2024-10-24 by Merih Bora Pocan */


int main(int argc, char **argv) {
	int n; scanf("%d", &n);
	while (n--) {
		int k; scanf("%d", &k);
		char **crayons;
		for (int i = 0; i < n; i++) {
			*(crayons + i) = (char*)malloc(sizeof(char) * MAX);
			scanf("%s", *(crayons + i));
		}


	}




	return 0;
}

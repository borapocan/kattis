#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int n, m;
	scanf("%d %d", &n, &m);
	char *str = (char*)malloc(sizeof(char) * (n * m));
	char **matrix = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		*(matrix + i) = (char*)malloc(sizeof(char) * m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %c", (*(matrix + i) + j));
		}
	}
	int index = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (*(*(matrix + i) + j) != '.') {
				str[index++] = *(*(matrix + i) + j);
			}
		}
	}

	printf("%s\n", str);

}

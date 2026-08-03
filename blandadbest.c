#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int main() {
	int n;
	scanf("%d", &n);
	int count_k = 0, count_n = 0;
	while (n--) {
		char *str = (char*)malloc(sizeof(char) * MAX);
		scanf("%s", str);
		if (strcmp(str, "kjuklingur") == 0) {
			count_k++;
		} else {
			count_n++;
		}
	}
	if (count_n && count_k) {
		printf("blandad best\n");
	} else if (count_n == 1 && count_k == 0) {
		printf("nautakjot\n");
	} else {
		printf("kjuklingur\n");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int str_len(char *str) {
	int count = 0;
	while (*str++ != '\0') {
		count++;
	}
	return count;
}

int main() {
	int count = 0;
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
			count++;
		}
	}
	printf("%d\n", count);
}

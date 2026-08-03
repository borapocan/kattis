#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100



int main() {
	int b_count = 0, k_count = 0;
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'b') {
			b_count++;
		} else if (str[i] == 'k') {
			k_count++;
		}
	}

	if (b_count > k_count) {
		printf("boba\n");
	} else if (b_count < k_count) {
		printf("kiki\n");
	} else if (b_count == 0 && k_count == 0) {
		printf("none\n");
	} else {
		printf("boki\n");
	}
	return 0;
}

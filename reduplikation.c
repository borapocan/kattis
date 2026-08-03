#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int size;
	char *str = (char*)malloc(10 * sizeof(char));
	char *concated_str;
	scanf("%s\n", str);
	scanf("%d\n", &size);
	for (int i = 0; i < size; i++) {
		strcat(concated_str, str);
	}
	printf("%s\n", concated_str);
	return 0;
}

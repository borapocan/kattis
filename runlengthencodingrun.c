#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
	char operation, *str = (char*)malloc(sizeof(char) * 100);
	scanf("%c %s", &operation, str);
	int length = 0;
	while (str[length] != '\0' && length < MAX) {
		length++;
	}
	if (operation == 'E') {
		int counter = 1;
		for (int i = 0; i < length; i++) {
			if (str[i] == str[i+1]) {
				counter++;
			} else {
				printf("%c%d", str[i], counter);
				counter = 1;

			}

		}
	} else {
		for (int i = 0, j = i + 1; i < length; i+=2, j+=2) {
			int digit_int = str[j] - '0';
			for (int k = 0; k < digit_int; k++) {
				printf("%c", str[i]);
			}
		}
	}
}

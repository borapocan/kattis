#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int str_len(char *str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

int check_dna(char *str, int size) {
	for (int i = 0; i < str_len(str) - 2; i++) {
		if (str[i] == 'C' && str[i + 1] == 'O' && str[i + 2] == 'V') {
			return 1;
		}
	}
	return 0;
}

int main(int argc, char **argv) {
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", str);
	check_dna(str, str_len(str)) ? printf("Veikur!\n") : printf("Ekki veikur!\n");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char vowels[] = {'a', 'e', 'i', 'o', 'u'};
char yvowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};

int count_vowels(char *str, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < sizeof(vowels) / sizeof(vowels[0]); j++) {
			if (str[i] == vowels[j]) {
				count++;
				break;
			}
		}
	}
	return count;
}

int count_yvowels(char *str, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < sizeof(yvowels) / sizeof(yvowels[0]); j++) {
			if (str[i] == yvowels[j]) {
				count++;
				break;
			}
		}
	}
	return count;
}

int main() {
	char *str = (char*)malloc(sizeof(char) * MAX);
	scanf("%s", str);
	printf("%d %d\n", count_vowels(str, strlen(str)), count_yvowels(str, strlen(str)));
}

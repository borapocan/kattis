#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Item {
	int found;
	char *str;
} Item;

void init_items(Item **items, char **arr) {
	for (int i = 0; i < 3; i++) {
		items[i]->str = malloc((strlen(arr[i]) + 1) * sizeof(char));
		if (items[i]->str == NULL) {
			printf("Memory allocation failed.\n");
			for (int j = 0; j < i; j++) {
				free(items[j]->str);
				free(items[j]);
			}
			free(items);
		}
		strcpy(items[i]->str, arr[i]);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	Item **items = (Item**)malloc(sizeof(Item*) * 3);
	if (items == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		items[i] = malloc(sizeof(Item));
		if (items[i] == NULL) {
			printf("Memory allocation failed.\n");
			for (int j = 0; j < i; j++) {
				free(items[j]->str);
				free(items[j]);
			}
			free(items);
			return 1;
		}
	}

	char *arr[] = {"keys", "phone", "wallet"};

	init_items(items, arr);

	while (n--) {
		char *item = (char*)malloc(sizeof(char) * MAX);
		scanf("%s", item);
		for (int i = 0; i < 3; i++) {
			if (strcmp(items[i]->str, item) == 0) {
				items[i]->found = 1;
			}
		}
	}
	int count = 0;
	for (int i = 0; i < 3; i++) {
		if (items[i]->found == 0) {
			printf("%s\n", items[i]->str);
		} else {
			count++;
		}
	}
	if (count == 3) {
		printf("ready\n");
	}

	return 0;
}

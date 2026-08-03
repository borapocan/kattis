#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n, *arr, tot = 0; scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				swap(&arr[i], &arr[j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (i < (n / 2)) {
			tot += arr[i];
		} else {
			tot += (arr[i] / 2);
		}
	}
	printf("%d\n", tot);
	return 0;
}

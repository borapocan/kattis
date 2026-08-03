#include <stdio.h>
#include <stdlib.h>

int* read_arr(int n) {
	int *arr = (int*)malloc(sizeof(int)*n);
	if (arr == NULL) {
		printf("Memory allocation failed!\n");
		return arr;
	}
	for (int i = 0; i < n; i++) {
		if (scanf("%d", (arr + i)) != 1) {
			printf("Error reading input!\n");
			free(arr);
			return arr;
		}

	}
	return arr;
}

int hasAtLeastTwoEven(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
        if (count >= 2) {
            return 1; // Return true if at least two even numbers are found
        }
    }

    return 0; // Return false if less than two even numbers are found
}

int main(int argc, char **argv) {
	int n, m, *arr;
	scanf("%d %d", &n, &m);
	arr = read_arr(n);
	int total = 0;
	for (int i = 0; i <= n - m; i++) {
		int k = 0;
		int sub_arr[m];
		// Print current subarray
        	for (int j = i; j < i + m; j++) {
			sub_arr[j - 1] = arr[j];
        	}
		if (hasAtLeastTwoEven(sub_arr, m)) {
			total++;
		}




	}
	printf("%d\n", total);
	return 0;
}

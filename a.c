#include <stdio.h>
#include <stdlib.h>

int* read_array(int n) {
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

int count_subarrays(int arr[], int n, int m) {
    int count = 0;

    for (int i = 0; i <= n - m; i++) {
        int even_count = 0;
        for (int j = i; j < i + m; j++) {
            if (arr[j] % 2 == 0) {
                even_count++;
            }
        }
        if (even_count >= 2) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int *arr = read_array(n);
    int result = count_subarrays(arr, n, m);
    printf("%d\n", result);
    free(arr);
    return 0;
}

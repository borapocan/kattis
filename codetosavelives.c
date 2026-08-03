#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 9

struct Number {
	int *arr;
	int size;
} Number;

struct Number* read_digits() {
	struct Number *num = malloc(sizeof(Number));
	int *a = malloc(sizeof(int) * MAX);
	int count = 0;
	do {
		scanf("%d", &a[count]);
		count++;
	} while (getchar() != '\n' && count < 9);
	num->arr = a;
	num->size = count;
	return num;
}

int calculate_digits(struct Number *a) {
	int total = 0;
	int size = a->size;
	// Print the array elements
	for (int i = 0; i < a->size; i++) {
		total += (double)a->arr[i] * pow(10.0, --size);
	}
	return total;
}

void convert_to_string(int num) {
    char str[MAX]; // Assuming a maximum length of 100 characters for the string
    int length = sprintf(str, "%d", num); // Convert integer to string

    // Print each character with a space between them
    for (int i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }
}

int main() {
	int t; scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		struct Number *a = read_digits();
		struct Number *b = read_digits();
		int total = calculate_digits(a) + calculate_digits(b);

		convert_to_string(total);
		printf("\n");
	}

}

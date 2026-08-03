/*
Author: Merih Bora Poçan
Sun 01 Feb 2026 12:31:00 PM +03
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
	int arr[MAX_SIZE];
	int top;
} Stack;

void init_stack(Stack *stack) {
	stack->top = -1;
}

int is_full(Stack *stack) {
	return (stack->top + 1) >= MAX_SIZE;
}

int is_empty(Stack *stack) {
	return stack->top == -1;
}

void push(Stack *stack, int value) {
	if (is_full(stack)) return;
	stack->arr[++stack->top] = value;
}

int pop(Stack *stack) {
	return stack->arr[stack->top--];
}

int peek(Stack *stack) {
	return stack->arr[stack->top];
}

int main(int argc, char **argv)
{
	Stack stack;
	init_stack(&stack);
	char line[MAX_SIZE];

	while (1) {
		if (!fgets(line, sizeof(line), stdin)) break;

		line[strcspn(line, "\n")] = 0;

		if (strcmp(line, "quit") == 0) break;

		char *endptr;

		long num = strtol(line, &endptr, 10);

		if (*endptr == '\0') {
			push(&stack, (int)num);
		} else {
			if (strcmp(line, "+") == 0) {
				int b = pop(&stack);
				int a = pop(&stack);
				push(&stack, a + b);
			} else if (strcmp(line, "-") == 0) {
				int b = pop(&stack);
				int a = pop(&stack);
				push(&stack, a - b);
			} else if (strcmp(line, "/") == 0) {
				int b = pop(&stack);
				int a = pop(&stack);
				push(&stack, a / b);
			} else if (strcmp(line, "*") == 0) {
				int b = pop(&stack);
				int a = pop(&stack);
				push(&stack, a * b);
			} else if (strcmp(line, "^") == 0) {
				int b = pop(&stack);
				int a = pop(&stack);
				long long res = 1;
				for (long long i = 0; i < b; i++) res *= a;
				push(&stack, res);
			} else if (strcmp(line, "dup") == 0) {
				int b = peek(&stack);
				push(&stack, b);
			} else if (strcmp(line, "print") == 0) {
				printf("%d\n", peek(&stack));
			} else if (strcmp(line, "pop") == 0) {
				pop(&stack);
			} else if (strcmp(line, "swap") == 0) {
				int b = pop(&stack);
				int a = pop(&stack);
				push(&stack, b);
				push(&stack, a);
			}
		}


	}

	return 0;
}

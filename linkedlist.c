#include <stdio.h>
#include <stdlib.h>

/* Created on: 2026-01-02 by Merih Bora Pocan */

typedef struct Node {
	int data;
	struct Node *next;
} Node;

void traverse(Node *node) {
	while (node) {
		printf("%d ", node->data);
		node = node->next;
	}
}

void reversed(Node *node) {
	if (node) {
		reversed(node->next);
		printf("%d ", node->data);
	}
}

void add_to_last(Node *first, Node *addition) {
	while (first) {
		if (first->next == NULL)
			break;
		first = first->next;
	}
	first->next = addition;
}

void add_to_beginning(Node **head, Node *addition) {
	if (*head) {
		addition->next = *head;
		*head = addition;
	}

}

int main(int argc, char **argv) {
	Node *zero = malloc(sizeof(Node));;
	Node *first = malloc(sizeof(Node));;
	Node *second = malloc(sizeof(Node));;
	Node *third = malloc(sizeof(Node));
	Node *fourth = malloc(sizeof(Node));
	Node *fifth = malloc(sizeof(Node));

	first->data = 1;
	second->data = 2;
	third->data = 3;
	fourth->data = 4;
	fifth->data = 5;
	zero->data = 0;

	first->next = second;
	second->next = third;
	third->next = fourth;

	traverse(first);

	printf("\n");
	reversed(first);
	printf("\n");

	add_to_last(first, fifth);

	traverse(first);
	printf("\n");

	add_to_beginning(&first, zero);

	traverse(first);
	printf("\n");


	return 0;
}

// SPDX-License-Identifier: GPL-3.0-or-later

/*
 * revpolishtoinfixeasy.c - MrRobotOS Linux
 *
 * Copyright (C) 2026 Merih Bora Poçan - MrRobotOS Linux
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 *
 * Contact: borapocan@github.com
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TOKENS 5001
#define MAX_STR_LEN 60000

struct Stack {
	int top;
	char* arr[MAX_TOKENS];
};

void push(struct Stack* s, char* str) {
	if (s->top >= MAX_TOKENS - 1) return;
	s->top++;
	s->arr[s->top] = (char*)malloc(strlen(str) + 1);
	if (s->arr[s->top] != NULL) {
		strcpy(s->arr[s->top], str);
	}
}

char* pop(struct Stack* s) {
	if (s->top == -1) return NULL;
	return s->arr[(s->top)--];
}

int isOperator(char* token) {
	if (strlen(token) != 1) return 0;
	char ch = token[0];
	return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

void postfixToInfix(char* postfix, char* infix) {
	struct Stack s;
	s.top = -1;

	static char op1[MAX_STR_LEN];
	static char op2[MAX_STR_LEN];
	static char temp[MAX_STR_LEN];

	char* token = strtok(postfix, " ");
	while (token != NULL) {
		if (isOperator(token)) {
			char* str2 = pop(&s);
			char* str1 = pop(&s);

			if (str1 && str2) {
				strcpy(op2, str2);
				strcpy(op1, str1);
				free(str2);
				free(str1);

				sprintf(temp, "(%s%s%s)", op1, token, op2);
				push(&s, temp);
			}
		}
		else {
			push(&s, token);
		}
		token = strtok(NULL, " ");
	}

	char* final_expr = pop(&s);
	if (final_expr) {
		strcpy(infix, final_expr);
		free(final_expr);
	} else {
		infix[0] = '\0';
	}
}

int main() {
	static char postfix[MAX_TOKENS * 15];
	static char infix[MAX_STR_LEN];

	if (fgets(postfix, sizeof(postfix), stdin) != NULL) {
		postfix[strcspn(postfix, "\n")] = '\0';
		postfixToInfix(postfix, infix);
		printf("%s\n", infix);
	}

	return 0;
}

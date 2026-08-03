/*
Author: Merih Bora Poçan
Fri 16 Jan 2026 02:29:02 AM +03
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_SIZE 32
#define TABLE_SIZE 100003

typedef struct Entry {
    char word[WORD_SIZE];
    unsigned int dollar;
    struct Entry *next;
} Entry;

unsigned int hash(const char *s) {
    unsigned int h = 5381;
    while (*s)
        h = ((h << 5) + h) + *s++;
    return h % TABLE_SIZE;
}

Entry *find(Entry **table, const char *word) {
    unsigned int idx = hash(word);
    Entry *e = table[idx];
    while (e) {
        if (strcmp(e->word, word) == 0)
            return e;
        e = e->next;
    }
    return NULL;
}

void insert(Entry **table, const char *word, unsigned int dollar) {
    unsigned int idx = hash(word);
    Entry *e = malloc(sizeof(Entry));
    strcpy(e->word, word);
    e->dollar = dollar;
    e->next = table[idx];
    table[idx] = e;
}

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);

    Entry *table[TABLE_SIZE] = {0};

    /* Read dictionary */
    for (int i = 0; i < m; i++) {
        char word[WORD_SIZE];
        unsigned int val;
        scanf("%s %u", word, &val);
        insert(table, word, val);
    }

    getchar(); // consume newline

    /* Process descriptions */
    for (int i = 0; i < n; i++) {
        int salary = 0;
        char line[200];

        while (fgets(line, sizeof(line), stdin)) {
            if (strcmp(line, ".\n") == 0 || strcmp(line, ".") == 0)
                break;

            char *token = strtok(line, " \n");
            while (token) {
                Entry *e = find(table, token);
                if (e)
                    salary += e->dollar;
                token = strtok(NULL, " \n");
            }
        }

        printf("%d\n", salary);
    }

    return 0;
}

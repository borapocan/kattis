#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10  // keep it 10

int main() {
    int i = 0;

    char **date = (char**)malloc(sizeof(char*) * 3);
    if (!date) return 1;

    char *token, *str = (char*)malloc(sizeof(char) * SIZE);
    if (!str) return 1;

    // limit input to SIZE-1 to leave space for '\0'
    scanf("%9s", str);

    token = strtok(str, "/");

    while (token != NULL && i < 3) {
        *(date + i) = (char*)malloc(sizeof(char) * SIZE);
        strncpy(*(date + i), token, SIZE-1); // copy safely
        *( *(date + i) + SIZE-1 ) = '\0';    // ensure null-termination
        token = strtok(NULL, "/");
        i++;
    }

    int first = atoi(*(date));
    int second = atoi(*(date + 1));

    if (first <= 12 && second <= 12) {
        printf("either\n");
    } else if (first > 12 && second <= 12) {
        printf("EU\n");
    } else if (first <= 12 && second > 12) {
        printf("US\n");
    }

    free(str);

    while (i > 0) { // free all allocated strings
        i--;
        free(*(date + i));
    }
    free(date);

    return 0;
}

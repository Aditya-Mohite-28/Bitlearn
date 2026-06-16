#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareChars(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

void groupAnagrams(char *list[], int size) {
    char sorted_list[size][50];
    int visited[size];

    for (int i = 0; i < size; i++) {
        strcpy(sorted_list[i], list[i]);
        qsort(sorted_list[i], strlen(sorted_list[i]), sizeof(char), compareChars);
        visited[i] = 0;
    }

    int outer_first = 1;
    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;

        printf("[");
        
        int inner_first = 1;
        for (int j = i; j < size; j++) {
            if (strcmp(sorted_list[i], sorted_list[j]) == 0) {
                printf("%s ", list[j]);
                visited[j] = 1;
                inner_first = 0;
            }
        }
        printf("]");
        outer_first = 0;
    }
    printf("\n");
}

int main() {
    char *list[] = {"cat", "tac", "act", "dog"};
    groupAnagrams(list, 4);
    return 0;
}
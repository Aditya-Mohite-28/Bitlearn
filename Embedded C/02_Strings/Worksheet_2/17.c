#include <stdio.h>
#include <string.h>

void naiveSearch(char *txt, char *target) {
    int M = strlen(target);
    int N = strlen(txt);

    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++) {
            if (txt[i + j] != target[j]) break;
        }
        if (j == M) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char txt[] = "hello world";
    char target[] = "llo";
    naiveSearch(txt, target);
    return 0;
}
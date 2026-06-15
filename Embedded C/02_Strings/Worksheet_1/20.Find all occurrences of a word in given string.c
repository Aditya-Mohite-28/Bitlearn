#include <stdio.h>
#include <string.h>

void findAllOccurrences(char str[], char word[]) {
    int str_len = strlen(str);
    int word_len = strlen(word);
    int found_any = 0;

    printf("Found at positions: ");

    for (int i = 0; i <= str_len - word_len; i++) {
        if (strncmp(&str[i], word, word_len) == 0) {
            if (((str[i - 1] == ' ') || i == 0) && ((str[i + word_len] == ' ') || str[i + word_len] == '\0')) {
                if (found_any) {
                    printf(", ");
                }
                printf("%d", i);
                found_any = 1;
                i += word_len - 1;
            }
        }
    }

    if (!found_any) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char str[] = "the sky is the limit in the sky";

    findAllOccurrences(str, "the");

    return 0;
}
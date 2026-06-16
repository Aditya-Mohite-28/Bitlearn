#include <stdio.h>
#include <string.h>

void findMatchingStrings(char *word, char *list[], int list_size) {
    int word_freq[256] = {0};
    int word_len = strlen(word);
    for (int i = 0; i < word_len; i++) {
        word_freq[word[i]]++;
    }

    for (int i = 0; i < list_size; i++) {
        int list_freq[256] = {0};
        int list_len = strlen(list[i]);
        for (int j = 0; j < list_len; j++) {
            list_freq[list[i][j]]++;
        }

        int match = 1;
        for (int j = 0; j < 256; j++) {
            if (word_freq[j] > list_freq[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("%s ", list[i]);
        }
    }
}

int main() {
    char *word = "act";
    char *list[] = {"cat", "tac", "act", "dog"};
    findMatchingStrings(word, list, 4);
    return 0;
}
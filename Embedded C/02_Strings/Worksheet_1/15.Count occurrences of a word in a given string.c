#include <stdio.h>
#include <string.h>

int countWordOccurrences(char str[], char word[]) {
    int str_len = strlen(str);
    int word_len = strlen(word);
    int count = 0;

    for (int i = 0; i <= str_len - word_len; i++) {
        
        if (strncmp(&str[i], word, word_len) == 0) {
            if (((str[i - 1] == ' ') || i == 0) && ((str[i + word_len] == ' ') || str[i + word_len] == '\0')) {
                count++;
                i += word_len - 1;
            }
        }
    }

    return count;
}

int main() {
    char str[] = "hi hello hi hey hi";

    int occurrences = countWordOccurrences(str, "hi");

    printf("Output: %d\n", occurrences);

    return 0;
}
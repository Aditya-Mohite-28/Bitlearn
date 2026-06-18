#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[1000];
    char *words[100];
    int count = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) return 1;
    sentence[strcspn(sentence, "\n")] = '\0';

    char *token = strtok(sentence, " ");
    while (token != NULL && count < 100) {
        words[count] = (char *)malloc((strlen(token) + 1) * sizeof(char));
        if (words[count] == NULL) return 1;
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    printf("Dynamically stored tokens:\n");
    for (int i = 0; i < count; i++) {
        printf("Word %d: %s\n", i + 1, words[i]);
        free(words[i]);
    }

    return 0;
}
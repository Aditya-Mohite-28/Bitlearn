#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    char ch;
    int words = 0, characters = 0, in_word = 0;
    FILE *file;

    printf("File name: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    fclose(file);

    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
    return 0;
}
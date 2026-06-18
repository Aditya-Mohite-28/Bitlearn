#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void toUpperCase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void countVowels(char *str) {
    int count = 0;
    for (char *p = str; *p; p++) {
        char ch = tolower((unsigned char)*p);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    printf("Vowel count: %d\n", count);
}

int main() {
    void (*funcs[])(char *) = {reverseString, toUpperCase, countVowels};
    char str[100];
    int choice;

    printf("Enter a string: ");
    if (scanf("%99s", str) != 1) return 1;

    printf("Select operation (0:Reverse, 1:Uppercase, 2:Count Vowels): ");
    if (scanf("%d", &choice) != 1) return 1;

    if (choice >= 0 && choice < 3) {
        funcs[choice](str);
        if (choice != 2) {
            printf("Modified string: %s\n", str);
        }
    } else {
        printf("Invalid selection.\n");
    }
    return 0;
}
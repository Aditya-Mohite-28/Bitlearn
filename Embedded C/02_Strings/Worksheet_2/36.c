#include <stdio.h>

void secondHighestFreq(char *str) {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) freq[(unsigned char)str[i]]++;

    int first = 0, second = 0;
    char first_char = '\0', second_char = '\0';

    for (int i = 0; i < 256; i++) {
        if (freq[i] > first) {
            second = first;
            second_char = first_char;
            first = freq[i];
            first_char = (char)i;
        } else if (freq[i] > second && freq[i] < first) {
            second = freq[i];
            second_char = (char)i;
        }
    }

    if (second_char != '\0') printf("'%c'\n", second_char);
    else printf("No second highest frequency character found.\n");
}

int main() {
    char str[] = "bbaba";
    secondHighestFreq(str);
    return 0;
}
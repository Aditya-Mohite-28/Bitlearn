#include <stdio.h>
#include <string.h>

void longestPalSubstr(char *str) {
    int n = strlen(str);
    if (n < 1) return;

    int maxLength = 1, start = 0;
    int low, high;

    for (int i = 1; i < n; i++) {
        // Even length substrings
        low = i - 1;
        high = i;
        while (low >= 0 && high < n && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }

        // Odd length substrings
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < n && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
    }

    for (int i = start; i < start + maxLength; ++i) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[] = "babad";
    longestPalSubstr(str);
    return 0;
}
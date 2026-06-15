#include <stdio.h>
#include <string.h>

void checkPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    int is_palindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
}

int main() {
    char str[] = "madam";
    checkPalindrome(str);

    return 0;
}
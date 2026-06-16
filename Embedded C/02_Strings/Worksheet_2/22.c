#include <stdio.h>
#include <string.h>

int areAnagrams(char *str1, char *str2) {
    int count[256] = {0};
    if (strlen(str1) != strlen(str2)) return 0;

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return 0;
    }
    return 1;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    printf("%s", areAnagrams(str1, str2) ? "True" : "False");
    return 0;
}
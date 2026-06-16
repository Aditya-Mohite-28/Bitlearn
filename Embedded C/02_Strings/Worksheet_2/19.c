#include <stdio.h>
#include <string.h>

int longestUniqueSubstring(char *str) {
    int n = strlen(str);
    int res = 0;
    int lastIdx[256];
    memset(lastIdx, -1, sizeof(lastIdx));

    int i = 0;
    for (int j = 0; j < n; j++) {
        if (lastIdx[str[j]] + 1 > i) {
            i = lastIdx[str[j]] + 1;
        }
        int diff = j - i + 1;
        if (diff > res) res = diff;
        lastIdx[str[j]] = j;
    }
    return res;
}

int main() {
    char str[] = "abcabcbb";
    printf("%d", longestUniqueSubstring(str));
    return 0;
}
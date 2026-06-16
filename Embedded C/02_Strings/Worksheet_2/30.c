#include <stdio.h>
#include <string.h>

void longestCommonSubstring(char *X, char *Y) {
    int m = strlen(X);
    int n = strlen(Y);
    int LCSuff[m + 1][n + 1];
    int result = 0;
    int end_idx = 0;

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) LCSuff[i][j] = 0;
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                if (LCSuff[i][j] > result) {
                    result = LCSuff[i][j];
                    end_idx = i - 1;
                }
            } else LCSuff[i][j] = 0;
        }
    }

    for (int i = end_idx - result + 1; i <= end_idx; i++) {
        printf("%c", X[i]);
    }
}

int main() {
    char X[] = "abcdxyz";
    char Y[] = "xyzabcd";
    longestCommonSubstring(X, Y);
    return 0;
}
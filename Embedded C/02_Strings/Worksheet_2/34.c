#include <stdio.h>
#include <string.h>

char* removeAdjacentUtil(char *str, int *removed) {
    int n = strlen(str);
    int k = 0;

    for (int i = 0; i < n; i++) {
        if ((i < n - 1 && str[i] == str[i + 1]) || (i > 0 && str[i] == str[i - 1])) {
            *removed = 1;
            continue;
        }
        str[k++] = str[i];
    }
    str[k] = '\0';
    return str;
}

void removeAdjacent(char *str) {
    int removed;
    do {
        removed = 0;
        removeAdjacentUtil(str, &removed);
    } while (removed);
}

int main() {
    char str[] = "azxxzy";
    removeAdjacent(str);
    printf("%s\n", str);
    return 0;
}
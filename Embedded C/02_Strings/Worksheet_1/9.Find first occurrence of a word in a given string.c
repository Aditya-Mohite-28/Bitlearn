#include <stdio.h>
#include <string.h>

int getfirstoccur(char str[], char target[]) {
    int len = strlen(str);
    int len2 = strlen(target);
    for (int i = 0; str[i] != '\0'; i++) {
        if (strncmp(&str[i], target, len2) == 0) return i + 1;
    }
    
    return -1;
}

int main() {
    char str[] = "A lighing stuck at tree, tree fells";
    int result = getfirstoccur(str, "tree");

    printf("%d", result);
    
    return 0;
}
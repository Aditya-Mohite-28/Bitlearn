#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[1000];
    printf("Enter a string: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) return 1;
    buffer[strcspn(buffer, "\n")] = '\0';

    size_t len = strlen(buffer);
    char *dynamic_str = (char *)malloc((len + 1) * sizeof(char));
    if (dynamic_str == NULL) return 1;

    strcpy(dynamic_str, buffer);
    printf("Copied string from dynamic memory: %s\n", dynamic_str);

    free(dynamic_str);
    return 0;
}
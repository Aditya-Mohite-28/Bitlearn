#include <stdio.h>
#include <stdlib.h>

char *custom_strdup(const char *src) {
    int len = 0;
    while (src[len] != '\0') {
        len++;
    }

    char *dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL) return NULL;

    for (int i = 0; i <= len; i++) {
        dest[i] = src[i];
    }

    return dest;
}

int main() {
    const char *original = "Hello Dynamic World!";
    char *duplicate = custom_strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
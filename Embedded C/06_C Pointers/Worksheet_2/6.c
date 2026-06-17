#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strreverse(char *str) {
    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    
    end--;
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void my_strcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}



int main() {
    char *str = (char *)malloc(12 * sizeof(char));
    if (str == NULL) {
        return 1; 
    }
    my_strcpy(str, "hello world");

    char *ptr = str; 

    printf("Original string: %s\n", str);

    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            (*ptr)++;
        }
        
        ptr++;
    }

    printf("Modified string: %s\n", str);
    
    my_strcat(str, " Hello World");
    printf("Concatinated string: %s\n", str);
    
    my_strreverse(str);
    printf("Reversed string: %s\n", str);
    
    free(str); 
    return 0;
}
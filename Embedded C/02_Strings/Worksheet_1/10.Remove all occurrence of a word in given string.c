#include <stdio.h>
#include <string.h>

void removeSubstring(char str[], char target[]) {
    int str_len = strlen(str);
    int rem_len = strlen(target);
    
    int write_index = 0;
    int i = 0;

    while (i < str_len) {
        if (strncmp(&str[i], target, rem_len) == 0) {
            i += rem_len;
            if(str[i] == ' ') i++;
            
        } else {
            str[write_index] = str[i];
            write_index++;
            i++;
        }
    }

    str[write_index] = '\0';
}

int main() {
    char str[] = "hello world hello universe";

    removeSubstring(str, "hello");

    printf("%s\n", str);
    
    return 0;
}
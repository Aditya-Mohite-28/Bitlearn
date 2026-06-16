#include <stdio.h>

int isMatch(char *pat, char *str) {
    char *s_ptr = str;
    char *p_ptr = pat;
    char *str_backtrack = NULL;
    char *pat_backtrack = NULL;

    while (*s_ptr != '\0') {
        if (*p_ptr == '?' || *p_ptr == *s_ptr) {
            s_ptr++;
            p_ptr++;
        }
        else if (*p_ptr == '*') {
            pat_backtrack = p_ptr;
            str_backtrack = s_ptr;
            p_ptr++;
        }
        else if (pat_backtrack != NULL) {
            p_ptr = pat_backtrack + 1;
            str_backtrack++;
            s_ptr = str_backtrack;
        }
        else {
            return 0;
        }
    }

    while (*p_ptr == '*') {
        p_ptr++;
    }

    return (*p_ptr == '\0');
}

int main() {
    char pat[] = "g*ks";
    char str[] = "geeks";
    
    printf("%s\n", isMatch(pat, str) ? "Match" : "No Match");
    return 0;
}
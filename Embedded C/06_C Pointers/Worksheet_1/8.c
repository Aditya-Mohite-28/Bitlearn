#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = NULL;
    
    if(ptr != NULL) {
        printf("Not Null: %d", *ptr);
    } else {
        ptr = &a;
        printf("Was Null: %d", *ptr);
    }

    return 0;
}
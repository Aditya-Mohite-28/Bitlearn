#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][20], int n) {
    char temp[20];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char arr[3][20] = {"John", "Alice", "Bob"};
    int n = 3;

    sortStrings(arr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    return 0;
}
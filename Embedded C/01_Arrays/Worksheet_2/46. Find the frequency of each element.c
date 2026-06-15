#include <stdio.h>

void findFrequency(int arr[], int size) {
    int visited[size]; 

    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d: %d\n", arr[i], count);
    }
}

int main() {
    int arr[] = {10, 20, 10, 30, 20, 20, 10, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
#include <stdio.h>


int main()
{
    int arr[] = {4, 1, 2, 3, 4, 5, 6, 7, 8, 13, 15,17, 23,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mid = size/2;
    printf("First Half: ");
    for (int i = 0; i <= mid; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSecond Half: ");
    for (int i = mid + 1; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
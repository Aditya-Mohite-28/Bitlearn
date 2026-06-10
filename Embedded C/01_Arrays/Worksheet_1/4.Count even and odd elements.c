#include <stdio.h>

int is_even (int num) {
    
    if ((num & 1) == 0)
        return 1;           /// return 1 for even
    return 0;               /// return 0 for odd
}

int main()
{
    int size, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i++) {
        if (is_even(arr[i]))
            even++;
        else
            odd++;
    }
    
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}

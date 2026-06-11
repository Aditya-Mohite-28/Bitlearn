#include <stdio.h>

int is_prime(int num) {
    int isprime = 1;
    
    if (num <= 1)
        return 0;
    else {
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isprime = 0;
                break;
            }
        }
    }
    return isprime;
}

void count_prime(int arr[], int size) {
    int result[size];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if(is_prime(arr[i])) {
            result[index] = arr[i];
            index++;
        }
    }
    
    printf("List: ");
    for(int i = 0; i < index; i++){
        printf("%d ", result[i]);
    }
    printf("Count: %d", index);
}

int main()
{
    int arr[] = {4, 1, 2, 3, 4, 5, 6, 7, 8, 13, 15,17, 23,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    count_prime(arr, size);

    return 0;
}
#include <stdio.h>


int is_palindrome(int arr[], int size) {
    int is_palindrome = 1;
    int left = 0;
    int right = size - 1;
    
    while (left < right) {
        if (arr[left] != arr[right]) return 0;
        left++;
        right--;
    }
    return is_palindrome;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 2, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    if(is_palindrome(arr, size)) {
        printf("Palindrome");
    } else printf("Not Palindrome");

    return 0;
}
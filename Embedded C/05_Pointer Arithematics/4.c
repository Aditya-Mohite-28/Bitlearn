#include <stdio.h>

int main() {
    int arr[] = {11, 22, 33, 44, 55};
    int *ptr1 = &arr[4];  // points to 33
    int *ptr2 = &arr[2];  // points to 55
    
    if(ptr2 < ptr1) printf("ptr2 point to lower index compared to ptr1");
    else printf("ptr1 point to lower index compared to ptr2");
    
    return 0;
}
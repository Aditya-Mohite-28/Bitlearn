#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr + 5; // Out of bounds

    printf("%d\n", *ptr);

    return 0;
}


/// Here the array has 3 elements and the pointer is to a memory address that is not in the bounds of array
/// Since its unknown to us that it will point to so its a Unidentified Behariour how the code will execute it may print some garbage or it may crash.
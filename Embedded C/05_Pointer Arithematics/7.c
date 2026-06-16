#include <stdio.h>

int main() {
    double darr[] = {1.1, 2.2, 3.3};
    double *ptr = darr;

    double second_element = *(ptr + 1);

    printf("Second element is %.1f\n", second_element);

    return 0;
}


/// Here the pointer is pointing to a double datatype when we incretment the pointer
/// It will get incretmented with respect to the datatype and point to the second element
/// if pointer points to int after ever increment by 1 it will point to next 4th byte. 
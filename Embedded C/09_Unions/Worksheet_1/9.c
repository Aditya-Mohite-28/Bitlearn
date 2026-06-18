#include <stdio.h>

union Element {
    int i;
    float f;
    char c;
};

int main() {
    union Element arr[3];

    arr[0].i = 100;
    arr[1].f = 5.5;
    arr[2].c = 'Z';

    printf("Element 0 (int): %d\n", arr[0].i);
    printf("Element 1 (float): %f\n", arr[1].f);
    printf("Element 2 (char): %c\n", arr[2].c);

    return 0;
}

/// Issue Showcase (printing wrong types Since its a Union it can only give memoory to a single member (the memory is shared within members)
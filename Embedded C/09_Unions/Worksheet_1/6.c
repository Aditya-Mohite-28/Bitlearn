#include <stdio.h>

union Sample {
    int i;
    float f;
};

int main() {
    union Sample s;
    union Sample *ptr = &s;

    ptr->i = 42;
    printf("Value via pointer (int): %d\n", ptr->i);

    ptr->f = 3.14;
    printf("Value via pointer (float): %f\n", ptr->f);

    return 0;
}
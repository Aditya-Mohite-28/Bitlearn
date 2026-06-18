#include <stdio.h>

union Inner {
    float f;
    char c;
};

union Number {
    int i;
    union Inner inner;
};

int main() {
    union Number num;

    num.inner.f = 45.67;
    printf("Nested float: %f\n", num.inner.f);

    num.inner.c = 'A';
    printf("Nested char: %c\n", num.inner.c);

    num.i = 500;
    printf("Outer int: %d\n", num.i);
    printf("Nested char after outer modification: %c\n", num.inner.c);

    return 0;
}
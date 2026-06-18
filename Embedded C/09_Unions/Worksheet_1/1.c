#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("After setting int:\n");
    printf("data.i: %d\n", data.i);
    printf("data.str: %s\n", data.str);
    printf("data.f: %f\n\n", data.f);

    data.f = 220.5;
    printf("\nAfter setting float:\n");
    printf("data.f: %f\n", data.f);
    printf("data.i: %d\n", data.i);
    printf("data.str: %s\n\n", data.str);

    strcpy(data.str, "C Programming");
    printf("\nAfter setting char array:\n");
    printf("data.str: %s\n", data.str);
    printf("data.f: %f\n", data.f);
    printf("data.i: %d\n\n", data.i);

    return 0;
}
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 5;
    data.f = 12.5;
    strcpy(data.str, "Corrupted");

    printf("Attempting to print all members simultaneously:\n");
    printf("data.i: %d\n", data.i);
    printf("data.f: %f\n", data.f);
    printf("data.str: %s\n", data.str);

    return 0;
}
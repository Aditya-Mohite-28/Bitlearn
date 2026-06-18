#include <stdio.h>

union SampleUnion {
    int i;
    double d;
    char c;
};

struct SampleStruct {
    int i;
    double d;
    char c;
};

int main() {
    printf("Size of Union: %lu bytes\n", sizeof(union SampleUnion));
    printf("Size of Structure: %lu bytes\n", sizeof(struct SampleStruct));
    return 0;
}
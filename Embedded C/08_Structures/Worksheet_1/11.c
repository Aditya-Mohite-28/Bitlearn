#include <stdio.h>

struct LayoutA {
    char first_byte;
    double high_word;
    char second_byte;
};

struct LayoutB {
    double high_word;
    char first_byte;
    char second_byte;
};

#pragma pack(push, 1)
struct LayoutPacked {
    char first_byte;
    double high_word;
    char second_byte;
};
#pragma pack(pop)

int main() {
    printf("Layout A Size (Unoptimized ordering): %zu bytes\n", sizeof(struct LayoutA));
    printf("Layout B Size (Optimized field sequence): %zu bytes\n", sizeof(struct LayoutB));
    printf("Layout Packed Size (Strict byte forced packing): %zu bytes\n", sizeof(struct LayoutPacked));

    return 0;
}
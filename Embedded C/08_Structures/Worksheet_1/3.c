#include <stdio.h>
#include <stddef.h>

struct PaddedData {
    char c;
    int i;
    short s;
};

struct OptimizedData {
    int i;
    short s;
    char c;
};

#pragma pack(push, 1)
struct PackedData {
    char c;
    int i;
    short s;
};
#pragma pack(pop)

int main() {
    struct PaddedData pad;
    struct OptimizedData opt;
    struct PackedData pack;

    printf("Padded struct size: %zu bytes\n", sizeof(pad));
    printf("  Offsets: c=%zu, i=%zu, s=%zu\n", offsetof(struct PaddedData, c), offsetof(struct PaddedData, i), offsetof(struct PaddedData, s));

    printf("Optimized struct size: %zu bytes\n", sizeof(opt));
    printf("  Offsets: i=%zu, s=%zu, c=%zu\n", offsetof(struct OptimizedData, i), offsetof(struct OptimizedData, s), offsetof(struct OptimizedData, c));

    printf("Packed struct size: %zu bytes\n", sizeof(pack));
    printf("  Offsets: c=%zu, i=%zu, s=%zu\n", offsetof(struct PackedData, c), offsetof(struct PackedData, i), offsetof(struct PackedData, s));

    return 0;
}
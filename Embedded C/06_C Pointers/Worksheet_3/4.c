#include <stdio.h>
#include <stddef.h>

void mem_copy(void *dest, const void *src, size_t n);

int main() {
    int src_ints[] = {10, 20, 30, 40, 50};
    size_t num_ints = sizeof(src_ints) / sizeof(src_ints[0]);
    int dest_ints[5] = {0};

    printf("--- Integer Array Copy ---\n");
    printf("Before copy (dest): ");
    for (size_t i = 0; i < num_ints; i++) {
        printf("%d ", dest_ints[i]);
    }
    printf("\n");

    mem_copy(dest_ints, src_ints, sizeof(src_ints));

    printf("After copy (dest):  ");
    for (size_t i = 0; i < num_ints; i++) {
        printf("%d ", dest_ints[i]);
    }
    printf("\n\n");


    float src_floats[] = {1.1f, 2.2f, 3.3f, 4.4f};    size_t num_floats = sizeof(src_floats) / sizeof(src_floats[0]);
    float dest_floats[4] = {0.0f};

    printf("--- Float Array Copy ---\n");
    printf("Before copy (dest): ");
    for (size_t i = 0; i < num_floats; i++) {
        printf("%.1f ", dest_floats[i]);
    }
    printf("\n");

    mem_copy(dest_floats, src_floats, sizeof(src_floats));

    printf("After copy (dest):  ");
    for (size_t i = 0; i < num_floats; i++) {
        printf("%.1f ", dest_floats[i]);
    }
    printf("\n");

    return 0;
}

void mem_copy(void *dest, const void *src, size_t n) {
    char *d = (char *)dest;
    const char *s = (const char *)src;

    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
}
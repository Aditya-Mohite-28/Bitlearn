#include <stdio.h>

struct Collection {
    char label;
    int index;
    float measurement;
};

union VariableStorage {
    char label;
    int index;
    float measurement;
};

int main() {
    int simple_array[3] = {10, 20, 30};
    
    struct Collection struct_var = {'S', 101, 98.6f};
    struct Collection struct_init_designated = {.index = 202, .measurement = 45.2f, .label = 'D'};

    printf("Array member [1]: %d\n", simple_array[1]);
    printf("Struct base field values -> label: %c, index: %d, val: %.1f\n", struct_var.label, struct_var.index, struct_var.measurement);
    printf("Designated initialization values -> label: %c, index: %d, val: %.1f\n", struct_init_designated.label, struct_init_designated.index, struct_init_designated.measurement);

    printf("Size comparison: Array=%zu, Struct=%zu, Union=%zu\n", sizeof(simple_array), sizeof(struct_var), sizeof(union VariableStorage));

    return 0;
}
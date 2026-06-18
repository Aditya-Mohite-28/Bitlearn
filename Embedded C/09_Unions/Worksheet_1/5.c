#include <stdio.h>

struct Item {
    int id;
    union {
        int bulk_count;
        float weight;
    };
};

int main() {
    struct Item my_item;

    my_item.id = 101;
    my_item.bulk_count = 150;

    printf("Item ID: %d\n", my_item.id);
    printf("Bulk Count: %d\n", my_item.bulk_count);

    my_item.weight = 12.75;
    printf("Weight: %f\n", my_item.weight);

    return 0;
}
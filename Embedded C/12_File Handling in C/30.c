#include <stdio.h>

int main() {
    char filename[] = "inventory.txt";
    char item[50], unit[20];
    int qty, price;
    FILE *file;

    printf("Add item: ");
    scanf("%49s %d %19s Rs.%d", item, &qty, unit, &price);

    file = fopen(filename, "a");
    fprintf(file, "%s, %d %s, Rs.%d\n", item, qty, unit, price);
    fclose(file);

    printf("Inventory file now includes the new item\n");
    return 0;
}
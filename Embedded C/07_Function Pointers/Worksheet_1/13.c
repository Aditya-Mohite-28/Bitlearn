#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[30];
    int age;
};

int compareByName(const void *a, const void *b) {
    return strcmp(((struct Person *)a)->name, ((struct Person *)b)->name);
}

int compareByAge(const void *a, const void *b) {
    return ((struct Person *)a)->age - ((struct Person *)b)->age;
}

void printPeople(struct Person arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("  %s (%d)\n", arr[i].name, arr[i].age);
    }
}

int main() {
    struct Person people[] = {
        {"Charlie", 25},
        {"Alice", 30},
        {"Bob", 20}
    };
    int n = sizeof(people) / sizeof(people[0]);

    printf("Original list:\n");
    printPeople(people, n);

    qsort(people, n, sizeof(struct Person), compareByName);
    printf("\nSorted by Name:\n");
    printPeople(people, n);

    qsort(people, n, sizeof(struct Person), compareByAge);
    printf("\nSorted by Age:\n");
    printPeople(people, n);

    return 0;
}
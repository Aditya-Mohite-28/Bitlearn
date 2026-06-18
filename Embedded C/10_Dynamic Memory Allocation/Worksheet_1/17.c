#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    int count;
    printf("How many profiles do you want to store? ");
    if (scanf("%d", &count) != 1 || count <= 0) return 1;

    struct Person *list = (struct Person *)malloc(count * sizeof(struct Person));
    if (list == NULL) return 1;

    for (int i = 0; i < count; i++) {
        printf("Enter name for profile %d: ", i + 1);
        scanf("%s", list[i].name);
        printf("Enter age for profile %d: ", i + 1);
        scanf("%d", &list[i].age);
    }

    printf("\nStored profiles:\n");
    for (int i = 0; i < count; i++) {
        printf("Profile %d -> Name: %s, Age: %d\n", i + 1, list[i].name, list[i].age);
    }

    free(list);
    return 0;
}
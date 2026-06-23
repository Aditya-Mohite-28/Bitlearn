#include <stdio.h>

int main() {
    char filename[] = "employees.txt";
    char name[50];
    int age;
    FILE *file;

    printf("Add new employee: Name: ");
    scanf("%49s", name);
    printf("Age: ");
    scanf("%d", &age);

    file = fopen(filename, "a");
    fprintf(file, "Name: %s, Age: %d\n", name, age);
    fclose(file);

    printf("Employee added (info saved in file)\n");
    return 0;
}
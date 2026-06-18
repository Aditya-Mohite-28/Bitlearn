#include <stdio.h>
#include <string.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int (*getOperation(char *name))(int, int) {
    if (strcmp(name, "add") == 0) return add;
    if (strcmp(name, "subtract") == 0) return subtract;
    if (strcmp(name, "multiply") == 0) return multiply;
    return NULL;
}

int main() {
    char op[20];
    int x, y;

    printf("Enter operation (add, subtract, multiply): ");
    if (scanf("%19s", op) != 1) return 1;

    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) return 1;

    int (*func)(int, int) = getOperation(op);
    if (func != NULL) {
        printf("Result of %s: %d\n", op, func(x, y));
    } else {
        printf("Operation not found.\n");
    }
    return 0;
}
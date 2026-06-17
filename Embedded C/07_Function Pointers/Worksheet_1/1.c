#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return (b != 0) ? (a / b) : 0; }

typedef enum {
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_MAX
} OpType;

int main() {
    int (*math_table[])(int, int) = { add, subtract, multiply, divide };

    int choice = OP_MULTIPLY;
    int num1 = 12, num2 = 4;

    if (choice >= 0 && choice < OP_MAX) {
        int result = math_table[choice](num1, num2);
        printf("Result of operation %d: %d\n", choice, result);
    } else {
        printf("Invalid operation index.\n");
    }

    return 0;
}
#include <stdio.h>

struct Calculator {
    int (*ops[3])(int, int);
};

int add(int a, int b)      { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    struct Calculator calc = {{add, subtract, multiply}};
    int x = 10, y = 5;

    printf("Calculator structure execution on values (%d, %d):\n", x, y);
    printf("  Index 0 (Add): %d\n", calc.ops[0](x, y));
    printf("  Index 1 (Subtract): %d\n", calc.ops[1](x, y));
    printf("  Index 2 (Multiply): %d\n", calc.ops[2](x, y));

    return 0;
}
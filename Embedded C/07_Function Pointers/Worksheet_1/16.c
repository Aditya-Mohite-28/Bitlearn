#include <stdio.h>

int (*fact_ptr)(int);

int factorial(int n) {
    return (n <= 1) ? 1 : n * fact_ptr(n - 1);
}

int main() {
    fact_ptr = factorial;
    int input = 5;
    printf("Calculating factorial of %d via function pointer...\n", input);
    printf("Result: %d\n", fact_ptr(input));
    return 0;
}
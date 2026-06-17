#include <stdio.h>
#include <math.h>

double power(double base, double exponent) {
    return pow(base, exponent);
}

double modulo(double a, double b) {
    if (b == 0.0) {
        printf("\nError: Division by zero is undefined.\n");
        return 0.0;
    }
    return fmod(a, b);
}

double squareRoot(double num, double dummy) {
    (void)dummy; 
    if (num < 0.0) {
        printf("\nError: Cannot calculate the square root of a negative number.\n");
        return 0.0;
    }
    return sqrt(num);
}

typedef enum {
    OP_POWER = 1,
    OP_MODULO,
    OP_SQRT,
    OP_EXIT
} MenuChoice;

int main() {
    double (*calc_table[])(double, double) = { NULL, power, modulo, squareRoot };
    
    int choice;
    double val1, val2, result;

    while (1) {
        printf("\n=== Function Pointer Calculator ===\n");
        printf("1. Power (base^exp)\n");
        printf("2. Modulo (a %% b)\n");
        printf("3. Square Root\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input type. Exiting program.\n");
            break;
        }

        if (choice == OP_EXIT) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice < OP_POWER || choice > OP_SQRT) {
            printf("Invalid selection! Please choose a number between 1 and 4.\n");
            continue;
        }

        if (choice == OP_SQRT) {
            printf("Enter a number: ");
            scanf("%lf", &val1);
            val2 = 0.0;
        } else if (choice == OP_POWER) {
            printf("Enter base: ");
            scanf("%lf", &val1);
            printf("Enter exponent: ");
            scanf("%lf", &val2);
        } else {
            printf("Enter number (a): ");
            scanf("%lf", &val1);
            printf("Enter divisor (b): ");
            scanf("%lf", &val2);
        }

        result = calc_table[choice](val1, val2);

        if (choice == OP_SQRT && val1 >= 0.0) {
            printf("Result: %.4f\n", result);
        } else if (choice == OP_MODULO && val2 != 0.0) {
            printf("Result: %.4f\n", result);
        } else if (choice == OP_POWER) {
            printf("Result: %.4f\n", result);
        }
    }

    return 0;
}
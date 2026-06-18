#include <stdio.h>
#include <math.h>

double wrap_sin(double x) { return sin(x); }
double wrap_cos(double x) { return cos(x); }
double wrap_tan(double x) { return tan(x); }
double wrap_log(double x) { return log(x); }

int main() {
    double (*funcs[])(double) = {wrap_sin, wrap_cos, wrap_tan, wrap_log};
    int choice;
    double input;

    printf("Select function (0:sin, 1:cos, 2:tan, 3:log): ");
    if (scanf("%d", &choice) != 1) return 1;

    printf("Enter floating-point input: ");
    if (scanf("%lf", &input) != 1) return 1;

    if (choice >= 0 && choice < 4) {
        printf("Result: %f\n", funcs[choice](input));
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}1
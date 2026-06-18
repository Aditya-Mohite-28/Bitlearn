#include <stdio.h>

int doubleValue(int x) { return x * 2; }
int increment(int x)   { return x + 1; }
int square(int x)      { return x * x; }

int main() {
    int (*pipeline[])(int) = {doubleValue, increment, square};
    int val = 5;
    int n = sizeof(pipeline) / sizeof(pipeline[0]);

    printf("Starting pipeline value: %d\n", val);
    for (int i = 0; i < n; i++) {
        val = pipeline[i](val);
        printf("  After step %d: %d\n", i + 1, val);
    }

    printf("Final pipeline result: %d\n", val);
    return 0;
}
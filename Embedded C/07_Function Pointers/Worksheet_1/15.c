#include <stdio.h>

void intAdd(void *a, void *b)      { printf("Integer Addition: %d\n", *(int *)a + *(int *)b); }
void floatAdd(void *a, void *b)    { printf("Float Addition: %f\n", *(float *)a + *(float *)b); }
void intBitwiseOr(void *a, void *b) { printf("Integer Bitwise OR: %d\n", *(int *)a | *(int *)b); }
void floatDummy(void *a, void *b)  { (void)a; (void)b; printf("Bitwise OR not supported for float.\n"); }

int main() {
    void (*operations[2][2])(void *, void *) = {
        {intAdd, floatAdd},
        {intBitwiseOr, floatDummy}
    };

    int i1 = 10, i2 = 2;
    float f1 = 5.5f, f2 = 1.5f;

    printf("Executing row 0, col 0:\n");
    operations[0][0](&i1, &i2);

    printf("\nExecuting row 0, col 1:\n");
    operations[0][1](&f1, &f2);

    printf("\nExecuting row 1, col 0:\n");
    operations[1][0](&i1, &i2);

    return 0;
}
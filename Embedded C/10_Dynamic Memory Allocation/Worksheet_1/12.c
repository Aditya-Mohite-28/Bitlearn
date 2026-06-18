#include <stdio.h>
#include <stdlib.h>

int main() {
    int *freq = (int *)calloc(100, sizeof(int));
    if (freq == NULL) return 1;

    int n, num;
    printf("Enter the number of inputs: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    printf("Enter numbers between 0 and 99:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num >= 0 && num < 100) {
            freq[num]++;
        } else {
            printf("Number out of bounds ignored.\n");
        }
    }

    printf("Frequencies of entered numbers:\n");
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("Number %d occurs %d times\n", i, freq[i]);
        }
    }

    free(freq);
    return 0;
}
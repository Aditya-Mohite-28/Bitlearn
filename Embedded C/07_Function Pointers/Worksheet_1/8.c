#include <stdio.h>
#include <stdbool.h>

typedef bool (*ConditionFunc)(int);

bool isEven(int num) {
    return num % 2 == 0;
}

bool isPositive(int num) {
    return num > 0;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int* find(int* arr, int size, ConditionFunc condition) {
    for (int i = 0; i < size; i++) {
        if (condition(arr[i])) {
            return &arr[i];
        }
    }
    return NULL;
}

void printResult(int* result, const char* conditionName) {
    if (result != NULL) {
        printf("First element matching (%s): %d\n", conditionName, *result);
    } else {
        printf("No element matches (%s)\n", conditionName);
    }
}

int main(void) {
    int data[] = {-3, -5, 7, 14, 11, -2, 9};
    int size = sizeof(data) / sizeof(data[0]);

    int* result;

    result = find(data, size, isEven);
    printResult(result, "isEven");

    result = find(data, size, isPositive);
    printResult(result, "isPositive");

    result = find(data, size, isPrime);
    printResult(result, "isPrime");

    return 0;
}
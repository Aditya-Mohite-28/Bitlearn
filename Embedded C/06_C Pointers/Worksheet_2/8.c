#include <stdio.h>

void modify_elements(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            (*(matrix + (i * cols) + j))++;
        }
    }
}

int sum_matrix(const int *matrix, int rows, int cols) {
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += *(matrix + (i * cols) + j);
        }
    }
    return total;
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Initial sum: %d\n", sum_matrix((int *)matrix, 2, 3));

    modify_elements((int *)matrix, 2, 3);

    printf("Sum after incrementing elements: %d\n", sum_matrix((int *)matrix, 2, 3));

    return 0;
}
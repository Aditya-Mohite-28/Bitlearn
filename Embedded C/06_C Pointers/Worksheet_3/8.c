#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int rows = 4;
    int cols = 4;

    uint32_t **reg_block = (uint32_t **)malloc(rows * sizeof(uint32_t *));
    if (reg_block == NULL) {
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        reg_block[i] = (uint32_t *)malloc(cols * sizeof(uint32_t));
        if (reg_block[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(reg_block[j]);
            }
            free(reg_block);
            return 1;
        }
    }

        for (int j = 0; j < cols; j++) {
            reg_block[i][j] = (uint32_t)((i << 4) | j); 
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("0x%02X ", *(*(reg_block + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(reg_block[i]);
    }
    free(reg_block);
    reg_block = NULL;

    return 0;
}
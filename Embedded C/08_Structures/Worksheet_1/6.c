#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    uint32_t MODER;
    uint32_t OTYPER;
    uint32_t ODR;
} GPIO_Regs;

int main() {
    GPIO_Regs *gpio_ptr = (GPIO_Regs*)malloc(sizeof(GPIO_Regs));
    if (gpio_ptr == NULL) return 1;

    gpio_ptr->MODER = 0x55555555;
    gpio_ptr->OTYPER = 0x00000000;
    gpio_ptr->ODR = 0x0000FFFF;

    printf("Direct structure field usage -> ODR: 0x%08X\n", gpio_ptr->ODR);

    uint32_t fake_peripheral_memory[3] = {0};
    GPIO_Regs *peripheral = (GPIO_Regs*)fake_peripheral_memory;

    peripheral->MODER = 0xAABBCCDD;
    peripheral->ODR = 0x12345678;

    printf("Peripheral Struct Pointer Base Mapping:\n");
    printf("Memory Array Word [0] (MODER): 0x%08X\n", fake_peripheral_memory[0]);
    printf("Memory Array Word [2] (ODR):   0x%08X\n", fake_peripheral_memory[2]);

    free(gpio_ptr);
    return 0;
}
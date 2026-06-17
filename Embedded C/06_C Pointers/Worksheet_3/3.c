#include <stdio.h>
#include <stdint.h>

#define REG_BASE 0x40000000

int main() {
    volatile uint32_t *reg_modifiable = (volatile uint32_t *)REG_BASE;
    const uint32_t *reg_readonly = (const uint32_t *)REG_BASE;
    const volatile uint32_t *reg_const_volatile = (const volatile uint32_t *)REG_BASE;

    *reg_modifiable = 0xA5A5A5A5; 
    uint32_t val1 = *reg_modifiable; 

    uint32_t val2 = *reg_readonly; 

    uint32_t val3 = *reg_const_volatile; 
    
    printf("val1: %d\nval2: %d\nval3: %d\n", val1, val2, val3);

    return 0;
}


// COmpiler hit segmentation fault while executing 11. *reg_modifiable = 0xA5A5A5A5;
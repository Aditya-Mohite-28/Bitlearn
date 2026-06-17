#include <stdio.h>

typedef void (*InterruptHandler)(void);

#define TIMER_INT 0
#define KEYBOARD_INT 1
#define ERROR_INT 2
#define NUM_INTERRUPTS 3

void timerInterrupt(void) {
    printf("[INTERRUPT] Timer tick processed.\n");
}

void keyboardInterrupt(void) {
    printf("[INTERRUPT] Keyboard keystroke captured.\n");
}

void errorInterrupt(void) {
    printf("[INTERRUPT] System error flagged and logged.\n");
}

int main(void) {
    InterruptHandler interruptVectorTable[NUM_INTERRUPTS] = {
        [TIMER_INT] = timerInterrupt,
        [KEYBOARD_INT] = keyboardInterrupt,
        [ERROR_INT] = errorInterrupt
    };

    int choice;
    printf("Enter interrupt number (0: Timer, 1: Keyboard, 2: Error, -1: Exit): ");
    
    while (scanf("%d", &choice) == 1 && choice != -1) {
        if (choice >= 0 && choice < NUM_INTERRUPTS && interruptVectorTable[choice] != NULL) {
            interruptVectorTable[choice]();
        } else {
            printf("Invalid interrupt vector.\n");
        }
        printf("\nEnter interrupt number (-1 to exit): ");
    }

    return 0;
}
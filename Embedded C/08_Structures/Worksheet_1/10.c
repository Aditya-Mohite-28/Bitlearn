#include <stdio.h>

typedef struct {
    int pin_number;
    int mode_type;
} GPIOPin;

GPIOPin global_pin = {12, 1};

void pin_process_loop() {
    static GPIOPin static_pin = {5, 0};
    GPIOPin local_pin;
    
    local_pin.pin_number = 16;
    local_pin.mode_type = 2;

    static_pin.pin_number++;
    
    printf("  Static tracking pin internal num: %d\n", static_pin.pin_number);
    printf("  Local short-lived frame pin num:  %d\n", local_pin.pin_number);
}

int main() {
    printf("Global fixed-instance pin: %d\n", global_pin.pin_number);
    
    GPIOPin config_pin = {.mode_type = 3, .pin_number = 4};
    printf("Designated setup pin instance: Num=%d, Mode=%d\n", config_pin.pin_number, config_pin.mode_type);

    printf("Loop pass 1:\n");
    pin_process_loop();
    printf("Loop pass 2:\n");
    pin_process_loop();

    return 0;
}
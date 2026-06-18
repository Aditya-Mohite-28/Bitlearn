#include <stdio.h>

typedef void (*DriverOp)(int);

typedef struct {
    DriverOp init;
    DriverOp transmit;
} DriverAPI;

void uart_init(int baud) {
    printf("UART initialized at %d bps\n", baud);
}

void uart_tx(int val) {
    printf("UART transmitted raw data byte: 0x%02X\n", val);
}

void spi_init(int clock) {
    printf("SPI initialized at %d kHz\n", clock);
}

void spi_tx(int val) {
    printf("SPI transmitted raw data byte: 0x%02X\n", val);
}

int main() {
    DriverAPI uart_drv = {uart_init, uart_tx};
    DriverAPI spi_drv = {spi_init, spi_tx};
    DriverAPI *current_driver;

    int input_selection = 1; 

    if (input_selection == 1) {
        current_driver = &uart_drv;
    } else {
        current_driver = &spi_drv;
    }

    current_driver->init(115200);
    current_driver->transmit(0xAA);

    current_driver = &spi_drv;
    current_driver->init(4000);
    current_driver->transmit(0x55);

    return 0;
}
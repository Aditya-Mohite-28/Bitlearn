#include <stdio.h>

typedef int (*CalibArrayPtr)[10];

CalibArrayPtr get_calibration_data(void) {
    static int calib_data[10] = {100, 102, 98, 105, 97, 101, 99, 103, 100, 104};
    return &calib_data;
}

int main() {
    CalibArrayPtr data_ptr = get_calibration_data();

    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i, (*data_ptr)[i]);
    }

    return 0;
}
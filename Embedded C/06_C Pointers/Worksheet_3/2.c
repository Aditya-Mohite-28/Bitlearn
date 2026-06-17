#include <stdio.h>

int main() {
    int sensors[3][3] = {
      {100, 101, 102},
      {110, 111, 112},
      {120, 121, 122}
    };

    int *p = &sensors[0][0];

    for (int i = 0; i < 9; i++) {
        printf("Sensor Value: %d: %d\n", i, *(p + i));
    }

    return 0;
}
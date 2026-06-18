#include <stdio.h>

struct Point {
    int x;
    int y;
};

union Container {
    struct Point pt;
    int status;
};

int main() {
    union Container c;

    c.pt.x = 10;
    c.pt.y = 20;

    printf("Structure coordinates through union: X = %d, Y = %d\n", c.pt.x, c.pt.y);

    c.status = -1;
    printf("Union status code set to: %d\n", c.status);
    printf("Coordinates after overwriting: X = %d, Y = %d\n", c.pt.x, c.pt.y);

    return 0;
}
#include <stdio.h>

#define SHIFT_RIGHT(num, n) ((num) >> (n))
#define SHIFT_LEFT(num, n) ((num) << (n) )


int main() {
    unsigned int num, n;
    unsigned char rotation_type;

    printf("Input number: ");
    scanf("%u", &num);
    printf("Rotation (Left or Right)? \n\t 1. Left\n\t 2. Right");
    scanf("%u", &rotation_type);
    printf("Rotation times: ");
    scanf("%u", &n);
    printf("%d -> %032b\n", num, num);
    switch(rotation_type) {
        case 1:
            num = SHIFT_LEFT(num, n);
            break;
        case 2:
            num = SHIFT_RIGHT(num, n);
            break;
        default:
            printf("Not valid rotation type\n");
            break;
    }
    printf("%d -> %032b\n", num, num);

    return 0;
}
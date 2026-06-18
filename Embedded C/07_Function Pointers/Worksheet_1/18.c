#include <stdio.h>

void handleCmd0() { printf("Command 0 executed: System initialized.\n"); }
void handleCmd1() { printf("Command 1 executed: System updating.\n"); }
void handleCmd2() { printf("Command 2 executed: System shutting down.\n"); }

int main() {
    void (*cmdTable[])() = {handleCmd0, handleCmd1, handleCmd2};
    int cmd;

    while (1) {
        printf("Enter command code (0-2) or -1 to exit: ");
        if (scanf("%d", &cmd) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        if (cmd == -1) {
            printf("Exiting application.\n");
            break;
        }

        if (cmd >= 0 && cmd < 3) {
            cmdTable[cmd]();
        } else {
            printf("Error: Unknown command code.\n");
        }
        printf("\n");
    }

    return 0;
}
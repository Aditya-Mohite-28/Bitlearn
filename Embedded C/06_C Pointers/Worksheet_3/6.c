#include <stdio.h>

void init(void) {
    printf("Device Initialized\n");
}

void start(void) {
    printf("Device Started\n");
}

void stop(void) {
    printf("Device Stopped\n");
}

typedef enum {
    CMD_INIT,
    CMD_START,
    CMD_STOP,
    CMD_COUNT
} CommandIndex;

int main() {
    void (*cmd_table[])(void) = {init, start, stop};

    CommandIndex target_cmd = CMD_INIT;
    if (target_cmd < CMD_COUNT) {
        cmd_table[target_cmd]();
    }

    target_cmd = CMD_START;
    if (target_cmd < CMD_COUNT) {
        cmd_table[target_cmd]();
    }

    target_cmd = CMD_STOP;
    if (target_cmd < CMD_COUNT) {
        cmd_table[target_cmd]();
    }

    return 0;
}
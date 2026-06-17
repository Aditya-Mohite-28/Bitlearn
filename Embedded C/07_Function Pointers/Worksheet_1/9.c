#include <stdio.h>
#include <string.h>

typedef void (*LoggerFunc)(const char*);

void consoleLog(const char* message) {
    printf("[CONSOLE] %s\n", message);
}

void fileLog(const char* message) {
    printf("[FILE] Writing to log.txt: %s\n", message);
}

void networkLog(const char* message) {
    printf("[NETWORK] Sending packet: %s\n", message);
}

int main(void) {
    LoggerFunc logger = consoleLog;
    char command[16];

    printf("Dynamic Logger Initialization. Commands: 'console', 'file', 'network', 'log <msg>', 'exit'\n");

    while (1) {
        printf("\n> ");
        if (scanf("%15s", command) != 1) {
            break;
        }

        if (strcmp(command, "exit") == 0) {
            break;
        } else if (strcmp(command, "console") == 0) {
            logger = consoleLog;
            printf("Switched to console logging.\n");
        } else if (strcmp(command, "file") == 0) {
            logger = fileLog;
            printf("Switched to file logging.\n");
        } else if (strcmp(command, "network") == 0) {
            logger = networkLog;
            printf("Switched to network logging.\n");
        } else if (strcmp(command, "log") == 0) {
            char message[256];
            if (fgets(message, sizeof(message), stdin) != NULL) {
                size_t len = strlen(message);
                if (len > 0 && message[len - 1] == '\n') {
                    message[len - 1] = '\0';
                }
                
                char *start = message;
                while (*start == ' ') {
                    start++;
                }

                if (logger != NULL) {
                    logger(start);
                }
            }
        } else {
            printf("Unknown command.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

typedef struct State State;
typedef State (*StateFunc)(void);

struct State {
    StateFunc nextAction;
};

State initState(void);
State runState(void);
State stopState(void);
State errorState(void);

char getSystemInput(void) {
    char input;
    printf("\nEnter command ([n]ext, [e]rror, [q]uit/stop): ");
    scanf(" %c", &input);
    return input;
}

State initState(void) {
    printf("[STATE] -> INITIALIZING...\n");
    
    char input = getSystemInput();
    if (input == 'e') {
        return (State){ errorState };
    } else if (input == 'q') {
        return (State){ stopState };
    }
    
    printf("Initialization successful. Transitioning to RUN state.\n");
    return (State){ runState };
}

State runState(void) {
    printf("[STATE] -> RUNNING...\n");
    
    char input = getSystemInput();
    if (input == 'e') {
        return (State){ errorState };
    } else if (input == 'q') {
        return (State){ stopState };
    }
    
    printf("Continuing normal execution.\n");
    return (State){ runState };
}

State errorState(void) {
    printf("[STATE] -> ERROR DETECTED!\n");
    
    char input = getSystemInput();
    if (input == 'q') {
        return (State){ stopState };
    }
    
    printf("Recovery successful. Re-initializing system.\n");
    return (State){ initState };
}

State stopState(void) {
    printf("[STATE] -> STOPPED.\n");
    
    return (State){ NULL };
}


int main(void) {
    printf("=== STARTING STATE MACHINE DEMO ===\n");
    State state = { initState };
    
    while (state.nextAction != NULL) {
        state = state.nextAction(); 
        printf("-----------------------------------\n");
    }
    
    printf("=== STATE MACHINE TERMINATED ===\n");
    return 0;
}
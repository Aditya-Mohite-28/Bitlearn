#include <stdio.h>

typedef void (*EventHandler)(void);

typedef enum {
    BUTTON_PRESS_EVENT,
    SENSOR_TRIGGER_EVENT,
    EVENT_COUNT
} EventType;

void handleButtonPress(void) {
    printf("Event Processed: Button Press Event Handled\n");
}

void handleSensorTrigger(void) {
    printf("Event Processed: Sensor Trigger Event Handled\n");
}

int main(void) {
    EventHandler eventRegistry[EVENT_COUNT] = {
        [BUTTON_PRESS_EVENT] = handleButtonPress,
        [SENSOR_TRIGGER_EVENT] = handleSensorTrigger
    };

    EventType simulatedEvents[] = {
        BUTTON_PRESS_EVENT,
        SENSOR_TRIGGER_EVENT,
        BUTTON_PRESS_EVENT
    };

    int numEvents = sizeof(simulatedEvents) / sizeof(simulatedEvents[0]);

    for (int i = 0; i < numEvents; i++) {
        EventType currentEvent = simulatedEvents[i];
        if (currentEvent >= 0 && currentEvent < EVENT_COUNT && eventRegistry[currentEvent] != NULL) {
            eventRegistry[currentEvent]();
        }
    }

    return 0;
}
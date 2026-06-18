#include <stdio.h>

typedef struct {
    long long large_dataset[10];
    int state_flag;
} LargeTelemetry;

void modify_by_value(LargeTelemetry val) {
    val.state_flag = 999;
}

void modify_by_reference(LargeTelemetry *ref) {
    ref->state_flag = 888;
}

LargeTelemetry generate_telemetry() {
    LargeTelemetry t = {0};
    t.state_flag = 111;
    return t;
}

int main() {
    LargeTelemetry my_data = {0};
    my_data.state_flag = 555;

    printf("Struct tracking parameters -> Variable footprint size: %zu bytes\n\n", sizeof(my_data));

    modify_by_value(my_data);
    printf("State post Pass-By-Value call: %d\n", my_data.state_flag);

    modify_by_reference(&my_data);
    printf("State post Pass-By-Ref call:   %d\n", my_data.state_flag);

    my_data = generate_telemetry();
    printf("State post Direct Return function: %d\n", my_data.state_flag);

    return 0;
}
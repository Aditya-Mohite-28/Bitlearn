#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    char type; 
    union {
        float salary;
        float hourly_wage;
    } payment;
};

int main() {
    struct Employee list[2];

    list[0].id = 1001;
    snprintf(list[0].name, 30, "Alice");
    list[0].type = 'S';
    list[0].payment.salary = 5000.00;

    list[1].id = 1002;
    snprintf(list[1].name, 30, "Bob");
    list[1].type = 'H';
    list[1].payment.hourly_wage = 25.50;

    for (int i = 0; i < 2; i++) {
        printf("ID: %d, Name: %s, Type: %c, ", list[i].id, list[i].name, list[i].type);
        if (list[i].type == 'S') {
            printf("Monthly Salary: $%.2f\n", list[i].payment.salary);
        } else if (list[i].type == 'H') {
            printf("Hourly Wage: $%.2f\n", list[i].payment.hourly_wage);
        }
    }

    return 0;
}
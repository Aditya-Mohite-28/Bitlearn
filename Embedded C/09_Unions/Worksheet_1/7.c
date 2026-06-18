#include <stdio.h>
#include <string.h>

struct Student {
    char type;
    union {
        int roll_number;
        char id[10];
    } info;
};

void displayStudent(struct Student s) {
    if (s.type == 'A') {
        printf("Active Student - Roll Number: %d\n", s.info.roll_number);
    } else if (s.type == 'I') {
        printf("Inactive Student - ID: %s\n", s.info.id);
    }
}

int main() {
    struct Student s1;
    struct Student s2;

    s1.type = 'A';
    s1.info.roll_number = 45;

    s2.type = 'I';
    strcpy(s2.info.id, "CSE-990");

    displayStudent(s1);
    displayStudent(s2);

    return 0;
}
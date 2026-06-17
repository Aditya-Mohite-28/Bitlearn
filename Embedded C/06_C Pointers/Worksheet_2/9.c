#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char role[20];
} Employee;

Employee* create_employee(int id, const char *role) {
    Employee *new_emp = (Employee *)malloc(sizeof(Employee));
    
    if (new_emp == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    new_emp->id = id;
    strcpy(new_emp->role, role);

    return new_emp; 
}

void update_role(Employee *ptr, char *str){
    strcpy(ptr->role, str);
}

int main() {
    Employee *emp1 = create_employee(101, "Developer");
    if(emp1 == NULL) return -1;
    printf("Employee ID: %d, Role: %s\n", emp1->id, emp1->role);
    update_role(emp1, "QA");
    printf("Employee ID: %d, Role: %s\n", emp1->id, emp1->role);

    return 0;
}
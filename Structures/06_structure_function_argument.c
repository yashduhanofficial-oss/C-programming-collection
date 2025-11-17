#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void displayEmployee(struct Employee emp) {
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    struct Employee emp;
    
    printf("Yash - 125113002\n");
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    
    printf("\nEmployee Details:\n");
    displayEmployee(emp);
    
    return 0;
}

#include <stdio.h>

struct Employee {
    char name[50];
    float basic, da, hra, gross;
};

int main() {
    struct Employee emp;
    
    printf("Yash - 125113002\n");
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter basic salary: ");
    scanf("%f", &emp.basic);
    
    emp.da = 0.4 * emp.basic;
    emp.hra = 0.2 * emp.basic;
    emp.gross = emp.basic + emp.da + emp.hra;
    
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Basic: %.2f\n", emp.basic);
    printf("DA: %.2f\n", emp.da);
    printf("HRA: %.2f\n", emp.hra);
    printf("Gross Salary: %.2f\n", emp.gross);
    
    return 0;
}

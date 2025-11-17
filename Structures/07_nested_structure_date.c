#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;
    
    printf("Yash - 125113002\n");
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);
    
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);
    
    return 0;
}

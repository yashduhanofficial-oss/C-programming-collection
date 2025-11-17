#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s, *ptr;
    ptr = &s;
    
    printf("Yash - 125113002\n");
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);
    
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    
    return 0;
}

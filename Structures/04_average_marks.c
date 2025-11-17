#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    float total = 0, average;
    struct Student students[100];
    
    printf("Yash - 125113002\n");
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll: "); scanf("%d", &students[i].roll);
        printf("Name: "); scanf("%s", students[i].name);
        printf("Marks: "); scanf("%f", &students[i].marks);
        total += students[i].marks;
    }
    
    average = total / n;
    printf("Average marks = %.2f\n", average);
    
    return 0;
}

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i, j;
    struct Student students[100], temp;
    
    printf("Yash - 125113002\n");
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll: "); scanf("%d", &students[i].roll);
        printf("Name: "); scanf("%s", students[i].name);
        printf("Marks: "); scanf("%f", &students[i].marks);
    }
    
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(students[j].roll > students[j+1].roll) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    
    printf("\nStudents sorted by roll number:\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", 
               students[i].roll, students[i].name, students[i].marks);
    }
    
    return 0;
}

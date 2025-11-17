#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i, max_index = 0;
    struct Student students[100];
    
    printf("Yash - 125113002\n");
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll: "); scanf("%d", &students[i].roll);
        printf("Name: "); scanf("%s", students[i].name);
        printf("Marks: "); scanf("%f", &students[i].marks);
        
        if(students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    
    printf("\nStudent with highest marks:\n");
    printf("Roll: %d, Name: %s, Marks: %.2f\n", 
           students[max_index].roll, students[max_index].name, students[max_index].marks);
    
    return 0;
}

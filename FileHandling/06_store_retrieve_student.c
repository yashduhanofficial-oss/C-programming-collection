#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int choice;
    
    printf("Yash - 125113002\n");
    
    printf("1. Store student record\n");
    printf("2. Retrieve student records\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if(choice == 1) {
        file = fopen("students.dat", "ab");
        printf("Enter roll: "); scanf("%d", &s.roll);
        printf("Enter name: "); scanf("%s", s.name);
        printf("Enter marks: "); scanf("%f", &s.marks);
        fwrite(&s, sizeof(s), 1, file);
        fclose(file);
        printf("Record stored successfully!\n");
    } else if(choice == 2) {
        file = fopen("students.dat", "rb");
        printf("Student Records:\n");
        while(fread(&s, sizeof(s), 1, file)) {
            printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
        }
        fclose(file);
    }
    
    return 0;
}

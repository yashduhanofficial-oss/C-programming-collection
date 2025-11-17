#include <stdio.h>

int main() {
    FILE *file;
    char text[100];
    
    printf("Yash - 125113002\n");
    file = fopen("output.txt", "w");
    
    if(file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);
    
    fprintf(file, "%s", text);
    fclose(file);
    
    printf("Text written to file successfully!\n");
    return 0;
}

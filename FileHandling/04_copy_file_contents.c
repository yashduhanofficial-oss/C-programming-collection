#include <stdio.h>

int main() {
    FILE *source, *target;
    char ch;
    
    printf("Yash - 125113002\n");
    source = fopen("source.txt", "r");
    target = fopen("target.txt", "w");
    
    if(source == NULL || target == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }
    
    fclose(source);
    fclose(target);
    
    printf("File copied successfully!\n");
    return 0;
}

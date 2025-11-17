#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float average;
    
    printf("Yash - 125113002\n");
    file = fopen("numbers.txt", "r");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    while(fscanf(file, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    
    if(count > 0) {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No numbers found in file!\n");
    }
    
    fclose(file);
    return 0;
}

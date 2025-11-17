#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    int arr[100];
    
    printf("Yash - 125113002\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    average = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}

#include <stdio.h>

float arrayAverage(int arr[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int n, i;
    int arr[100];
    
    printf("Yash - 125113002\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Average = %.2f\n", arrayAverage(arr, n));
    return 0;
}

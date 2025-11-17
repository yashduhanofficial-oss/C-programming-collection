#include <stdio.h>

int main() {
    int n, i, largest;
    int arr[100];
    
    printf("Yash - 125113002\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("Largest element = %d\n", largest);
    return 0;
}

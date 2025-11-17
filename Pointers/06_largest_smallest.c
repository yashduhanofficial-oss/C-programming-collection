#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;
    
    printf("Yash - 125113002\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    ptr = arr;
    int largest = *ptr;
    int smallest = *ptr;
    
    for(i = 0; i < n; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if(*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }
    
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    return 0;
}

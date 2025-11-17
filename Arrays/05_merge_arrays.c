#include <stdio.h>

int main() {
    int n1, n2, i, j;
    int arr1[100], arr2[100], merged[200];
    
    printf("Yash - 125113002\n");
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter first array elements: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter second array elements: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
    
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

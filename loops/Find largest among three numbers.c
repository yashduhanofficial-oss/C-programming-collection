#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Yash - 125113002\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a >= b) {
        if(a >= c) {
            printf("%d is largest\n", a);
        } else {
            printf("%d is largest\n", c);
        }
    } else {
        if(b >= c) {
            printf("%d is largest\n", b);
        } else {
            printf("%d is largest\n", c);
        }
    }
    
    return 0;
}
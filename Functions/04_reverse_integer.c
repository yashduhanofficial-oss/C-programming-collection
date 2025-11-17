#include <stdio.h>

int reverse(int n) {
    int rev = 0, remainder;
    while(n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    return rev;
}

int main() {
    int num;
    
    printf("Yash - 125113002\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Reverse of %d = %d\n", num, reverse(num));
    return 0;
}

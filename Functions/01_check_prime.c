#include <stdio.h>

int isPrime(int n) {
    int i;
    if(n <= 1) return 0;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    
    printf("Yash - 125113002\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isPrime(num)) {
        printf("%d is prime\n", num);
    } else {
        printf("%d is not prime\n", num);
    }
    
    return 0;
}

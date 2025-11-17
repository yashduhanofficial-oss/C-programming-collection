#include <stdio.h>

int main() {
    char source[100], target[100];
    char *s, *t;
    
    printf("Yash - 125113002\n");
    printf("Enter a string: ");
    scanf("%s", source);
    
    s = source;
    t = target;
    
    while(*s != '\0') {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
    
    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", target);
    return 0;
}

#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    int n, i;
    struct Book books[100];
    
    printf("Yash - 125113002\n");
    printf("Enter number of books: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i+1);
        printf("Title: "); scanf("%s", books[i].title);
        printf("Author: "); scanf("%s", books[i].author);
        printf("Price: "); scanf("%f", &books[i].price);
    }
    
    printf("\nBooks priced above 500:\n");
    for(i = 0; i < n; i++) {
        if(books[i].price > 500) {
            printf("Title: %s, Author: %s, Price: %.2f\n", 
                   books[i].title, books[i].author, books[i].price);
        }
    }
    
    return 0;
}

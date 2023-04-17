#include <stdio.h>
#define MAX_LEN 100

struct book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct book books[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter title, author, and price of book %d: ", i+1);
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }
    for (int i = 0; i < 5; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
   }
    return 0;
}


#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100
struct book {
    char title[50];
    char author[50];
    int year;
    float price;
};

struct book library[MAX_BOOKS];
int num_books = 0;
void add_book() {
        printf("The library is full, cannot add more books.\n");
        return;
    }
    printf("Enter book title: ");
    scanf("%s", library[num_books].title);
    printf("Enter book author: ");
    scanf("%s", library[num_books].author);
    printf("Enter book publication year: ");
    scanf("%d", &library[num_books].year);
    printf("Enter book price: ");
    scanf("%f", &library[num_books].price);
    num_books++;
    
    printf("Book added successfully.\n");
}
void display_book() {
    if (num_books == 0) {
        printf("The library is empty, cannot display any books.\n");
        return;
    }
    int index;
    printf("Enter the index of the book to display (0-%d): ", num_books-1);
    scanf("%d", &index);
    if (index < 0 || index >= num_books) {
        printf("Invalid index, please enter a number between 0 and %d.\n", num_books-1);
        return;
    }
    printf("Title: %s\n", library[index].title);
    printf("Author: %s\n", library[index].author);
    printf("Publication year: %d\n", library[index].year);
    printf("Price: %.2f\n", library[index].price);
}
void list_author_books() {
    if (num_books == 0) {
        printf("The library is empty, cannot list any books.\n");
        return;
    }
    char author[50];
    printf("Enter the author name: ");
    scanf("%s", author);
    int count = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].author, author) == 0) {
            // Display the book details
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Publication year: %d\n", library[i].year);
            printf("Price: %.2f\n", library[i].price);
            
            count++;
        }
    }
    if (count == 0) {
        printf("No books found for author %s");

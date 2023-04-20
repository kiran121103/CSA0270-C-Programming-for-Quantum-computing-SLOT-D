#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    int year;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int count;
};

void add_book(struct Library* library) {
    struct Book book;

    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = 0;

    printf("Enter book author: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = 0;

    printf("Enter book year: ");
    scanf("%d", &book.year);

    getchar(); // consume the newline character left in the input buffer

    if (library->count < MAX_BOOKS) {
        library->books[library->count++] = book;
        printf("Book added to library.\n");
    } else {
        printf("Library is full. Book not added.\n");
    }
}

void display_books(struct Library* library) {
    printf("%-30s%-30s%-10s\n", "Title", "Author", "Year");
    for (int i = 0; i < library->count; i++) {
        printf("%-30s%-30s%-10d\n", library->books[i].title, library->books[i].author, library->books[i].year);
    }
}

void list_books_by_author(struct Library* library) {
    char author[100];

    printf("Enter author name: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = 0;

    printf("%-30s%-30s%-10s\n", "Title", "Author", "Year");
    for (int i = 0; i < library->count; i++) {
        if (strcmp(library->books[i].author, author) == 0) {
            printf("%-30s%-30s%-10d\n", library->books[i].title, library->books[i].author, library->books[i].year);
        }
    }
}

void list_book_count(struct Library* library) {
    printf("There are %d books in the library.\n", library->count);
}

int main() {
    struct Library library = {0};

    int choice;

    do {
        printf("\n1. Add book\n");
        printf("2. Display books\n");
        printf("3. List books by author\n");
        printf("4. List book count\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        getchar(); 

        switch (choice) {
            case 1:
                add_book(&library);
                break;
            case 2:
                display_books(&library);
                break;
            case 3:
                list_books_by_author(&library);
                break;
            case 4:
                list_book_count(&library);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}


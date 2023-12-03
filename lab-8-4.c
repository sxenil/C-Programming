#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Library {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int isIssued;  // 0: Not Issued, 1: Issued
};

void addBook(struct Library books[], int *numBooks) {
    if (*numBooks < MAX_BOOKS) {
        printf("\nEnter book info:\n");
        printf("Accession Number: ");
        scanf("%d", &books[*numBooks].accessionNumber);

        printf("Title: ");
        scanf(" %[^\n]", books[*numBooks].title);

        printf("Author: ");
        scanf(" %[^\n]", books[*numBooks].author);

        printf("Price: ");
        scanf("%f", &books[*numBooks].price);

        books[*numBooks].isIssued = 0;  // Initialize as Not Issued
        (*numBooks)++;
        printf("Book added!\n");
    } else {
        printf("Library full. Cannot add more books.\n");
    }
}

void displayBooks(struct Library books[], int numBooks) {
    printf("\nBook Details:\n");
    for (int i = 0; i < numBooks; ++i)
        printf("%d %s %s %.2f %s\n", books[i].accessionNumber, books[i].title, books[i].author,
               books[i].price, books[i].isIssued ? "Issued" : "Not Issued");
}

void listBooksByAuthor(struct Library books[], int numBooks, const char targetAuthor[]) {
    int found = 0;
    printf("\nBooks by %s:\n", targetAuthor);
    for (int i = 0; i < numBooks; ++i)
        if (strcmp(books[i].author, targetAuthor) == 0) {
            printf("%s\n", books[i].title);
            found = 1;
        }
    if (!found)
        printf("No books found by %s\n", targetAuthor);
}

void listTitle(struct Library books[], int numBooks, int accessionNumber) {
    int found = 0;
    for (int i = 0; i < numBooks; ++i)
        if (books[i].accessionNumber == accessionNumber) {
            printf("Title of Book with Accession Number %d: %s\n", accessionNumber, books[i].title);
            found = 1;
        }
    if (!found)
        printf("Book with Accession Number %d not found.\n", accessionNumber);
}

void listBookCount(int numBooks) {
    printf("\nNumber of books in the library: %d\n", numBooks);
}

void listBooksByAccessionNumber(struct Library books[], int numBooks) {
    printf("\nBooks by Accession Number:\n");
    for (int i = 0; i < numBooks; ++i)
        printf("%d %s %s %.2f %s\n", books[i].accessionNumber, books[i].title, books[i].author,
               books[i].price, books[i].isIssued ? "Issued" : "Not Issued");
}

int main() {
    struct Library books[MAX_BOOKS];
    int numBooks = 0, choice;

    do {
        printf("\nMenu:\n1. Add 2. Display 3. List Author 4. List Title 5. Count 6. List Accession 7. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &numBooks);
                break;
            case 2:
                displayBooks(books, numBooks);
                break;
            case 3: {
                char targetAuthor[50];
                printf("Author: ");
                scanf(" %[^\n]", targetAuthor);
                listBooksByAuthor(books, numBooks, targetAuthor);
                break;
            }
            case 4: {
                int accessionNumber;
                printf("Accession Number: ");
                scanf("%d", &accessionNumber);
                listTitle(books, numBooks, accessionNumber);
                break;
            }
            case 5:
                listBookCount(numBooks);
                break;
            case 6:
                listBooksByAccessionNumber(books, numBooks);
                break;
            case 7:
                printf("Exiting. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Enter a valid option.\n");
        }
    } while (choice != 7);

    return 0;
}

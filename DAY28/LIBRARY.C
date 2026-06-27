#include <stdio.h>

int main()
{
    int bookId, status;
    char bookName[50], authorName[50];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", bookName);

    printf("Enter Author Name: ");
    scanf("%s", authorName);

    printf("Is the book issued?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Enter your choice: ");
    scanf("%d", &status);

    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Name   : %s\n", bookName);
    printf("Author Name : %s\n", authorName);

    if (status == 1)
        printf("Status      : Issued\n");
    else
        printf("Status      : Available\n");

    return 0;
}
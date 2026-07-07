#include <stdio.h>

struct Book
{
    int id;
    char name[30];
};

int main()
{
    struct Book b[5];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter Book %d Details\n", i+1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\n----- Library Books -----\n");

    for(i=0; i<n; i++)
    {
        printf("Book ID: %d\tBook Name: %s\n", b[i].id, b[i].name);
    }

    return 0;
}
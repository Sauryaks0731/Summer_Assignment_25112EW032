#include <stdio.h>
#include <string.h>

int main()
{
    int choice, i, n = 0;
    char name[10][30], search[30];
    long long mobile[10];

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n < 10)
                {
                    printf("Enter Name: ");
                    scanf("%s", name[n]);

                    printf("Enter Mobile Number: ");
                    scanf("%lld", &mobile[n]);

                    n++;

                    printf("Contact Saved Successfully!\n");
                }
                else
                {
                    printf("Contact List is Full!\n");
                }
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Contacts Found!\n");
                }
                else
                {
                    printf("\n----- CONTACT LIST -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d. %s - %lld\n", i + 1, name[i], mobile[i]);
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("No Contacts Found!\n");
                }
                else
                {
                    printf("Enter Name to Search: ");
                    scanf("%s", search);

                    for(i = 0; i < n; i++)
                    {
                        if(strcmp(search, name[i]) == 0)
                        {
                            printf("\nContact Found!\n");
                            printf("Name   : %s\n", name[i]);
                            printf("Mobile : %lld\n", mobile[i]);
                            break;
                        }
                    }

                    if(i == n)
                        printf("Contact Not Found!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
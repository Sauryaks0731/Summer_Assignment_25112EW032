#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a String: ");
    scanf("%s", str);

    do
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("String = %s\n", str);
                break;

            case 2:
                printf("Length = %d\n", strlen(str));
                break;

            case 3:
            {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                printf("Reverse = %s\n", temp);
                break;
            }

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
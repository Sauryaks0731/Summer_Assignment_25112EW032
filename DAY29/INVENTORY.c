#include <stdio.h>
#include <string.h>

int main()
{
    int choice, n = 0, i, searchId;
    int id[10], quantity[10];
    char name[10][30];
    float price[10];

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. View All Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n < 10)
                {
                    printf("Enter Product ID: ");
                    scanf("%d", &id[n]);

                    printf("Enter Product Name: ");
                    scanf("%s", name[n]);

                    printf("Enter Quantity: ");
                    scanf("%d", &quantity[n]);

                    printf("Enter Price: ");
                    scanf("%f", &price[n]);

                    n++;

                    printf("Product Added Successfully!\n");
                }
                else
                {
                    printf("Inventory Full!\n");
                }
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Products Found!\n");
                }
                else
                {
                    printf("\n----- PRODUCT LIST -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d. ID:%d | Name:%s | Qty:%d | Price:%.2f\n",
                               i+1, id[i], name[i], quantity[i], price[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("\nProduct Found!\n");
                        printf("ID   : %d\n", id[i]);
                        printf("Name : %s\n", name[i]);
                        printf("Qty  : %d\n", quantity[i]);
                        printf("Price: %.2f\n", price[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Product Not Found!\n");

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
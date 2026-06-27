#include <stdio.h>

int main()
{
    int choice;
    float a,b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Choice: ");
    scanf("%d",&choice);

    printf("Enter Two Numbers: ");
    scanf("%f%f",&a,&b);

    switch(choice)
    {
        case 1: printf("Answer = %.2f",a+b); break;
        case 2: printf("Answer = %.2f",a-b); break;
        case 3: printf("Answer = %.2f",a*b); break;
        case 4: printf("Answer = %.2f",a/b); break;
        default: printf("Invalid Choice");
    }

    return 0;
}
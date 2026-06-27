#include <stdio.h>

int main()
{
    int roll, age;
    char name[50], grade;
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Age         : %d\n", age);
    printf("Marks       : %.2f\n", marks);
    printf("Grade       : %c\n", grade);

    return 0;
}
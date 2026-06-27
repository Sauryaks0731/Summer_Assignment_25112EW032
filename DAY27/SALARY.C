#include <stdio.h>

int main()
{
    int id;
    char name[50];
    float basic, hra, da, total;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    total = basic + hra + da;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID   : %d\n", id);
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (10%%)      : %.2f\n", da);
    printf("Total Salary  : %.2f\n", total);

    return 0;
}
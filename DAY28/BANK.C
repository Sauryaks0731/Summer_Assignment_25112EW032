#include <stdio.h>

int main()
{
    int acc;
    char name[30];
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%ld",&acc);

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Balance: ");
    scanf("%f",&balance);

    printf("Enter Deposit Amount: ");
    scanf("%f",&deposit);
    balance = balance + deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f",&withdraw);

    if(withdraw<=balance)
        balance = balance - withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\n--- Account Details ---\n");
    printf("Account No : %ld\n",acc);
    printf("Name       : %s\n",name);
    printf("Balance    : %.2f",balance);

    return 0;
}
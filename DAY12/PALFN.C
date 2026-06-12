#include<stdio.h>

int palindrome(int n)
{
    int temp=n,rev=0,r;

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    if(temp==rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
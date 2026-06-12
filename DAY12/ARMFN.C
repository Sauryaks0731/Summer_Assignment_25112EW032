#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int temp=n,count=0,r,sum=0;

    while(temp>0)
    {
        count++;
        temp=temp/10;
    }

    temp=n;

    while(temp>0)
    {
        r=temp%10;
        sum=sum+pow(r,count);
        temp=temp/10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
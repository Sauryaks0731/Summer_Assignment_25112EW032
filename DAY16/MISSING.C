#include<stdio.h>

int main()
{
    int a[100],n,i,sum=0,total,miss;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    total=n*(n+1)/2;
    miss=total-sum;

    printf("Missing number = %d",miss);

    return 0;
}
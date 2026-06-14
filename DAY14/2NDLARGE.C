#include<stdio.h>

int main()
{
    int a[100],n,i,first,second;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    first=second=-9999;

    for(i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
    }

    printf("Second Largest = %d",second);

    return 0;
}
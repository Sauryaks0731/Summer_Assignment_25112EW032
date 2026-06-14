#include<stdio.h>

int main()
{
    int a[100],n,i,j=0,temp;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }

    printf("Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
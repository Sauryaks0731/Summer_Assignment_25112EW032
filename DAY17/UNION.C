#include<stdio.h>

int main()
{
    int a[100],b[100],n1,n2,i,j;

    printf("Enter first array size: ");
    scanf("%d",&n1);

    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter second array size: ");
    scanf("%d",&n2);

    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        printf("%d ",a[i]);

    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
                break;
        }

        if(j==n1)
            printf("%d ",b[i]);
    }

    return 0;
}
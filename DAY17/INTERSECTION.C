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

    printf("Common elements: ");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }

    return 0;
}
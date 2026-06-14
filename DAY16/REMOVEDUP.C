#include<stdio.h>

int main()
{
    int a[100],n,i,j;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Array: ");

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }

        if(i==j)
            printf("%d ",a[i]);
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int a[50],b[50],c[100],n1,n2,i;

    printf("Enter first array size: ");
    scanf("%d",&n1);

    printf("Enter elements: ");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter second array size: ");
    scanf("%d",&n2);

    printf("Enter elements: ");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        c[i]=a[i];

    for(i=0;i<n2;i++)
        c[n1+i]=b[i];

    printf("Merged array: ");
    for(i=0;i<n1+n2;i++)
        printf("%d ",c[i]);

    return 0;
}
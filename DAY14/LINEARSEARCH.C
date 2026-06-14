#include<stdio.h>

int main()
{
    int a[100],n,i,key,pos=-1;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            pos=i;
            break;
        }
    }

    if(pos==-1)
        printf("Not Found");
    else
        printf("Found at position %d",pos+1);

    return 0;
}
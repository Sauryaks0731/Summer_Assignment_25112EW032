#include<stdio.h>

int main()
{
    int a[100],n,i,key,low,high,mid,pos=-1;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter sorted elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            pos=mid;
            break;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    if(pos==-1)
        printf("Not Found");
    else
        printf("Found at position %d",pos+1);

    return 0;
}
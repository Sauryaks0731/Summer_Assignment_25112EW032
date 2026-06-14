#include<stdio.h>

int main()
{
    int a[100],n,i,j,count,max=0,ele;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }

        if(count>max)
        {
            max=count;
            ele=a[i];
        }
    }

    printf("Element = %d",ele);

    return 0;
}
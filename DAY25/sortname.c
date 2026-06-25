#include<stdio.h>
#include<string.h>

int main()
{
    char a[5][20],temp[20];
    int i,j,n;

    printf("Enter number of names: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%s",a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }

    printf("Sorted Names:\n");

    for(i=0;i<n;i++)
        printf("%s\n",a[i]);

    return 0;
}
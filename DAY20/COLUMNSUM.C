#include<stdio.h>

int main()
{
    int a[10][10];
    int i,j,r,c,sum;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<c;i++)
    {
        sum=0;
        for(j=0;j<r;j++)
            sum=sum+a[j][i];

        printf("%d\n",sum);
    }

    return 0;
}
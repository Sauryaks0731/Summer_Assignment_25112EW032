#include<stdio.h>

int main()
{
    int a[10][10];
    int i,j,n,lsum=0,rsum=0;

    printf("Enter order of matrix: ");
    scanf("%d",&n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n;i++)
    {
        lsum=lsum+a[i][i];
        rsum=rsum+a[i][n-1-i];
    }

    printf("Left Diagonal Sum = %d\n",lsum);
    printf("Right Diagonal Sum = %d",rsum);

    return 0;
}
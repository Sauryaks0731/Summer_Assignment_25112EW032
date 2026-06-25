#include<stdio.h>

int main()
{
    char str[100];
    int i,j;

    printf("Enter string: ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
                break;
        }

        if(i==j)
            printf("%c",str[i]);
    }

    return 0;
}
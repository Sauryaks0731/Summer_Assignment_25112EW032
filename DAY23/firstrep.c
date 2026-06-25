#include<stdio.h>

int main()
{
    char str[100];
    int i,j;

    printf("Enter string: ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                printf("%c",str[i]);
                return 0;
            }
        }
    }

    return 0;
}
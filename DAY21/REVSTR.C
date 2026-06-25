#include<stdio.h>

int main()
{
    char str[100];
    int i=0;

    printf("Enter string: ");
    scanf("%s",str);

    while(str[i]!='\0')
        i++;

    for(i=i-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}
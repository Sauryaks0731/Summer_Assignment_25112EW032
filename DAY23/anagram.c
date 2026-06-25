#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    int i,sum1=0,sum2=0;

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    for(i=0;s1[i]!='\0';i++)
        sum1=sum1+s1[i];

    for(i=0;s2[i]!='\0';i++)
        sum2=sum2+s2[i];

    if(sum1==sum2 && strlen(s1)==strlen(s2))
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
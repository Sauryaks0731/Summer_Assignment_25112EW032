#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],word[100],longest[100];
    int i=0,j=0,max=0;

    printf("Enter sentence: ");
    gets(str);

    while(1)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            word[j]='\0';

            if(j>max)
            {
                max=j;
                strcpy(longest,word);
            }

            j=0;

            if(str[i]=='\0')
                break;
        }
        else
            word[j++]=str[i];

        i++;
    }

    printf("%s",longest);

    return 0;
}
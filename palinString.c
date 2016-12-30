# ZohoEnrich
#include<stdio.h>
int main()
{
    char s[100];
    int len=0,i;
    int flag=0;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++);
    len=i;
    for(i=0;i<=len/2;i++)
    {
        if(s[i]!=s[(len-1)-i])
        {
            flag=1;
            break;
        }
    
    }
    if(flag==1)
    {
        printf(" not Palindrome String");
    }
    else
    {
        printf("Palindrome String");
    }
    return 0;
}

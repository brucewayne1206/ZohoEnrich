# ZohoEnrich
#include <iostream.h>
#include <stdio.h>
using namespace std;
bool notvowel(char ch)
{
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case ' ': return 0;
        default:  return 1;
    }
}
bool notsymbol(char ch)
{
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        return 1;
    else
        return 0;
}
int main() 
{
	char s[100],res[100];
	gets(s);
	int k=0;
	for(int i=0;s[i]!='\0';i++)
	{
	    if((notvowel(s[i])>0)&&(notsymbol(s[i])>0))
	    {
	        res[k++]=s[i];
	    }
	}
	res[k]='\0';
	puts(res);
	return 0;
}

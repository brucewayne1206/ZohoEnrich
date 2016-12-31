# ZohoEnrich
#include <stdio.h>
int main() 
{
	char s[100],t[100],tem;
	int i,len=0,j,rep=0,temp,cnt=1;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
	    for(j=i+1;s[j]!='\0';j++)
	    {
	        if(s[i]>s[j])
	        {
	            char t=s[i];
	            s[i]=s[j];
	            s[j]=t;
	        }
	    }
	}
	len=i;
	s[len]='0';
	s[len+1]='\0';
	for(i=1;i<=len;i++)
	{
		if(rep==2)
		{
			printf("\nNot a palindrome");
			break;
		}
		if(s[i]==s[i-1])
		{
			temp=cnt++;
		}
		else
		{
			if(cnt%2!=0)
			{
				tem=s[i-1];
				s[i-1]='0';
				rep++;
			}
			cnt=1;
		}
	}
	int nlen=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!='0')
			nlen++;
	}
	if(rep==1)
	{
		nlen++;
		t[nlen/2]=tem;
	}
	if(rep<2)
	{
		j=nlen-1;
		t[nlen]='\0';	
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]!='0')
			{
				t[nlen-1-j]=s[i];
				i++;
				t[j]=s[i];
				j--;
			}
		}
		printf("\n%s is a Palindrome",t);
	}
	return 0;
}

# ZohoEnrich
#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	char hexa[]="0x0000";
	char ch;
	int i=5;
	while(n>0)
	{
	    int r=n%16;
	    if(r<10)
	    {
	        ch=r+48;
	    }
	    else
	    {
	        ch=r+55;
	    }
	    n=n/16;
	    hexa[i--]=ch;
	}
	printf("%s",hexa);
}

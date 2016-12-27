# ZohoEnrich

#include <stdio.h>

int main(void) {
	// your code goes here
	int n,r,rev=0,mul=1;
	scanf("%d",&n);
	if(n>0)
	{
	    do
	    {
	        r=n%10;
	        rev=(rev*mul)+r;
	        mul*=10;
	        n/=10;
	    }while(n>0);
	    printf("\nReverse: %d",rev);
	}
	else
	    printf("\nWrong input");
	return 0;
}

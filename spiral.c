# ZohoEnrich
#include <stdio.h>

int main(void) {
	// your code goes here
	int a[20][20],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(i%2==0)
	        {
	            a[i][j]=(n*i)+j;
	        }
	        else
	        {
	            a[i][j]=(n*(i+1))-(1+j);
	        }
	        printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}

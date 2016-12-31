# ZohoEnrich
#include <stdio.h>

int main(void) {
    int n,num,cnt=0,i;
    printf("\nEnter the size: ");
    scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	printf("\nEnter the number to be searched: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
	    if(arr[i]==num)
	    {
	        cnt++;
	    }
    }
    printf("Count: %d",cnt);
	return 0;
}

# ZohoEnrich
#include<stdio.h>
void palindrome(int a[], int n)
{
	int i,j;
	int mid=(n%2)?(n/2):(n/2)-1;	
	for(i=0,j=n-1;i<n;i++,j--)
	{
		if(i<j)
		{
			if(a[i]<a[j])
			{
				a[j-1]++;
			}
			a[j]=a[j]==10?a[j]%10:a[i];
		}
		else if(j<i)
		{
			if(a[j]==10)
			{
				a[j-1]++;
				a[j]%=10;
			}
			a[i]=a[j];
		}
		if(a[mid]==10)
		{
			a[mid-1]++;
			a[mid]%=10;
		}
	
		printf("\n");
		for(int k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}	
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int n, a[10], size;
	scanf("%d",&n);
	int t=n+1;
	for(size=0;t>0;t/=10,size++);
	t=n+1;
	for(int i=0;t>0;i++)
	{
		a[size-1-i]=t%10;
		t=t/10;
	}
	palindrome(a,size);
	return 0;
}

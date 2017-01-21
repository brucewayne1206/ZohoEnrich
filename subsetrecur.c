# ZohoEnrich
#include<stdio.h>
#include<string.h>
int arr[100],n;
int subset(int i,int j)
{
	int newsub=1<<j;
	if(j<n)
	{
		if((i&newsub)!=0)
		{
			printf("%d ",arr[j]);
		}
		return subset(i,j+1);
	}
	return 0;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sub=1<<n;
	for(int i=0;i<sub;i++)
	{
		printf("{ ");
		subset(i,0);
		printf("}\n");
	}
	return 0;
}

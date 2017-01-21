# ZohoEnrich
#include<stdio.h>

int subset(int arr[],int n)
{
	int sub=1<<n;
	for(int i=0;i<sub;i++)
	{
		printf("{ ");
		for(int j=0;j<n;j++)
		{
			int newsub=1<<j;
			if((i&newsub)!=0)
			{
				printf("%d ",arr[j]);
			}
		}
		printf("}\n");
	}
	return 0;
}
int main()
{
	int arr[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	subset(arr,n);
	return 0;
}

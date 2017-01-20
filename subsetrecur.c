# ZohoEnrich
#include<stdio.h>
#include<string.h>
char arr[100];
int subset(int n,int i,int j)
{
	int newsub=1<<j;
	if(j<n)
	{
		if((i&newsub)!=0)
		{
			printf("%c ",arr[j]);
		}
		subset(n,i,j+1);
	}
	return 0;
}
int main()
{
	scanf("%s",arr);
	int size=strlen(arr);
	int sub=1<<size;
	for(int i=0;i<sub;i++)
	{
		printf("{ ");
		subset(size,i,0);
		printf("}");
	}
	return 0;
}

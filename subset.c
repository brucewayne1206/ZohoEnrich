# ZohoEnrich
#include<stdio.h>
#include<string.h>
int subset(char arr[])
{
	int n=strlen(arr);
	int sub=1<<n;
	for(int i=0;i<sub;i++)
	{
		printf("{ ");
		for(int j=0;j<n;j++)
		{
			int newsub=1<<j;
			if((i&newsub)!=0)
			{
				printf("%c ",arr[j]);
			}
		}
		printf("}\n");
	}
	return 0;
}
int main()
{
	char arr[100];
	scanf("%s",arr);
	subset(arr);
	return 0;
}

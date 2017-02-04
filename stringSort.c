# ZohoEnrich
#include<stdio.h>
#include<string.h>
int swap(char a[], char b[])
{
	char t[10];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
	return 0;
}
int sort(char a[10][10],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int l1=strlen(a[i]);
			int l2=strlen(a[j]);
			//printf("l1:%d l2:%d a[i]:%s a[j]:%s\n",l1,l2,a[i],a[j]);
			if(l1>l2)
			{
				swap(a[i],a[j]);
			}
			else if(l2==l1)
			{
				for(k=0;a[i][k]!='\0';k++)
				{
					if(a[i][k]>a[j][k])
					{
						swap(a[i],a[j]);
						break;
					}
				}
				//printf("Equal Loop\n");
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%s\t",a[i]);
	return 0;
}
int main()
{
	char a[10][10];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	sort(a,n);
	return 0;
}

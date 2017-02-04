#include<stdio.h>
int isprime(int m,int n)
{
	int i;
	for(i=6;i<(n/2);i+=6)
	{
		//printf("\n %d %d - %d %d",i-1,i+1,m1,m2);
		if(m%(i-1)==0||m%(i+1)==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,m,j,flag=0;
	scanf("%d",&n);
	if(n==2)
	{
		printf("The next prime number is: 3");
		return 0;
	}
	if(n<2)
	{
		printf("The next prime number is: 2");
		return 0;
	}
	m=(6-(n%6))+n;
	printf("\n%d",n);
	for(j=m;j>0;j+=6)
	{
		flag=0;
		int m1=j-1;
		int m2=j+1;
		int flag=isprime(m1,n);
		if(flag!=0)
		{
			printf("The next prime is: %d",m1);
			break;
		}
		flag=isprime(m2,n);
		if(flag!=0)
		{
			printf("The next prime is: %d",m2);
			break;
		}
	}
	return 0;
}

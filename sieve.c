# ZohoEnrich
#include<stdio.h>
int main()
{
	int n,m,i,flag=2;
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
	n/=2;
	int m1=m-1;
	int m2=m+1;
	//printf("\n%d",m);
	for(i=6;i<n;i+=6)
	{
		//printf("\n %d %d - %d %d",i-1,i+1,m1,m2);
		if(m1%(i-1)==0||m1%(i+1)==0||(m1%2==0)||(m1%3)==0)
		{
			flag=1;
			break;
		}
		if(m2%(i-1)==0||m2%(i+1)==0||(m2%2==0)||(m2%3)==0)
		{
			flag=2;
			break;
		}
	}
	if(flag==1)
	{
		printf("The next prime is: %d",m2);
	}
	else
	{
		printf("The next prime is: %d",m1);
	}
	return 0;
}

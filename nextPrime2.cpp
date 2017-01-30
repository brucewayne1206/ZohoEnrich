# ZohoEnrich
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n,a[1000],k,i;
	cin>>n;
	int size=2*n;
	int lim=sqrt(size);
	for(i=0;i<size;i++)
	{
	    a[i]=i+2;
	}
	for(i=0;(i<lim)&&(a[i]!=0);i++)
	{
	    for(int j=i+1;j<size;j++)
	    {
	        if(a[j]==n)
	        {
	            k=j;
	        }
	        if(a[j]%a[i]==0)
	        {
	            a[j]=0;
	        }
	    }
	}
	for(i=k+1;(i<size)&&(a[i]==0);i++);
	cout<<a[i]<<" "<<i<<" "<<k;
	return 0;
}

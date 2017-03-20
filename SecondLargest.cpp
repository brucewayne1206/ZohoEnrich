# ZohoEnrich
#include <iostream>
using namespace std;

int main() {
	int a[10];
	int n,max1=0,max2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    if((a[i]>max1)&&(a[i]%2==0))
	    {
	        max2=max1;
	        max1=a[i];
	    }
	    else if((a[i]>max2)&&(a[i]%2==0))
	    {
	        max2=a[i];
	    }
	    //cout<<a[i]<<" "<<max1<<" "<<max2<<"\n";
	}
	cout<<max2;
	return 0;
}

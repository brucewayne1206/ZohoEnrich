#include <iostream.h>
using namespace std;

int main() {
	int n,i=0,j,cnt=1,t;
	cin>>n;
	j=n/2;
	int arr[n][n];
	for(int k=0;k<n;k++)
	{
	    for(int l=0;l<n;l++)
	    {
	        arr[k][l]=0;
	    }
	}
	while(cnt<=n*n)
	{
	    cout<<i<<" "<<j<<"\n";
	    arr[i][j]=cnt++;
	    if(i-1<0)
	    {
	        t=j;
	        if(t+1==n)
	        {
	            t=-1;
	        }
	        if(arr[n-1][t+1]>=1&&arr[n-1][t+1]<=n*n)
            {
	           i++;
	        }
	        else
	        {
	            i=n-1;
	            j=t+1;
	        }
	    }
	    else
	    {
	        t=j;
	        if((t+1)==n)
	        {
	            t=-1;
	        }
	        if(arr[i-1][t+1]>=1&&arr[i-1][t+1]<=n*n)
            	{
	           i++;
	           if(i>=n)
	           {
	               i=0;
	           }
	        }
	        else
	        {
	            i=i-1;
	            j=t+1;
	        }  
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        cout<<arr[i][j]<<"\t";
	    }
	    cout<<"\n";
	}
	return 0;
}

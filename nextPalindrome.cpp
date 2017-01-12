# ZohoEnrich
#include <iostream>
using namespace std;

int main() {
    int n,r,i=0,temp,a[6],j,carry;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        a[i++]=r;
        n=n/10;
    }
    int size=i;
    n=0;
    i=0;
    j=size-1;
    while(j>=(size/2))
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        {
            a[i]++;
            if(a[j]/10>0)
            {
                a[j+1]=a[j+1]+1;
            }
            if(a[i]/10>0)
            {
                a[i+1]=a[i+1]+1;
            }
            a[i]=a[i]%10;
        }
    }
    for(j=0;j<size;j++)
    {
        n=(n*10)+a[j];
    }
    cout<<n<<" "<<temp;
	return 0;
}

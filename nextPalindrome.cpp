#include <iostream>
using namespace std;
int palindromecheck(int a[],int size)
{
    int flag=0,i,j;
    for(i=0,j=size-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        i=size/2;
        if(size%2==0)
        {
            j=i-1;
            a[j]++;
            if(a[j]/10>0)
            {
                a[j-1]++;
            }
            a[j]%=10;
        }
        a[i]++;
        if(a[i]/10>0)
        {
            a[i+1]++;
        }
        a[i]%=10;
    }
    return flag;
}
int palin(int a[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
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
}
int main() 
{
    int n,r,i=0,temp,a[6],j,flag;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        a[i++]=r;
        n=n/10;
    }
    int size=i;
    flag=palindromecheck(a,size);
    n=0;
    if(flag==1)
    {
        for(i=0;i<2;i++)
        {
            palin(a,size);
            if(a[size/2]/10>0)
            {
                a[(size/2)+1]++;
                a[size/2]%=10;
            }
        }
    }
    for(j=0;j<size;j++)
    {
        n=(n*10)+a[j];
    }
    cout<<n<<" "<<temp;
	return 0;
}

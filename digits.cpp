//ZohoEnrich
#include<iostream.h>

int main() 
{ 
  int n, r, sum=0, cnt=0; 
  cin>>n; 
  do 
  { 
    r=n%10; 
    n/=10; 
    cnt++; 
    sum+=r; 
  }while(n>0); 
  cout<<"\nCount: "<<cnt; 
  cout<<"\nSum: "<<sum; 
  return 0; 
}

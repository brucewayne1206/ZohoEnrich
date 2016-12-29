# ZohoEnrich
#include <iostream.h>
using namespace std;

int main()
{
    int num,temp,r,rev=0;
    cin>>num;
    temp=num;
    while(num>0)
    {
        r=num%10;
        rev=(rev*10)+r;
        num/=10;
    }
    if(temp==rev)
        cout<<"Palindrome";
   else 
        cout<<"Not Palindrome";
    return 0;
}

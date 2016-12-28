# ZohoEnrich
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long num,temp,r,power;
	int i,d;
	cout<<"\nEnter the 5 digit number: ";
	cin>>num;
	cout<<"\nEnter the number of times to be rotated: ";
	cin>>d;
	i=d%5;
	power=pow(10,5-i);
	temp=num%power;
	temp=temp*pow(10,i);
	temp=temp+(num/power);
	cout<<"\nThe reversed number: "<<temp;
	return 0;
}

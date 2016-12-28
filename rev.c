# ZohoEnrich
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long num,temp,r,power;
	int i,d;
	cin>>num;
	cin>>d;
	i=d%5;
	power=pow(10,5-i);
	temp=num%power;
	temp=temp*pow(10,i);
	temp=temp+(num/power);
	cout<<temp;
	return 0;
}

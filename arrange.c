#include <stdio.h>
#include <math.h>
int main() 
{
    int size=0,num,arr[20],temp,i,j;
    int original;
    scanf("%d",&num);
    original=num;
    while(num>0)
    {
        arr[size++]=num%10;
        num=num/10;
    }
    int mul=pow(10,size-1);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)        
        {    
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        num=num+(arr[i]*mul);
        mul/=10;
    }
    printf("%d",num);
	return 0;
}

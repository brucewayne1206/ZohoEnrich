#include <stdio.h>

int main() 
{
    int size=0,num,arr[20],temp;
    int original;
    scanf("%d",&num);
    original=num;
    while(num<0)
    {
        a[size++]=num%10;
        num=num/10;
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)        
        {    
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        num=(num*10)+arr[i];
    }
    printf("%d",num);

	return 0;
}

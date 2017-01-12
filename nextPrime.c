# ZohoEnrich
#include <stdio.h>

int prime(int n)
{
    int i;
    for(i=2;n%i!=0;i++)
    {
      printf("%d\n",i);
    }
    if(n==i) 
    {
         printf("\nNext prime: %d",n);
         return 1;
    }
    return 0;
}

int main()
{
    int n, i;
    scanf("%d",&n);
    i=n+1;
    while(1)
    {
        if(prime(i))
        {
            break;
        }
        i++;
    }
    return 0;
}

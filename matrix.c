# ZohoEnrich

#include<stdio.h>
void main()
{
    int r,c,i,j,k;
    scanf("%d",&r);
    scanf("%d",&c);
    scanf("%d",&k);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==k)
               a[i][j]=1;
            else 
               a[i][j]=0;
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

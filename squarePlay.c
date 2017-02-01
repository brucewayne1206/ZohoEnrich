# ZohoEnrich
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
void shell(int arr[4][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        printf("\n---------------------\n|");
        for(j=0;j<4;j++)
        {
            if(arr[i][j]==0)
            {
                printf("    |");
            }
            else if(arr[i][j]<10)
            {
                printf("  %d |",arr[i][j]);
            }
            else
            {
                printf(" %d |",arr[i][j]);
            }
        }
    }
    printf("\n---------------------");
}
int main()
{
	  clrscr();
	  int arr[4][4];
	  int i,j,cnt=0,m=0,n=0;
	  srand(time(NULL));
	  int r[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
          for (int i=15; i>0; i--)
          {
        	int j=rand()%(i+1);
        	int t=r[i];
        	r[i]=r[j];
        	r[j]=t;
    	  }
	  for(i=0;i<4;i++)
	  {
		  for(j=0;j<4;j++)
		  {
			  arr[i][j]=r[cnt++];
		  }
	  }
	  shell(arr);
	  char ch;
	  do
	  {
	     printf("\n\nU-up D-down L-left R-right Q-Quit\nEnter Your choice:");
	     ch=getch();
	     if((ch=='u'||ch=='U')&&(m!=3))
	     {
	        arr[m][n]=arr[m+1][n];
	        m++;
		      arr[m][n]=0;
	     }
	     if((ch=='d'||ch=='D')&&(m!=0))
	     {
	        arr[m][n]=arr[m-1][n];
	        m--;
		      arr[m][n]=0;
	     }
	     if((ch=='l'||ch=='L')&&(n!=3))
	     {
	        arr[m][n]=arr[m][n+1];
	        n++;
		      arr[m][n]=0;
	     }
	     if((ch=='r'||ch=='R')&&(n!=0))
	     {
	        arr[m][n]=arr[m][n-1];
	        n--;
		      arr[m][n]=0;
	     }
	     clrscr();
	     shell(arr);
	  }while(ch!='Q'&&ch!='q');
	  clrscr();
	  return 0;
}

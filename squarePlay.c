# ZohoEnrich
#include<stdio.h>
#include<conio.h>
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
	  for(i=0;i<4;i++)
	  {
		  for(j=0;j<4;j++)
		  {
			  arr[i][j]=cnt++;
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

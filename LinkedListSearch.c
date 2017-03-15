#include<stdio.h>
struct list 
{
   int data;
   struct list *next;
}node;

node *h = NULL;
node *p = NULL;

void insert(int n) 
{
   p->data = n;
   p->next = h;
   h = p;
}

int find(int n)
{
    p=h;
    int cnt=0;
    while(p->next==NULL)
    {
        cnt++;
        if(cnt==n)
        {
            p=p->next;
            printf("\nThe Value is: %d",p->data);
            return 1;
        }
        p=p->next;
    }
    return 0;
}
int main()
{
    int ch,n,ind,cnt=0;
	  printf("\n1. Create node\n2. Print Details\n Enter Choice: ");
    do
    {
        scanf("%d",&ch);
        if(ch==1)
        {
            int d;
            scanf("%d",&d);
            cnt++;
            insert(d);
        }
        else if(ch==2)
        {
            printf("Enter the number to be searched: ");
            scanf("%d",&n);
            if(n>cnt-1||n<0)
            {
                printf("\n Enter valid data");
            }
            else
            {
                find(n);
            }
        }
        
    }while(ch==1||ch==2);
    return 0;
}

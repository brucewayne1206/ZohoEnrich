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
    int cnt;
    while(p->next==NULL)
    {
        cnt++;
        if(p->data==n)
        {
            return cnt;
        }
        p=p->next;
    }
    return 0;
}
int main()
{
    int ch,n,ind;
	printf("\n1. Create node\n2. Print index\n Enter Choice: ");
    do
    {
        scanf("%d",&ch);
        if(ch==1)
        {
            int d;
            scanf("%d",&d);
            insert(d);
        }
        else if(ch==2)
        {
            printf("Enter the number to e searched: ");
            scanf("%d",&n);
            ind = find(n);
            if(ind == 0)
            {
                printf("\nData not Found");
            }
            else
            {
                printf("\nIndex : %d",ind);
            }
        }
        
    }while(ch==1||ch==2);
}

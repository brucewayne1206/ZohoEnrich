#include<stdio.h>
#include<stdlib.h>
struct node 
{
   int data;
   struct node *next;
};

struct node *h =(struct node*)malloc(sizeof(struct node*));

void insert(int n) 
{
    //if(h==NULL){
    //    h->data=n;
   //     h->next=NULL;
   // }
    //else{
    struct node *p =(struct node*)malloc(sizeof(struct node*));
    
   p->data = n;
   p->next = h;
   
    //return p;
    h=p;
    //}
    
    //if(h->next==NULL)
    //printf("\nHI");
    //else
    //printf("%d",h->next->data);
    //printf("%d",h->next->data);
}

int find(int n)
{
    struct node *p =(struct node*)malloc(sizeof(struct node*));
    p=h;
    int cnt=-1;
    //printf("%d",p->data);
    while(p!=NULL)
    {
        cnt++;
        //printf("%d",p->data);
        if(p->data==n)
        {
            return cnt;
        }
        p=p->next;
    }
    
    return cnt;
}
int main()
{
    int ch,n,ind;
    h=NULL;
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
            if(ind == -1)
            {
                printf("\nData not Found");
            }
            else
            {
                printf("\nIndex : %d",ind);
            }
        }
        
    }while(ch==1||ch==2);
    return 0;
}

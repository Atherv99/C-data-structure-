#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
   struct node *link;
}*p;
void main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);
}
void create(struct node*q,int n)
{
    struct node*q,*temp;
    if(q==NULL)
    {
        p=malloc(sizeof(struct node));
        p->data=n;
        p->link=NULL;
    }
    void disp(struct node *q)
    {
        while(q!=NULL)
        {
            printf("%d\t",q->data);
            q=q->link;
        }
        printf("\n");
    }

}

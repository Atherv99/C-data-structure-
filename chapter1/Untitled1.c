
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void main()
{
    int n;
    printf("Enter number of element\n");
     scanf("%d",&n);
     create(n);
    return 0;
}
 void create(int n)
 {
     struct node *head,*prev,*temp,*p;
     head=NULL;
     p=malloc(sizeof(struct node));
     scanf("%d",&p->data);
     p->link=NULL;
     head=p;
     display(head);
 }
 void display(head)
 {
     struct node *temp;
     temp=head;
     while(temp!=NULL)
     {
         printf("%d",temp->head);
         temp=temp->link;
     }
 }

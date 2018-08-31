
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void main()
{
    int n;
    scanf("%d",&n);
    append(n);
    display(n);

}

void append(int n)
{
    struct node *p,*temp,*head;
    head=NULL;
    if(head==NULL){
    p=malloc(sizeof(struct node));
    scanf("%d"&p->data);
    p->next=NULL;
    head=p;
    }
}
void display(int n)
{
    struct node *temp,*head;
    temp=head;
    if(temp!=NULL){
        temp=temp->next;
    }

}

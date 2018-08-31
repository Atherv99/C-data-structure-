#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    int n;
    printf("Enter the size of element\n");
    scanf("%d",&n);
    create(n);


}

void create(int n)
{   int i;
    struct node *head,*p,*prev;
    head=NULL;
    printf("Enter the element of link list\n");
    for(i=0;i<n;i++)
    {
    p=malloc(sizeof(struct node));
    scanf("%d",&p->data);

    p->next=NULL;
    if(head==NULL)
       head=p;
    else
        prev->next=p;
       prev=p;
    }
    display(head);
    count(head);
    addatbegin(head);
}

void display(int head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("There is no element to display\n");
    }
    temp=head;
    printf("Input element are:\n");
    while(temp!=NULL)
    {
       printf(" %d",temp->data);
       temp=temp->next;
    }
    printf("\n");
}
void count(int head)
{
    struct node*temp;
    int c=0;
    if(head==NULL)
    {
        printf("Link list is empty\n");
    }
    temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    printf("count=%d",c);
}
void addatbegin(int head)
{
    struct node*temp;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}


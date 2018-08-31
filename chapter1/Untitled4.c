#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};

void main()
{s
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    create(n);
}
void create(int n)
{
    struct node *head,*prev,*temp,*p;
    head=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    head=temp;
    display(head);
}
void display(head)
{
    struct node*temp;
    p=head;
    while(temp!=NULL)
    {
        printf("%d",p->data);
        p=p->link;
    }

}

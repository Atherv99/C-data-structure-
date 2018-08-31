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
    struct node *head,*p;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element of link list\n");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&head->data);
    }
    head->next=NULL;
}
void display(int *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
       printf("%d",temp->data);
       temp=temp->next;
}
}

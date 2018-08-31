#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node*next;
};
void main()
{
   int n;
   printf("Enter the size of element\n");
   scanf("%d",&n);
   create(n);

}
void create(int n)
{
    int i;
    struct node *head,*root,*prev;
    root=NULL;
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
    head=malloc(sizeof(struct node));
    scanf("%d",&head->data);
    head->next=NULL;
    if(root==NULL)
        root=head;
    else
        prev->next=head;
        prev=head;
    }
    display(root);
    }

void display(int root)
{
    struct node*temp;
    temp=root;
    printf("Input element are:\n");
    while(temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}


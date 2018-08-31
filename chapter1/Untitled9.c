#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void main()
{
    int n;
    printf("Enter the size of element\n");
    scanf("%d",&n);
    append(n);

}
void append(int n)
{
    int i;
    struct node *temp,*root;
    root=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp->data);
    }
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
        {
        struct node *p;
         p=root;
         while(p->right!=NULL)
         {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
        }
}

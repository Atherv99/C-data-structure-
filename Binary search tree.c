#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL,*t;
void main()
{
    int choice,k;
    while(1)
    {
    printf("1.Insertion of Binary search tree\n");
    printf("2.In-order\n");
    printf("3.Pre-order\n");
    printf("4.Post-order\n");
    printf("5.Search\n");
    printf("6.Delete\n");
    printf("7.Height of tree\n");
    printf("8.Find minimum and maximum\n");
    printf("9.Quit\n");

    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
            insert();
            break;
    case 2:  printf("Inorder_traversal\n");
             inorder(root);
             printf("\n");
             break;
    case 3: printf("Preorder_traversal\n");
            preorder(root);
            printf("\n");
            break;
    case 4: printf("Postorder\n");
            postorder(root);
            printf("\n");
            break;
    case 5: printf("Enter the node to be search\n");
            scanf("%d",&k);
            search(k);
            break;

    }

}
}
void insert()
{
    struct node*t,*current;
    int i,n;
    printf("Enter the size of BST\n");
    scanf("%d",&n);
    printf("Enter the node data\n");
    for(i=1;i<=n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&t->data);
        t->left=NULL;
        t->right=NULL;

        if(root==NULL)
        {
            root=t;

        }
        else
        {

           current=root;
           struct node *parrent;
            while(current)
            {
             parrent=current;
              if(t->data>current->data)
              {
                 current=current->right;
              }
              else
              {
                  current=current->left;
              }
            }
            if(t->data>parrent->data)
            {
                parrent->right=t;

            }
            else
            {
                parrent->left=t;

            }
        }
    }

}
void inorder(struct node *t)
{
    if(t->left)
    {
    inorder(t->left);
    }
    printf("%d ",t->data);
    if(t->right)
    {
    inorder(t->right);
    }

}
void preorder(struct node *root)
{

    if(root!=NULL)
     {
     printf("%d ",root->data);
     preorder(root->left);
     preorder(root->right);
     }

}
void postorder(struct node *root)
{

    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
void search(int k)
{
    struct node *p;
    p=root;

}


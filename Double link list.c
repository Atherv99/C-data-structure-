//WAP to Double link list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node*root=NULL;
void main()
{
    int choice,item,k,t;
    while(1)
    {
      printf("1.Create list\n");
      printf("2.Display\n");
      printf("3.Count\n");
      printf("4.Add_at_begin\n");
      printf("5.Add_at_end\n");
      printf("6.Add_after\n");
      printf("7.Add_before\n");
      printf("8.Search\n");
      printf("9.Delete\n");
      printf("10.reverse\n");
      printf("11.Quite\n");

      printf("Enter your choice\n");
      scanf("%d",&choice);

      switch(choice)
      {
      case 1:
        create();
        break;
      case 2:
        display();
        break;
      case 3:
        count();
        break;
      case 4:
        addatbegin();
        break;
      case 5:
      addatend();
      break;
      case 6:
          printf("Enter the element to be insert\n");
          scanf("%d",&k);
          printf("Enter the element after which to insert\n ");
          scanf("%d",&item);
          addafter(item,k);
          break;
      case 7:
           printf("Enter the element to be insert\n");
           scanf("%d",&k);
           printf("Enter the element before which to insert\n");
           scanf("%d",&item);
           addbefore(item,k);
           break;
    case 8:printf("Enter the element to be search\n");
           scanf("%d",&k);
           search(k);
           break;
    case 9: printf("Enter the element to be deleted\n");
            scanf("%d",&k);
            delete(k);
            break;
      case 10: reverse();
               break;
      case 11:
        exit(1);
      default :
        printf("Invalid input\n");
      }
    }
}
void create()
{
   int i,n;
   struct node *temp,*p;
   printf("Enter the size of link list\n");
   scanf("%d",&n);
   printf("Enter the element of link list\n");
   for(i=1;i<=n;i++)
   {
     temp=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&temp->data);
     temp->left=NULL;
     temp->right=NULL;
     if(root==NULL)
     {
         root=temp;
     }
     else
     {
         p=root;
         while(p->right!=NULL)
         {
             p=p->right;
         }
         temp->left=p;
         p->right=temp;
     }
   }
}
void display()
{
    struct node*temp;
    temp=root;
    printf("Input element\n");
    while(temp!=NULL)

    {
        printf("%d ",temp->data);
        temp=temp->right;
    }
    printf("\n");
}
void count()
{
    struct node*temp;
    int c=0;
    temp=root;
    while(temp!=NULL)
    {
        c++;
        temp=temp->right;

    }
    printf("count =%d",c);
   printf("\n");
}
void addatbegin()
{
    struct node*temp;
    temp=root;
    printf("Enter the element to be add at begin\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->right=root;
        root->left=temp;
        root=temp;
    }
}
void addatend()
{
    struct node *temp,*p;
    printf("Enter the element to be add at end\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
       root=temp;
    }
    else
    {
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
    }
}
void addafter(int item,int k)
{
    struct node *temp,*p;
    if(root==NULL)
    {
        printf("List is empty\n");
    }
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=k;
    p=root;
    while(p!=NULL)
    {
        if(p->data==item)
        {
            temp->left=p;
            temp->right=p->right;
            if(p->right!=NULL)
            {
                p->right->left=temp;
                p->right=temp;
                return ;
            }
            else
            {
              p->right=temp;
              temp->left=p;
              return;
            }
            }
            p=p->right;

        }
        printf("%d not found in link list\n",item);
        return ;
}
void addbefore(int item,int k)
{
    struct node *temp,*p;
    if(root==NULL)
    {
        printf("List is empty\n");
    }
    if(root->data==item)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=k;
        temp->left=NULL;
        temp->right=root;
        root->left=temp;
        root=temp;
        return;
    }
    p=root;
    while(p!=NULL)
    {
        if(p->right->data==item)
        {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=k;
          temp->left=p;
          temp->right=p->right;
          if(p->right!=NULL)
          {
              p->right->left=temp;
              p->right=temp;
              return;
          }

        }
        p=p->right;

    }
    printf("%d not found in link list\n",item);
    return;
}
void search(int k)
{
    struct node*temp;
    if(root==NULL)
    {
        printf("List is empty\n");
    }
    temp=root;
    int pos=1;
    while(temp!=NULL)
    {
       if(temp->data==k)
       {
           printf("%d found in link list at position %d\n",k,pos);
           return;
       }
       temp=temp->right;
       pos++;

    }
    printf("%d Not found in list",k);

}
void delete(int k)
{
    struct node *temp,*p;
    if(root==NULL)
    {
        printf("List is empty\n");
    }
    if(root->data==k)
    {
        temp=root;
        root=temp->right;
        free(temp);
        return;
    }//delete in between//
    p=root->right;
    while(p->right!=NULL)
    {
        if(p->data==k)
        {
          temp=p;
          p->left->right=temp->right;
          temp->right->left=p->right->left;
          free(temp);
          return;
        }
        p=p->right;
    }//delete last element//
       if(p->data==k)
       {
           temp=p;
           p->left->right=NULL;
           free(temp);
           return;
       }
}
void reverse()
{

    struct node *temp;
    temp=root;
    printf("Input reverse element\n");
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    root=temp;
}


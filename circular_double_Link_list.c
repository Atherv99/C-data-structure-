//circular double link list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
void main()
{
    int ch,k,item;
    while(1)
    {
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Count\n");
        printf("4.Add-at-Begin\n");
        printf("5.Add-at-End\n");
        printf("6.Delete\n");
        printf("7.Add-at-After\n");
        printf("8.Add-at-Before\n");
        printf("9.Search\n");
        printf("10.Quit\n");

        printf("Enter your choice\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: count();
                    break;
            case 4: printf("Enter the element to be insert at the begin in double link list\n");
                    scanf("%d",&k);
                    addatbeg(k);
                    break;
            case 5: printf("Enter the element to be insert at the end in the double link list\n");
                    scanf("%d",&k);
                    addatend(k);
                    break;
           case 6: printf("Enter the element to be delete from circular double link list\n");
                   scanf("%d",&k);
                   delete(k);
                   break;
           case 7: printf("Enter the element to be insert\n");
                   scanf("%d",&k);
                   printf("Enter the element after which element\n");
                   scanf("%d",&item);
                   addafter(item,k);
                   break;
           case 8: printf("Enter the element to be insert\n");
                   scanf("%d",&k);
                   printf("Enter the element to be insert before which element\n");
                   scanf("%d",&item);
                   addbefore(item,k);
                   break;
          case 9: printf("Enter the element to be search in circular double link list\n");
                  scanf("%d",&item);
                  search(item);
                  break;
          case 10: exit(1);
          default: printf("Invalid Input\n");
        }
    }
}
struct node*root=NULL;
void create()
{
    struct node*temp,*ptr;
    int i,n;
    printf("Enter the size of an double link list\n");
    scanf("%d",&n);
    printf("Enter the element of circular double link list\n");
    for(i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        temp->left=NULL;
        temp->right=NULL;
        if(root==NULL)
        {
            root=temp;
            temp->right=root;
        }
        else
        {
         ptr=root;
         while(ptr->right!=root)
         {
             ptr=ptr->right;
         }
         ptr->right=temp;
         temp->right=root;
        }
    }
}
void display()
{
    struct node*temp;
    temp=root;
    printf("Input element\n");
    do
    {
        printf("%d ",temp->data);
        temp=temp->right;
    }
    while(temp->right!=root->right);
    {
    }
    printf("\n");
}
void count()
{
    struct node *temp;
    int c=0;
    temp=root;
    do
    {
        temp=temp->right;
        c++;
    }
    while(temp->right!=root->right);
    {
    }
    printf("count %d",c);
    printf("\n");
}
void addatbeg(int k)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=k;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
        temp->right=root;
    }
    temp->right=root;
    root=temp;
    printf("\n");

}
void addatend(int k)
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=k;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
        temp->right=root;
    }
    ptr=root;
    while(ptr->right!=root)
    {
    ptr=ptr->right;
    }
    ptr->right=temp;
    temp->left=ptr;
    temp->right=root;

}
void delete(int k)
{
   struct node *temp,*ptr,*prev;
   ptr=root;
   if(root==NULL)
   {
       printf("Circular double link list is empty\n");
   }
   ptr=root;
   while(ptr->right!=root)
   {
       ptr=ptr->right;
   }
       temp=root;
       root=temp->right;
       ptr->right=temp->right;
       free(temp);
       return;

        ptr=root;
       while(ptr->right!=root)//delete mid element//
       {

           if(ptr->data==k)
           {
               temp=ptr;
               prev->right=temp->right;
               temp->right->left=ptr;
               free(temp);

           }
           prev=ptr;
           ptr=ptr->right;
       }

   ptr=root;//delete last element//
   while(ptr->right!=root)
   {
       if(ptr->right->data==k)
       {
         temp=ptr->right;
         ptr->right=temp->right;
         temp->left=NULL;
         free(temp);
       }
       ptr=ptr->right;
   }

}
void addafter(int item,int k)
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=k;
    temp->left=NULL;
    temp->right=NULL;
    ptr=root;
    while(ptr->right!=root)
    {
        if(ptr->data==item)
        {
         temp->right=ptr->right;
         ptr->right=temp;
         temp->left=ptr;
         return;
        }
        ptr=ptr->right;
    }
    if(ptr->data==item)
    {

    }
}
void addbefore(int item,int k)
{
  struct node *temp,*ptr;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=k;
  temp->left=NULL;
  temp->right=NULL;
  ptr=root;
  while(ptr->right!=root)
  {
      ptr=ptr->right;
  }
  if(root->data==item)
  {
      temp->right=root;
      root=temp;
      ptr->right=temp;
      return;
  }
  ptr=root;
  while(ptr->right!=root)
  {
      if(ptr->right->data==item)
      {
          temp->right=ptr->right;
          ptr->right=temp;
          temp->left=ptr;
          return;
      }
      ptr=ptr->right;
  }

}
void search(int item)
{
    struct node *ptr;
    ptr=root;
    int pos=1;
    while(ptr->right!=root)
    {
        if(ptr->data==item)
        {

            printf("%d Found at position at %d\n",item,pos);
            return;
        }
        pos++;
        ptr=ptr->right;
    }
    printf("%d Not found in circular double link list\n",item);

}


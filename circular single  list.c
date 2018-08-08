//WAP to circular single link list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;
void main()
{
    int ch,k,item;
    while(1)
    {
     printf("1.Create\n");
     printf("2.Add-at-End\n");
     printf("3.Add-at-Begin\n");
     printf("4.Delete\n");
     printf("5.Display\n");
     printf("6.Count\n");
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
      case 2: addatend();
              break;
      case 3: addatbegin();
              break;
      case 4: delete();
              break;
      case 5: display();
              break;
      case 6: count();
              break;
      case 7: printf("Enter the element to be insert at after\n");
              scanf("%d",&k);
              printf("Enter the element to be insert after which\n");
              scanf("%d",&item);
              addafter(item,k);
              break;
     case 8: printf("Enter the element to be insert at before\n");
             scanf("%d",&k);
             printf("Enter the element to be insert before which\n");
             scanf("%d",&item);
             addbefore(item,k);
             break;
     case 9: exit(1);

     default: printf("Invalid input\n");
     }
    }
}
void create()
{
    struct node*temp,*prev;
    int i,n;
    printf("Enter the size of circular single list\n");
    scanf("%d",&n);
    printf("Enter the element of the circular single list\n");
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            prev=root;
            while(prev->next!=root)
            {
               prev=prev->next;

            }
            prev->next=temp;

        }
        temp->next=root;
    }

}
void display()
{
    struct node *temp;
    temp=root;
    if(root==NULL)
    {
        printf("Empty circular single link list\n");
    }
    printf("Input element\n");
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=root);
    {

    }
    printf("\n");
}
void count()
{
    struct node*temp;
    int c=0;
    if(root==NULL)
    {
        printf("List is empty\n");
    }
    temp=root;
    do
    {
        c++;
        temp=temp->next;
    }
    while(temp!=root);
    {
    }
    printf("Count=%d",c);
    printf("\n");

}
void addatend()
{
    struct node*temp,*prev;
    printf("Enter the element to be inserted at end\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    if(root==NULL)
    {
        root==temp;
    }
    else
    {
        prev=root;
        while(prev->next!=root)
        {
            prev=prev->next;
        }
        temp->next=prev->next;
        prev->next=temp;
    }
       temp->next=root;
}
void addatbegin()
{
    struct node*temp,*prev;
    printf("Enter the element to be inserted at begin\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        prev=root;
        while(prev->next!=root)
        {
            prev=prev->next;
        }
        temp->next=root;
        root=temp;
        prev->next=root;
    }

}
void delete()
{
    struct node*temp,*prev,*ptr;
    int k;
    printf("Enter the element to be deleted\n");
    scanf("%d",&k);
    if(root==NULL)
    {
        printf("Empty list\n");
    }//delete first element//
         prev=root;
         ptr=root;
         while(prev->next!=root)
         {
             prev=prev->next;
         }

         temp=root;
         root=temp->next;
         prev->next=temp->next;
         free(temp);
         return;


    prev=root;//delete in between//
    while(prev->next!=root)
    {
        if(prev->data==k)
        {
            temp=prev;
            ptr->next=temp->next;
            free(temp);
            return;
        }
        ptr=prev;
        prev=prev->next;
    }

            prev=root;
              while(prev->next!=root)//delete the last element//
              {
                  ptr=prev;
                  prev=prev->next;
              }
                   temp=prev;
                   ptr->next=temp->next;
                   free(temp);
                   return;


}
void addafter(int item,int k)
{
  struct node *temp,*prev,*ptr;
  prev=root;
  while(prev->next!=root)
  {
      if(prev->data==item)
      {
       temp=(struct node*)malloc(sizeof(struct node));
       temp->data=k;
       temp->next=prev->next;
       prev->next=temp;
       return;
      }
      prev=prev->next;
  }
  if(prev->data==item)
  {
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=k;
      temp->next=prev->next;
      prev->next=temp;
      return;
  }
  printf("%d Not found in link list \n",item);

}
void addbefore(int item,int k)
{
    struct node *temp,*prev;

     prev=root;
     while(prev->next!=root)
     {
         prev=prev->next;
     }
    if(root->data==item)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=k;
        temp->next=root;
        root=temp;
        prev->next=temp;
        return;
    }
    prev=root;
    while(prev->next!=root)
    {
        if(prev->next->data==item)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=k;
            temp->next=prev->next;
            prev->next=temp;
            return;

        }
        prev=prev->next;
    }
    printf("%d Not found in link list\n",item);
    return;

}

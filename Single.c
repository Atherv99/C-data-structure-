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
    printf("1.Insertion\n");
    printf("2.Display\n");
    printf("3.Count\n");
    printf("4.Add_at_Begin\n");
    printf("5.Add_at_End\n");
    printf("6.Search\n");
    printf("7.Add_at_After\n");
    printf("8.Add_at_Before\n");
    printf("9.Reverse\n");
    printf("10.Delete\n");
    printf("11.Quit\n");

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
        case 4: addatbegin();
                break;
        case 5: addatend();
                break;
        case 6: printf("Enter the element to be search\n");
                scanf("%d",&k);
                search(k);
                break;
        case 7: printf("Enter the element to be insert at after \n");
                scanf("%d",&k);
                printf("Enter the element to insert after which element\n");
                scanf("%d",&item);
                addafter(item,k);
                break;
        case 8: printf("Enter the element to be insert at before\n");
                scanf("%d",&k);
                printf("Enter the element to be inserted at before which element\n");
                scanf("%d",&item);
                addbefore(item,k);
                break;
        case 9: reverse();
                break;
       case 10: printf("Enter the element to be deleted\n");
                scanf("%d",&item);
                delete(item);
                break;
       case 11: exit(1);
       default : printf("You have enter invalid number\n");
    }
    }
}
void create()
{
  struct node *temp,*p;
  printf("Enter the element of Single Link List\n");
      temp=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&temp->data);
      temp->next=NULL;
      if(root==NULL)
      {
          root=temp;
      }
      else
      {
          p=root;
          while(p->next!=NULL)
          {
              p=p->next;
          }
          p->next=temp;
      }
}
void display()
{
    struct node*temp;
    if(root==NULL)
    {

        printf("Link list is empty\n");
    }
    else
    {
       temp=root;
       printf("Input element\n");
       while(temp!=NULL)
       {

           printf("%d\n",temp->data);
           temp=temp->next;
       }

    }
}
void count()
{
    struct node*temp;
    int c=0;
    if(root==NULL)
    {

        printf("List is empty\n");
    }
    else
    {

        temp=root;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        printf("Count :%d\n",c);
    }
}
void addatbegin()
{
    struct node*temp;
    printf("Enter the element to be insert at begin \n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {

        temp->next=root;
        root=temp;
    }
}
void addatend()
{
    struct node*temp,*p;
    printf("Enter the element to insert at end\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
      p=root;
      while(p->next!=NULL)
      {

          p=p->next;
      }
      p->next=temp;

    }

}
void search(int k)
{
  struct node *temp;
  temp=root;
  int pos=1;
  while(temp!=NULL)
  {

      if(temp->data==k)
      {

          printf("%d found in the link list at position:%d\n",k,pos);
          return;
      }
      temp=temp->next;
      pos++;

  }
  printf("element not found in link list which you have searched\n");

}
void addafter(int item,int k)
{
  struct node *temp,*p;
  p=root;
  while(p!=NULL)
  {

      if(p->data==item)
      {
       temp=(struct node*)malloc(sizeof(struct node));
       temp->data=k;
       temp->next=p->next;
       p->next=temp;
       printf("successfully inserted\n");
       return;
      }
      p=p->next;
  }
       printf("%d Not found in link list\n",item);
       return;
  }
  void addbefore(int item,int k)
  {
    struct node *temp,*p;
    if(root->data==item)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=k;
        temp->next=root;
        root=temp;
        return;
    }
    p=root;
    while(p!=NULL)
    {
        if(p->next->data==item)
        {

            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=k;
            temp->next=p->next;
            p->next=temp;
            printf("Successfully inserted\n");
            return;
        }
        p=p->next;
    }
    printf("%d Not found in link list\n",item);
    return;
  }
  void delete(int item)
  {
     struct node *temp,*p,*t;
     if(root==NULL)
     {

         printf("List is empty\n");
         return;
     }
       if(root->data==item)
       {
            temp=root;
            root=temp->next;
            free(temp);
            printf("Successfully deleted\n");
            return;

       }
       p=root;
       while(p->next!=NULL)
       {
           if(p->next->data==item)
           {
             temp=p->next;
             p->next = temp->next;
             free(temp);
             printf("Successfully deleted\n");
             return;

           }
           p=p->next;

       }
}
void reverse()
{
    struct node *prev,*ptr,*temp;
    prev=NULL;
    ptr=root;
    while(ptr!=NULL)
    {
       temp=ptr->next;
       ptr->next=prev;
       prev=ptr;
       ptr=temp;

    }
    root=prev;
    printf("successfully reverse ");
    return;
}

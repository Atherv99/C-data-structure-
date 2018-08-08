/*WAP to single link list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*root=NULL;
void main()
{
    int choice,item,pos,k,t;
    while(1)
    {
    printf("1.Create link list\n");
    printf("2.Add_at_begin\n");
    printf("3.Add_at_end\n");
    printf("4.Display\n");
    printf("5.Count\n");
    printf("6.Search\n");
    printf("7.Add_at_After\n");
    printf("8.Delete\n");
    printf("9.Reverse\n");
    printf("10.Add_at_Before\n");
    printf("11.Bubble\n");
    printf("12.Quite\n");

    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        create();
        break;
    case 2:
        addatbegin();
        break;
    case 3:
        addatend();
        break;
    case 4:
        display();
        break;
    case 5:
        count();
        break;
    case 6:
        printf("Enter the element to be search\n");
        scanf("%d",&k);
        search(k);
        break;
    case 7:
        printf("Enter the element after which to insert :");
        scanf("%d",&k);
        printf("Enter the element  to be insert :");
        scanf("%d",&item);
        addafter(k,item);
        break;
    case 8:
        printf("Enter the  element of which to delete\n");
        scanf("%d",&k);
        delete(k);
        break;
    case 9:
        reverse();
        break;
    case 10:
        printf("Enter the element before which to insert\n");
        scanf("%d",&k);
        printf("Enter the element to be insert\n");
        scanf("%d",&item);
        addatbefore(k,item);
        break;
    case 11:
        bubble();
        break;
    case 12:
        exit(1);
    default :
        printf("You have enter invalid number\n");
    }
    }
}
void create()
{
    int i,n;
    struct node*temp,*prev;
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("Enter the element of link list\n");
    for(i=1;i<=n;i++)
    {
    temp =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        prev=root;
        while(prev->next!=NULL)
        {
            prev=prev->next;
        }
        prev->next=temp;
    }
    }

}
void addatbegin()
{
    struct node*temp;
    printf("Enter the element to insert at begin\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
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
    struct node*temp,*prev;
    printf("Enter the element to be inserted at the end\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        prev=root;
        while(prev->next!=NULL)
        {
            prev=prev->next;
        }
        prev->next=temp;
    }

}
void addafter( int item,int k)
{
    struct node*temp,*p;
    p=root;
    while(p!=NULL)
    {
        if(p->data==item)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=k;
            temp->next=p->next;
            p->next=temp;
            return ;
        }
        p=p->next;
    }
    printf("%d not found in list\n",item);
    return ;
}
void delete(int k)
{
    struct node*temp,*p;
    if(root==NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(root->data==k)
    {
        temp=root;
        root=temp->next;
        temp->next=NULL;
        free(temp);
    }
   p=root;
   while(p->next!=NULL)
   {
       if(p->next->data==k)
       {
           temp=p->next;
           p->next=temp->next;
           free(temp);
           return;
       }
       p=p->next;
   }
   printf("%d element not found in list\n",k);
   return;
}
void reverse()
{
    struct node*prev,*ptr,*node;
    prev=NULL;
    ptr=root;
    while(ptr!=NULL)
    {
        node=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=node;
    }
    root=prev;
    return;
}
void search(int item)
{
    struct node*p;
    p=root;
  int pos=1;
    while(p!=NULL)
    {
        if(p->data==item)
        {
            printf("Item %d found at position %d",item,pos);
            printf("\n");
            return ;

        }
        p=p->next;
        pos++;
    }
    printf("Item not found in list\n");

}
void display()
{

    struct node*temp;
    temp=root;
    printf("Input element\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
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
        temp=temp->next;
    }
    printf("Count=%d",c);
    printf("\n");
}
void addatbefore(int item,int k)
{
    struct node *p,*temp,*t;
    p=root;
    t=p->next;
    while(p!=NULL)
    {
        if(p->data==item)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data=k;
            temp->next=p;
            t->next=temp;
            return;
        }
        p=p->next;

    }
    printf("%d not found in link list",k);
    printf("\n");

}


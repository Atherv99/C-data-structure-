//WAP queue using link list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void main()
{
    int choice;
    while(1)
    {
    printf("1.Insertion of Queue\n");
    printf("2.Display\n");
    printf("3.Delete\n");
    printf("4.Quite\n");

    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        display();
        break;
    case 3:
        delete();
        break;
    case 4:
        exit(1);
        break;
    default :
        printf("Invalid Input\n");
    }
    }
}
void insert()
{
    struct node *temp;
    printf("Enter the element of Queue\n");
    temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(front==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }

}
void display()
{
    struct node*temp;
    temp=front;
    if(front==NULL)
    {
        printf("Nothing to display\n");

    }
    printf("Input element\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void delete()
{
    struct node*temp;
    temp=front;
    if(front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
    front=temp->next;
    free(temp);
    printf("Element is deleted successfully\n");
    }
}

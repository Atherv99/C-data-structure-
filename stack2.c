#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void main()
{
    int choice;
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Quite\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default :
            printf("Invalid input\n");
        }
    }

    printf("Link list using stack\n");
    push();

}
void push()
{
    struct node *temp;
    printf("Enter the node data\n");
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    top=temp;
    temp->next=top;
}
void pop()
{
    struct node*temp;
    if(top==NULL)
    {
        printf("Stack is Underflow\n");

    }
    else
    {
        temp=top;
        printf("Element to be delete: %d",temp->data);
        top=top->next;
        temp->next=NULL;
        free(temp);
        printf("\n");

    }
}
void display()
{
    struct node*temp;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        temp=top;
        printf("Input element\n");
        printf("%d\n",temp->data);
        while(temp!=NULL)
        {
            printf("%5d\n",temp->data);
            temp=temp->next;


        }
    }
}

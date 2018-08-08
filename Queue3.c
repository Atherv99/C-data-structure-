//WAP to circular Queue//
#include<stdio.h>
#define MAX 6
int CQ[MAX];
int front=0,rear=0,count=0;
void main()
{
    int choice;
    while(1)
    {
    printf("1.Insertion of  element in circular queue\n");
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
    default :
        printf("Invalid Input\n");
    }
    }
}
void insert()
{
    int data;
    if(count==MAX)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Enter the element of circular queue\n");
        scanf("%d",&data);
        CQ[rear]=data;
        rear=(rear+1);
        count++;
    }
}
void display()
{
    int i;
    if(front==rear)
    {
        printf("Circular Queue is empty\n");
    }
    else
    {
        printf("Input element\n");
        for(i=front;i<rear;i++)
        {
            printf("%d ",CQ[i]);
        }
    }
    printf("\n");
}
void delete()
{
    if(front==rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d element is deleted\n",CQ[front]);
        front++;
    }
    printf("\n");
}


#include<stdio.h>
#define MAX 6
int Q[MAX];
int rear,front;
void main()
{
    int choice;
    while(1)
    {
    printf("1.Insertion of Queue\n");
    printf("2.Deletion of element from Queue\n");
    printf("3.Display of all the element of Queue\n");
    printf("4.Quite\n");

    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(1);
        break;
    default :
        printf("Invalid input\n");
    }

}
}
void insert()
{
    int data;
    if(rear==MAX)
    {
        printf("Linear queue is full\n");
    }
    else
    {
        printf("Enter the element of Queue\n");
        scanf("%d",&data);
        Q[rear]=data;
        rear++;
        printf("Data inserted in the queue\n ");
    }
}
void delete()
{
    if(front==rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is deleted element %d",Q[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==rear)

    {
        printf("Nothing to be display\n ");
    }
    else
    {
        printf("Element in the Queue are\n");
        for(i=front;i<rear;i++)
        {
           printf("%d\n",Q[i]);
        }
    }
}


#include<stdio.h>
#include<stdlib.h>
# define MAX 6
int stack[MAX];
int top=0;
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
            break;
        default  :
            printf("You have entered wrong input\n");
        }

    }

}
void push()
{
    int data,i;
    if(top==MAX)
    {
        printf("Stack overflow\n");

    }
    else
    {
        printf("Enter the element\n");
        scanf("%d",&data);
        stack[top]=data;
        top=top+1;
        printf("Data pushed in stack\n");

    }
}
void pop()
{
    if(top==0)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("pop element is: %d",stack[--top]);
    }
    printf("\n");
}
void display()
{
    int i;
    if(top==0)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("Stack element\n");
        for(i=0;i<top;i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}

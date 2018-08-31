#include<stdio.h>
int i,len,pos,num;
 int main()
{
int a[100];
void insert(int a[],int,int,int);
printf("Enter the integer to be read\n");
scanf("%d",&len);
printf("Enter the integer\n");
for(i=0;i<len;i++)
{

    scanf("%d",&a[i]);
}
printf("Enter integer to be inserted\n");
scanf("%d",*&num);
printf("Enter position in the array for insertion\n");
scanf("%d",&pos);
--pos;
insert(a,len,pos,num);
}
void insert (int a[],int len,int pos,int num)
{

    for(i=len;i>=pos;i--)
    {

        a[i+1]=a[i];
    }
    a[pos]=num;
    if(pos>len)
    {

        printf("insertion outside the array\n");
    }
    len++;
    printf("New array\n");
    for(i=0;i<len;i++)
    {

        printf("%d",a[i]);
    }
}

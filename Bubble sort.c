//WAP to Bubble sorted//
#include<stdio.h>
void main()
{
    int i,j,n,a[10],temp;
    printf("Enter the size of an array of Bubble sort\n");
    scanf("%d",&n);
    printf("Enter the element of an array of Bubble\n");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    printf("Bubble sorted element\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}

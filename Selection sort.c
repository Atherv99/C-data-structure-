//WAP to selection sort//
#include<stdio.h>
void main()
{
    int i,j,n,a[10],temp,small;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    printf("Enter the element of an array\n");
    for(i=1;i<=n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        small=i;
        for(j=i+1;j<=n;j++)
        {
            if(a[j]<a[small])
            {
                temp=a[j];
                a[j]=a[small];
                a[small]=temp;
                small=j;
            }

        }
    }
    printf("Output of selection sorted\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}

//WAP to linear search//
#include<stdio.h>
void main()
{
    int i,j,n,a[10],m;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    printf("Enter the element in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be search in array\n");
    scanf("%d",&m);
    int pos=0;
    for(i=0;i<n;i++)
    {
        pos++;
        if(a[i]==m)
        {
            printf("%d found at position at %d",m,pos);
            break;
        }

    }

}

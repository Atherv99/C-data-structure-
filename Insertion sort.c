 //WAP to insertion sort//
 #include<stdio.h>
 void main()
 {
     int i,j,n,a[10],temp,k;
     printf("Enter the size of an array\n");
     scanf("%d",&n);
     printf("Enter the element of an array\n");
     for(i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(j=1;j<=n;j++)
     {
         temp=a[j];
         k=j-1;
         while((k>0) && (a[k]>temp))
         {
           a[k+1]=a[k];
           k=k-1;
         }
         a[k+1]=temp;
     }
     printf("Insertion sort\n");
     for(i=1;i<=n;i++)
     {
         printf("%d",a[i]);
     }
 }

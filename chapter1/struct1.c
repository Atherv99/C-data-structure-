
#include<stdlib.h>
struct node{

   int data;
   struct node *next;

};
void main()
{    int n;

    scanf("%d",&n);
    create(n);


}
  void create(int n){

     struct node *head,*prev,*temp,*p;
      head=NULL;
      p=malloc(sizeof(struct node));
      scanf("%d",p->data);
      p->next=NULL;
      head=p;
      display(head);


  }



  void display(int head){

     struct node *temp;
     temp=head;
     while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
     }
  }

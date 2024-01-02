#include<stdio.h>
struct node
{
       int data;
       struct node *next;
};
int listmaker(struct node *head)
{
      struct node *slow=head,*fast=head;
      while(slow!=NULL && fast!=NULL && fast->next!=NULL)
      {
             slow= slow->next;
             fast=fast->next->next;
             if(slow==fast)
             {
                    return 1;
             }
      }
      return 2;
}
int main()
{
  struct node *head=NULL,*a=NULL,*b=NULL,*c=NULL;
  head=(struct node*)malloc(sizeof(struct node));
  a=(struct node*)malloc(sizeof(struct node));
  b=(struct node*)malloc(sizeof(struct node));
  c=(struct node*)malloc(sizeof(struct node));
  head->data=10;
  a->data=20;
  b->data=30;
  c->data=40;
  head->next=a;
  a->next=b;
  b->next=c;
  c->next=a;
  int num=listmaker(head);
  if(num==1)
  {
         printf("Cycle Yes");
  }
  else{
       printf("NO");
  }


    return 0;
}


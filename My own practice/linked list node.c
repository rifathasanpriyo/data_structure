#include<stdio.h>
struct node
{
       int data;
       struct node *next;
};
struct node *deleteI(struct node *head1,int pos)
{
      struct node *head=head1;

       int node=0;
       while(head!=NULL)
       {
              node++;
              if(node==pos)
              {
                 head->next=head->next->next;
              }
              head=head->next;
       }
       return head1;

};
insert(struct node *head,int valu,int pos)
{

   struct node *c,*temp=head;
   c=  (struct node*)malloc(sizeof(struct node)) ;
   c->data=valu;
   int node=0;
   while(temp!=NULL)
   {
          node++;
          if(node==pos)
          {

                c->next=temp->next;
                 temp->next=c;
          }


               temp=temp->next;

   }

    while(head!=NULL)
    {
           printf("%d->",head->data);
           head=head->next;
    }


};

void point(struct node *head)
{
       while(head!=NULL)
       {
              printf("%d->",head->data);
              head=head->next;
       }
       printf("\n");
}

int main()
{
  struct node *head=NULL,*a=NULL,*b=NULL,*newhead;
  head=(struct node*)malloc(sizeof(struct node));
  a=(struct node*)malloc(sizeof(struct node));
  b=(struct node*)malloc(sizeof(struct node));
  head->data=10;
  a->data=20;
  b->data=30;
  head->next=a;
  a->next=b;
  b->next=NULL;
  newhead=deleteI(head,1);
  point(newhead);
  newhead=insert(newhead,50,1);

  point(newhead);
  return 0;
}


#include<stdio.h>
struct node
{
       struct node *prev;
       int data;
       struct node *next;
};
struct node *addtoempty(struct node *head,int valu)
{
       struct node *temp=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
       temp->prev=NULL;
       temp->data=valu;
       temp->next=NULL;
       head=temp;
       return head;
};
struct node *addnodeFont(struct node *head,int valu)
{
       struct node *temp=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
       temp->prev=NULL;
       temp->data=valu;
       temp->next=head;
       head->prev=temp;
       head=temp;
       return head;
};
int main()
{
  struct node *head=NULL;
  head=addtoempty(head,85);
  head=addnodeFont(head,79);
  while(head!=NULL)
  {
         printf("%d,",head->data);
         head=head->next;
  }

  return 0;
}




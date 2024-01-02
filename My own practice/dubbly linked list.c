#include<stdio.h>
struct node
{
       struct node *prev;
       int data;
       struct node *next;
};
int main()
{
  struct node *head;
  head=(struct node*)malloc(sizeof(struct node));
  head->prev=NULL;
  head->data=45;
  head->next=NULL;
  while(head!=NULL)
  {
         printf("%d",head->data);
         head=head->next;
  }



  return 0;
}


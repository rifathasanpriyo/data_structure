#include<stdio.h>

struct node

{

    int data;

    struct node *next;

};
struct node *reverseF(struct node *head)
{
  struct node *fast=head,*slow=head;
  while(fast!=NULL&&slow!=NULL&&fast->next!=NULL)
  {
         fast=fast->next->next;
         slow=slow->next;
         if(fast==slow)
         {
                return 1;
         }
  }

return -1;


};

int main()

{

    struct node *a=NULL,*b=NULL,*c=NULL;

    a=(struct node*)malloc(sizeof(struct node));

    b=(struct node*)malloc(sizeof(struct node));

    c=(struct node*)malloc(sizeof(struct node));

    a->data=5;

    a->next=b;

    b->data=10;

    b->next=c;

    c->data=15;

    c->next=NULL;
  int re=reverseF(a);

if(re==1)
{
       printf("Yes");
}
else
{
       printf("NO");
}
    return 0;

}


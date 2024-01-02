#include<stdio.h>
struct node{
int data;
struct node *next;



};
struct node *revers(struct node *head)
{
       struct node *next=NULL,*current=head,*pre=NULL;
       while(current!=NULL)
       {
              next=current->next;
              current->next=pre;
              pre=current;
              current=next;


       }
       head=pre;
       return head;
};
void print(struct node *head)
{
       while(head!=NULL)
       {
              printf("%d",head->data);
              if(head->next!=NULL)
              {
                     printf("->");
              }
              head=head->next;

       }
}
int main()
{
       struct node *a=NULL,*b=NULL,*c=NULL,*head=NULL;
       a=(struct node*)malloc(sizeof(struct node));
       b=(struct node*)malloc(sizeof(struct node));
       c=(struct node*)malloc(sizeof(struct node));
       a->data=5;
       a->next=b;
       b->data=25;
       b->next=c;
       c->data=20;
       c->next=NULL;
 head=a;
       printf("Before Reverse\n");
       while(a!=NULL)
       {
              printf("%d",a->data);
              if(a->next!=NULL)
              {
                     printf("->");
              }
              a=a->next;

       }

       head=revers(head);
       printf("\nafter Reverse\n");
       print(head);
       return 0;
}


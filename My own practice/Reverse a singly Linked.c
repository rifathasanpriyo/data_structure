#include<stdio.h>
struct node
{
       int data;
       struct node *next;

};
struct node *creatlink(int a[],int size)
{
   struct node *head=NULL,*temp=NULL,*current=NULL;
   int i;
   for(i=0;i<size;i++)
   {
          temp=(struct node*)malloc(sizeof(struct node));
          temp->data=a[i];
          temp->next=NULL;
          if(head==NULL)
          {
                 head=temp;
                 current=temp;
          }
          else{

              current->next=temp;
              current=current->next;
          }

   }
   return head;
};
void reverse(struct node *head)
{
       struct node *pre=NULL,*current=head,*next=NULL;
       while(current!=NULL)
       {
              next=current->next;
              current->next=pre;
              pre=current;
              current=next;
       }
       head=pre;
       while(head!=NULL)
       {
              printf("%d,",head->data);
              head=head->next;
       }
}
int main()
{
   int a[]={10,15,20};
   struct node *head;

  head= creatlink(a,3);
reverse(head);


}

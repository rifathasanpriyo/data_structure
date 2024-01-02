#include<stdio.h>
#include<stdlib.h>
struct node{
int data;

struct node *next;
};
struct node *createlist(int a[],int size)
{
    struct node *head=NULL,*temp=NULL,*current=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    int i;
    for(i=0;i<size;i++)
    {
           temp=(struct node *)malloc(sizeof(struct node));
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
}

int main()
{
  int a[]={10,2,4,22,50};
  struct node *head;

  head=createlist(a,5);
  while(head!=NULL)
  {
         printf("%d,",head->data);
         head=head->next;
  }



  return 0;
}


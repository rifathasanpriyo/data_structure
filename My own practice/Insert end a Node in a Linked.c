#include<stdio.h>
struct node
{
       int data;
       struct node *next;
};
void insertend(struct node *head,int n)
{
       struct node *current=head;
       while(current->next!=NULL)
       {
              current=current->next;
       }

 struct node *temp=NULL;
 temp= (struct node*)malloc(sizeof(struct node)) ;
 temp->data=n;
 temp->next=NULL;
 current->next=temp;
 while(head!=NULL)
 {
        printf("%d,",head->data);
        head=head->next;
 }
}

struct node *creat(int arr[],int size)
{
       struct node *temp=NULL,*current=NULL,*head=NULL;
       int i;
       for(i=0;i<size;i++)
       {
              temp=(struct node*)malloc(sizeof(struct node));
              temp->data=arr[i];
              temp->next=NULL;
              if(head==NULL)
              {
                     head=temp;
                     current=temp;
              }
              current->next=temp;
              current=current->next;
       }
       insertend(head,100);
};
int main()
{
       int arr[]={1,2,3,4,6};
       creat(arr,5);
}


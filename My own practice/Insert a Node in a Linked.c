#include<stdio.h>
struct node
{
       int data;
       struct node *next;
};
void insert(struct node *head,int n)
{
 struct node *temp=NULL;
 temp= (struct node*)malloc(sizeof(struct node)) ;
 temp->data=n;
 temp->next=head;
 struct node *newhead=temp;
 while(newhead!=NULL)
 {
        printf("%d,",newhead->data);
        newhead=newhead->next;
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
       insert(head,500);
};
int main()
{
       int arr[]={1,2,3,4,6};
       creat(arr,5);
}

#include<stdio.h>
struct node
{
       int data;
       struct node *next;
};
struct node *nodemake(int arr[],int size)
{
       struct node *head=NULL,*temp=NULL,*current=NULL;
       for(int i=0;i<size;i++)
       {
              temp=(struct node*)malloc(sizeof(struct node));
              temp->data=arr[i];
              temp->next=NULL;
              if(head==NULL)
              {
                     head=temp;
                     current=temp;
              }
              else
              {
                     current->next=temp;
                     current=current->next;
              }
       }
       return head;
};
int searching(struct node *head,int n)
{
       int index=1;
       while(head!=NULL)
       {
              if(head->data==n)
              {
                     return index;
              }
              else{
                     index++;
                     head=head->next;
              }
       }
       return -1;
}
int main()
{
     struct node *head;
     int arr[]={1,4,3,2,5},n;
     head=nodemake(arr,5) ;
     scanf("%d",&n);
     printf("%d",searching(head,n));
}

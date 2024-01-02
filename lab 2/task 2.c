#include<stdio.h>
struct node
{
    int data;
    struct node *next;



};
struct node *insert(struct node *head,int position,int valu)
{
    struct node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        if(count==position)
        {
            struct node *newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=valu;
            newnode->next=temp->next;
            temp->next=   newnode;
        }
        temp=temp->next;
    }
    return head;

};
struct node *deletenode(struct node *head,int valu)
{
    struct node *newhead=(struct node*)malloc(sizeof(struct node));
    newhead->next=head;
    struct node *temp=newhead;
    while(temp->next!=NULL)
    {
        if(temp->next->data==valu)
        {
            temp->next=temp->next->next;
        }
        else
        {
            temp=temp->next;
        }
    }
    return newhead->next;
};
int print(struct node *head)
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
    printf("\n");
}
int main()
{
    struct node *a=NULL,*b=NULL,*c=NULL,*head=NULL;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    a->data=5;
    a->next=b;
    b->data=10;
    b->next=c;
    c->data=15;
    c->next=NULL;

    head=a;
    printf("Before Inster\n");
    while(a!=NULL)
    {
        printf("%d",a->data);
        if(a->next!=NULL)
        {
            printf("->");
        }
        a=a->next;

    }
    head= insert(head,2,25) ;
    printf("\nAfter 25 Inster\n");
    print(head);
    head=deletenode(head,10);
    printf("Delete 10 from node\n");
    print(head);
    head= insert(head,2,20) ;
    printf("After 20 Inster\n");
    print(head);
    head=deletenode(head,15);
    printf("Delete 15 from node\n");
    print(head);


    printf("\n\nFinal OUTPUT\n");
    print(head);
}


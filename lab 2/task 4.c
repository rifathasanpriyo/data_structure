#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
struct node *cycle(struct node *head)
{
    struct node *slow=head,*fast=head;
    while(slow!=NULL&&fast!=NULL&&fast->next!=NULL)
    {
        slow= slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return 0;
        }
    }
    return -1;
};
int main()
{
    struct node *a=NULL,*b=NULL,*c=NULL,*head=NULL;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    a->data=10;
    a->next=b;
    b->data=20;
    b->next=c;
    c->data=30;
    c->next=b;
    head=a;
    head=cycle(head);
    if(head==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

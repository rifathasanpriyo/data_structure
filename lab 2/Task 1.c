#include<stdio.h>
struct node
{
    int data;
    struct node *next;



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
    while(a!=NULL)
    {
        printf("%d",a->data);
        if(a->next!=NULL)
        {
            printf("->");
        }
        a=a->next;

    }
    return 0;
}

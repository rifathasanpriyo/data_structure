#include<stdio.h>
struct node1
{
    int data1;
    struct node1 *next1;
};
struct node1 *firstlink(int a1[],int size1)
{
    struct node1 *temp=NULL,*head1=NULL,*current=NULL;
    for(int i=0; i<size1; i++)
    {
        temp=(struct node1*)malloc(sizeof(struct node1));
        temp->data1=a1[i];
        temp->next1=NULL;
        if(head1==NULL)
        {
            head1=temp;
            current=temp;
        }
        else
        {
            current->next1=temp;
            current = current->next1;
        }
    }
    return head1;
};

struct node1 *secondlink(int a2[],int size2)
{
    struct node1 *temp=NULL,*head2=NULL,*current=NULL;
    for(int i=0; i<size2; i++)
    {
        temp=(struct node1*)malloc(sizeof(struct node1));
        temp->data1=a2[i];
        temp->next1=NULL;
        if(head2==NULL)
        {
            head2=temp;
            current=temp;
        }
        else
        {
            current->next1=temp;
            current = current->next1;
        }
    }
    return head2;
};
struct node1 *storted(struct node1 *head1,struct node1 *head2)
{
    struct node1 dummy;
    dummy.next1=NULL;
    struct node1 *newhead=&dummy;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data1 < head2->data1)
        {
            newhead->next1=head1;
            head1=head1->next1;
        }
        else
        {

            newhead->next1=head2;
            head2=head2->next1;
        }
        newhead=newhead->next1;
    }
    if(head1!=NULL)
    {
        newhead->next1=head1;
    }
    else if(head2!=NULL)
    {
        newhead->next1=head2;
    }
    return dummy.next1;
};
void print(struct node1 *head)
{
    while(head!=NULL)
    {
        printf("%d",head->data1);
        if(head->next1!=NULL)
        {
            printf("->");
        }
        head=head->next1;
    }
    printf("\n");
}
int main()
{
    int a1[]= {5,10};
    int a2[]= {7,12};
    struct node1 *head1,*head2,*head3;
    head1=firstlink(a1,2);
    print(head1);
    head2=secondlink(a2,2);
    print(head2);
    head3=storted(head1,head2);
    printf("\nAfter sorted\n");
    print(head3);

    return 0;
}


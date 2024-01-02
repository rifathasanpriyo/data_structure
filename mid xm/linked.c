#include <stdio.h>

struct Node{
    int value;
    struct Node * next;
};
struct Node *head = NULL;
struct Node *tail = NULL;

void firstNode(int v){
    struct Node *n =(struct Node*)malloc(sizeof(struct Node));
    n->value = v;//10
    n->next = NULL;
    head = n;
    tail = n;
}
void addNode(int v){
    struct Node *n =(struct Node*)malloc(sizeof(struct Node));

    tail->next = n;
    n->value = v;//30
    n->next = NULL;
    tail = n;
}
void printlist(){
    struct Node *temp;
    temp = head;
    int i ;
    while (temp !=NULL){
        printf("%d\t",temp->value);
        temp = temp->next;
        i++;
    }
    printf("\nTotal Node %d - Head : %d, Tail : %d",i,head->value,tail->value);
}
int main (){
    firstNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    printlist();
}

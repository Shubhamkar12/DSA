#include<stdio.h>
#include<stdlib.h>

//DEFNING STRUCTURE
typedef struct st{
    struct st* next;//STORING ADDRESS OF NEXT NODE
    struct st* prev;//STORING ADDRESS OF PREVIOUS NODE
    itn data;
}

node* createnode(int value)
void addend(node** head,node** tail,int value)
void addbegin(node** head,node** tail,int value);
void traversenext(node* head);
void traverseprev(node* tail);

int main()
{
    node *head=NULL, *tail=NULL;

    addend(&head,&tail,78);
    addend(&head,&tail,65);
    addend(&head,&tail,75);
    addend(&head,&tail,62);
    addbegin(&head,&tail,89);

    traverenext(head);
    traverseprev(tail);

    return 0;
    
}
node* createnode(int value)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data;
    temp->next->NULL;
    temp->prev->NULL;

    return temp;
    
}

void addend(node** head,node** tail,int value)
{
    node* newnode=createnode(value);
    if(*head==NULL)
    {
        *head=newnode;
        *tail=newnode;
        return;
    }
    newnode->prev=*tail;
    (*tail)->next=newnode;
    *tail=newnode;
}

void addbegin(node** head,node** tail,itn value)
{
    node* newnode=createnode(value);
    if(*head==NULL)
    {
        *head=newnode;
        *tail=newnode;
        return;
    }
    newnode->next=*head;
    (*head)->prev=newnode;
    *head=newnode;
}
void traversenext(node* head)
{
    while(head!=NULL)
    {
        printf("%d",head->data);
        head->next;
    }
    printf("\n");
}
void traverseprev(node* tail)
{
    while(tail!=NULL)
    {
        printf("%d",tail->data);
        tail=tail->prev;
    }
    printf("\n");
}
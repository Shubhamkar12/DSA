#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    Node *next;
    Node *prev;
    Node *ptrhead;
    Node *ptrtail;
    int value;
}Node;

void createnode(Node *ptrhead,Node *ptrtail,int value);
void addbegin(Node *ptrhead,int value);
void insertbetween(Node *ptrhead,Node *ptrtail,int value,int index);
void append(Node *ptrtail,int value);
void traversenext(Node *next);
void traverseprev(Node *prev);

int main()
{
    Node *head=NULL, *tail=NULL;

    append(&head,&tail,64);
    append(&head,&tail,23);
    append(&head,&tail,53);
    append(&head,&tail,21);
    addbegin(&head,&tail,90);
    insertbetween(&head,&tail,43,3);

    traverenext(ptrhead);
    traverseprev(ptrtail);

    return 0;
    
}
void createnode(Node *ptrhead,Node *ptrtail,int value)
{
    temp=(Node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
}

void addbegin(Node *ptrhead,int value)
{
    Node *newnode = createnode(value);

    if(ptrhead == NULL && ptrtail == NULL)
    {
        *ptrhead = newnode;
        *ptrtail = newnode;
    }
    newnode->next = *ptrhead;
    newnode->data = value;
    *ptrhead->prev = newnode;
    newnode->prev = NULL;
}

void append(Node *ptrtail,int value)
{
    Node *newnode = createnode(value);
    
    *ptrtail->next = newnode;
    newnode->prev = *ptrtail;
    newnode->data = value;
    newnode->next = NULL;
}

void insertbetween(Node *ptrhead,Node *ptrtail,int value,int index)
{
    Node *newnode = createnode(value);

    Node *p = *ptrhead;
    int i = 0;

    while(i != index-1)
    {
        p = p->next;
        i++;
    }
    newnode->next = p->next;
    p->next = newnode;
    newnode->data = value;
    newnode->prev = p;
}

void traversenext(Node *ptrhead)
{
    Node *p = *ptrhead;

    while(p != NULL)
    {
        printf("%d",p->data;)
        p = p->next;
    }
    printf("\n");
}

void traverseprev(Node *ptrtail)
{
    Node *q = *ptrtail;

    while(q != NULL)
    {
        printf("%d",q->data)
        q = q->next;
    }
    printf("\n");
}
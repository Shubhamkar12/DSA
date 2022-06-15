#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    Node *ptrhead
    Node *next;
    int value;
}Node;

int main()
{
    Node *ptrhead = NULL;

    append(&head,98);
    append(&head,76);
    addbegin(&head,23);
    addbegin(&head,75);
    addbegin(&head,52);
    insertafter(&head,54,2);
}

void createnode(Node *ptrhead,int value);
void append(int value);
void addbegin(Node *ptrhead,int value);
void insertafter(Node *ptrhead,int value);
void traverse(Node *ptrhead);


void createnode(Node *ptrhead,int value)
{
    temp=(Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
}

void append(Node *head,int value)
{
    Node *newnode = createnode(value);
    Node *p = *ptrhead;
    
    if(ptrhead == NULL)
    {
        *ptrhead = newnode;
    }
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = newnode;
    newnode->next = NULL;
}

void addbegin(Node *ptrhead,int value)
{
    Node *newnode = createnode(value);

    newnode->next = *ptrhead;
    ptrhead = newnode;
}

void insertbetween(Node *ptrhead,int value,int index)
{
    Node *newnode=createnode(value);

    Node *p = *ptrhead;
    int i = 0;

    while(i != index-1)
    {
        p = p->next;
        i++;
    }
    newnode->data = value;
    newnode->next = p->next;
    p->next = newnode;
}

void traverse(Node *ptrhead)
{
    Node *p = *ptrhead;
    while(p != NULL)
    {
        printf("%d",p->data);
        p->next;
    }
    printf("\n");
}




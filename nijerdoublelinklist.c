#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}

void main()
{
//INITIALISING THE NODES
node *head;
node *one = NULL;
node *two = NULL;
node *three = NULL;

//ALLOCATE MEMORY
one=(node*)malloc(sizeof(node));
two=(node*)malloc(sizeof(node));
three=(node*)malloc(sizeof(node));

//DATA FEEDING IN NODES
one->data = 1;
two->data = 2;
three->data = 3;

//CONNECTING NODES
one->next = two;
one->prev = NULL;

two->next = three;
two->prev = one;

three -> next = NULL;
three-> prev = two;

//SAVE ADDRESS OF FIRST NODE IN HEAD
head = one;

    void show(node *one,node *two,node *three);
    return 0;

}

void show(node)
{

printf("\n THE MIDDLE BLOCK OF FIRST NODE IS %d",node one->data);
printf("\n THE  MIDDLE BLOCK OF SECOND DATA IS %d",node two->data);
printf("\n THE  MIDDLE BLOCK OF THIRD DATA IS %d",node three->data);

printf("\n THE RIGHT BLOCK OF FIRST NODE IS %d",node one->next);
printf("\n THE RIGHT BLOCK OF SECOND IS %d",node one->next);
printf("\n THE RIGHT BLOCK OF THIRD NODE IS %d",node one->next);

printf("\n THE LEFT BLOCK OF FIRST NODE IS %d",node one->prev);
printf("\n THE LEFT BLOCK OF SECOND IS %d",node one->prev);
printf("\n THE LEFT BLOCK OF THIRD NODE IS %d",node one->prev);

}
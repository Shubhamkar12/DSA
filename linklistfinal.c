#include<stdio.h>
#include<stdlib.h>

//DEFINING A STRUCTURE
typedef struct st
{
    int data;
    struct node **ptrhead;
    struct node *next;
    struct node *nodedata;
}node;

//FIRST NODE 
void firstnode(node **ptrhead,node **next,node *nodedata)
{
    //ALLOCATE MEMORY
    firstnode = (node*)malloc(sizeof(node));

    //PUTTING DATA IN FIRSTNODE'S DATA PART
    firstnode->nodedata = data;
    //PUTTING ADDRESS OF NEXT NODE IN FIRST NODE
    firstnode->next = *secondnode;
    //AS THIS IS FIRST NODE SO PTRHEAD WIL POINT TO IT
    *ptrhead = firstnode;
}

//SECOND NODE
void secondnode(node *firstnode,node *next,node *nodedata)
{
    if(firstnode == NULL)
    {
        printf("\n IF FIRST NODE IS EMPTY HOW CAN IT BE THE SECOND NODE");
        return;
    }
    //ELSE ALLOCATE MEMORY ENTER DATA AND PUT NEXT NODE'S ADDRESS
    secondnode = (node*)malloc(sizeof(node));
    //PUT DATA
    secondnode->nodedata = data;
    //PUT NEXT NODE'S ADDRESS IN THE SECOND NODE NEXT PART
    secondnode->next = *thirdnode;
}

//THIRD NODE
void thirdnode(node *nodedata,node *next,node *firstnode,node *secondnode)
{
    if(firstnode && secondnode == NULL)
    {
        printf("IF FIRST AN SECOND NODE IS NULL HOW CAN IT BE THE THIRD NODE");
        return;
    }
    thirdnode = (node*)malloc(sizeof(node));
    thirdnode->nodedata = data;
    thirdnode->next = NULL;
}

//ADDING A NODE BEFORE FIRST NODE
void addbegin(node **ptrhead)
{
    temp = (node*)malloc(sizeof(node));
    temp->next = *ptrhead;
    *ptrhead = temp;
}

//ADDING A NEW NODE AT THE LAST AFTER THIRDNODE
void append(node **thirdnode,node *nodedata,node *next)
{
    fourthnode = (node*)malloc(sizeof(node));
    fourthnode->nodedata = data;
    fourthnode->next = NULL;
    //PUTTING FOURTH NODE'S ADDRESS IN THIRD NODE'S NEXT PART
    thirdnode->next = *fourthnode;
}

//ADDING A NODE BETWEEN TWO NODES
void insertafter(node *secondnode,node *thirdnode,node *next,node *nodedata)
{
    insafter=(node*)malloc(sizeof(node));
    //TO MAINTAIN THE LINK WE'RE PUTTING THIRD NODES ADDRRESS IN INSAFTER NODE'S NEXT 
    insafter->next=*thirdnode;
    //NOW TO HOLD PREVIOUS NODES WE'RE PUTTING INSAFTER'S NODE IN SECOND NODE'S NEXT
    secondnode->next=*insafter;
}
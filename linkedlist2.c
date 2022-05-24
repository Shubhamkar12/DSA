#include<stdio.h>
#include<stdlib.h>

//DEFINING STRUCTURE
typedef struct node
{
    int data;
    node* next;
};

//INSERTING A NEW NODE AT THE BEGGINING
void prevnode(node** head,int newdata)
{
    //ALLOCATE MEMORY
    node* newnode = (node*)malloc(sizeof(node));
    //PUTTING DATA IN NEWNODE
    newnode->data = newdata;
    //MAKE NEXT OF NEW NODE AS HEAD
    newnode->next = (*head);
    //MOVE THTE HEAD TO THE NEWLY CREATED NODE
    (*head) = newnode;
}

//INSERT A NODE AFTER GIVEN NODE
void insertafter(node* prevnode,int newdata)
{
    //CHECK IF THE PREVIOUS NODE IS NULL OR NOT
    if(prevnode==NULL)
    {
        printf("\n IF PREVIOUS NODE IS NULL HOW CAN YOU ENTER AFTER IT");
        return;
    }

    //ALLOCATE NEW NODE
    node* newnode=(node*)malloc(sizeof(node));

    //PUT DATA IN THE NEW NODE
    newnode->data=newdata;

    //MAKE NEXT OF NEW NODE AS NEXT OF PREVIOUS NODE
    newnode->next = prevnode->next;//NOT UNDERSTOOD

    //MOVE THE NEXT OF PREVIOUS NODE AS NEW NODE
    prevnode->next = newnode;//NOT UNDERSTOOD
}

//ADDING NODE AT THE END
void append(node** head,int newdata)
{
    //ALLOCATE MEMORY
    newnode=(node*)malloc(sizeof(node));
    
    //WILL BE USED LATER
    node* last=*head;
    
    //DATA INSERTION
    newnode->data=newdata;

    //THIS IS LAST NODE SO MAKE THE NEXT OF IT AS NULL
    newnode->next=NULL;

    //IF THE LINK LIST IS EMPTY MAKE THE LAST NODE AS HEAD
    if(head=NULL)
    {
        *head=newnode;
        return;
    }
    //ELSE TRAVERSE TILL LAST NODE
    else
    while(last->next!=NULL)
    {
        last=last->next;
    }
    
    //PRINTING ALL THE ELEMENTS OF THE LINK LIST
    void printlist(node* node)
    {
        while(node!=NULL)
        {
            printf("%d",node->data);
            node=node->next;
        }
    } 
}
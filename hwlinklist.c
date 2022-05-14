#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    int data;
    struct st* next;
}node;

node *createnode(int value)
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=value;//FIRST BLOCK MEIN VALUE KO GHUSAYE
    temp->next=NULL;//SECOND BLOCK MEIN NULL RAKH DIYE ADDRESS RAKHNE KE LIYE
    return temp;

}

void append(node *head,int value)
{
    node *temp;

    temp=createnode(value);//NODE CREATE HUA
    
    if(head == NULL)//AGAR HEAD NULL HAI
    head=temp;//TOH HEAD MEIN TEMP KO GHUSA DIYE

    if(head->next == NULL)//AGAR NEXT NULL HAI 
    {
        head->next=temp;//TOH NEXT MEIN TEMP KO GHUSA DIYE
    }

    if(head->next->next=NULL)//AND THE SAME PROCESS GOES ON TILL NO. OF DATA
    {
        head->next->next=temp;
    }
}

int main()
{
    node* head=NULL;

    append(head,28);
    return 0;
}
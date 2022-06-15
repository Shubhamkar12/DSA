#include<stdio.h>
#include<stdlib.h>

//DEFINING A STRUCTURE
typedef struct st
{
    int tos;
    int usize;
    int *arr;
}Stack;

//FUNCTIONS
void init(Stack *bucket,int usize);//ALLOCATING MEMORY
int isfull(Stack *bucket);//CHECKING WHETHER THE STACK IS FULL OR NOT
int isempty(Stack *bucket);//CHECKING WHETHER THE STACK IS EMPTY OR NOT
void push(Stack *bucket,int value);//PUSHING ELEMENTS INTO THE STACK
int pop(Stack *bucket);//POPPING OUT ELEMENTS FROM THE STACK
int peek(Stack *bucket);//VIEWING ONLY THE TOPMOST ELEMENT OF THE STACK

//DEFINING INIT FUNCTION
void init(Stack *bucket,int usize);
{
    bucket->arr = (int*)malloc(sizeof(int)*bucket->usize);//doubt
    bucket->size = usize;
    bucket->tos = -1;
}

//DEFINING ISFULL FUNCTION
int isfull(Stack *bucket)
{
    if(bucket.tos == bucket.size-1)//IF TOP OF STACK IS POINTING TO THE UPPERMOST ELEMENT OF THE STACK
    return 1;
    else
    return 0;
}

// DEFINING ISEMPTY FUNCTION
int isempty(Stack *bucket)
{
    if(bucket.tos == -1)//IF TOS IS POINTING TO THE LOWERMOST INDEX NO.
    return 1;
    else
    return 0;
}

//DEFINING PUSH FUNCTION
void push(Stack *bucket,int value)
{
    if(isfull(bucket))
    {
        printf("\n STACK OVERFLOW NO PLACE FOR ENTERING NEW ELEMENT");
        return -999;
    }
    bucket->tos++;//FIRSTLY INCREASING TOS INDEX NUMBER FROM -1 TO 0
    bucket->arr[bucket->tos]=value;//ELEMENT ENTERED
}

//POPPING OUT ELEMENT
int pop(Stack *bucket)
{
    int temp;//ELEMENT(VALUE) WILL BE STORED IN TEMP AND NOW TEMP WILL BE RETURNED
    if(isempty(bucket))
    {
        printf("\n STACK UNDERFLOW NOTHING IN STACK TO BE RETURNED");
        return -999;
    }
    temp = bucket->arr[bucket->tos];
    bucket->tos--;//MINUS BECAUSE ALL ELEMENTS ARE BELOW TOS
    return temp;
}

int peek(Stack *bucket)
{
    if(isempty(bucket))
    {
        printf("\n BUCKET IS EMPTY ");
        return -999;
    }
    return bucket->arr[bucket->tos];
}

//MAIN FUNCTION STARTS HERE
int main()
{
    Stack bucket;
    int usize;

    printf("\n ENTER THE SIZE OF BUCKET OR STACK : ");
    scanf("%d",&usize);
    
    init(&bucket,usize);

    push(&bucket,10);
    push(&bucket,20);
    push(&bucket,30);

    printf("\n %d",peek(&bucket));
    printf("\n %d",peek(&bucket));

    return 0;
}
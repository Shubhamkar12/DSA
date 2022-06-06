#include<stdio.h>
#include<stdlib.h>

//DEFINING A STRUCTURE
typedef struct st
{
    int *arr;
    int usize;
    int front;
    int rear;
}Queue;

//FUNCTIONS
void init(Queue *line,int usize);
int isempty(Queue *line);
int isfull(Queue *line);
void enqueue(Queue *line,int value);
int dequeue(Queue *line);

//ALLOCATING MEMORY
void init(Queue *line,int usize)
{
    line->arr=(int*)malloc(sizeof(int)* usize);//doubt
    line->size=usize;
    line->front=-1;
    line->rear=-1;
}

//DEFINING ISEMPTY FUNCTION
int isempty(Queue *line)
{
    if(line->front == -1 && line->rear == -1)
    return 1;
    else
    return 0;
}

//DEFINING ISFULL FUNCTION
int isfull(Queue *line)
{
    if(line->rear == line->size-1)
    return 1;
    else
    return 0;
}

//DEFINING ENQUEUE FUNCTION
void enqueue(Queue *line,int value)
{
    if(isfull(line) == 1)//NO ELSE STATEMENT
    {
        printf("\n QUEUE IS FULL NO PLACE FOR NEW ELEMENT");
        return;
    }
    if(line->front == -1)//NO ELSE STATEMENT
       line->front == 0;
       line->rear++; 
       line->arr[line->rear]=value;
}

//DEFINING DEQUEUE FUNCTION
int dequeue(Queue *line)
{
    int temp;
    if(isempty(line) == 1)
    {
        printf("\n QUEUE IS EMPTY");
        return -999;
    }
    else
    temp=(line->arr[line->front]);
    line=front++;
    
    return temp;
}

//DEFINING MAIN FUNCTION
int main()
{
    Queue line;
    int usize;

    printf("\n ENTER THE SIZE OF QUEUE : ");
    scanf("%d",&usize);

    init(&line,usize);//WHY

    enqueue=(&line,10);
    enqueue=(&line,20);

    printf("\n %d",dequeue(&line));
    printf("\n %d",dequeue(&line));

    return 0;
    
}
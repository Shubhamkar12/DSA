#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int *arr;
    int usize;
    int front;
    int rear;
}Queue;

void init(Queue *line,int usize);
int isfull(Queue *line);
int isempty(Queue *line);
void enqueue(Queue *line,int value);
int dequeue(Queue *line);

void init(Queue *line,int usize)
{
    line->arr = (int*)malloc(sizeof(int)* usize);
    line->size = usize;
    line->front = -1;
    line->rear = -1;
}

int isfull(Queue *line)
{
    if(line->rear == size-1)
    return 1;
    else
    return 0;
}

int isempty(Queue *line)
{
    if(line->front == -1 && line->rear == -1)
    return 1;
    else
    return 0;
}

void enqueue(Queue *line,int value)
{
    if(isfull(line) == 1)
    {
        printf("\n QUEUE IS FULL NO SPACE FOR NEW ELEMENTS");
        return;
    }
    if(front == -1)
    front == 0;
    line->rear++;
    line->arr[line->rear] = value;
}

int dequeue(Queue *line)
{
    int temp;
    if(isempty(line) == 1)
    {
        printf("\n QUEUE IS EMPTY ");
        return;
    }
    temp = line->arr[line->rear];
    line->front++;//VERY IMPORTANT STEP REMEMBER
    return temp;
}
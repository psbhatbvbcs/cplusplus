//
// Created by prana_p9lsmih on 01-12-2022.
//
#include<stdio.h>
#include<stdlib.h>
#define SIZE 30
struct queuetest
{
    int f;
    int r;
    int items[SIZE];
};

typedef struct queuetest queue;

int isfull(queue);
int isempty(queue);
void enqueue(queue *, int);
int dequeue(queue *);
void display(queue);
queue createqueue();

queue createqueue()
{
    queue q;
    q.r = -1;
    q.f = 0;
    return q;
}

int isfull(queue q)
{
    if(q.r == SIZE-1)
    {
        return 1;
    }
    else
        return 0;
}

int isempty(queue q)
{
    if(q.f>q.r)
    {
        return 1;
    }
    else
        return 0;
}

void enqueue(queue *q, int element)
{
    if(isfull(*q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->r = q->r + 1;
        q->items[q->r] = element;
    }
}

int dequeue(queue *q)
{
    if(isempty(*q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        int del=q->items[q->f];
        q->f++;
        return del;
    }
}

void display(queue q)
{
    int i;
    if(isempty(q))
        printf("Queue is empty\n");
    else
    {
        printf("Queue is : \n");
        for(i = q.f;i<=q.r;i++)
        {
            printf("%d", q.items[i]);
        }
        printf("\n");
    }
}

int main()
{
    int i, ch, n, item, x;
    queue q;
    q=createqueue();
    while(1)
    {
        printf("1-Insert\n2-Remove Element\n3-Display\n4-Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        switch(ch)
        {


            case 1: printf("Enter the element to be inserted\n");
                scanf("%d",&item);
                enqueue(&q,item);
                break;

            case 2:x=dequeue(&q);
                if(x!=-1)
                {
                    printf("Removed Element is = %d\n",x);
                }
                break;

            case 3: display(q);
                break;

            case 4: exit(0);
                break;
        }
    }
}
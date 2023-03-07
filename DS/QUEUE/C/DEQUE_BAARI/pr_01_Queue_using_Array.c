#include <stdio.h>
#include <stdlib.h>
typedef struct q
{
    int size;
    int front;
    int rear;
    int *Q;

} Queue;

void create_Queue(Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void enqueue(Queue *q, int x)
{
    if (q->rear == q->size)
    {
        printf("Queue is Full");
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void Display(Queue q)
{
    if (q.front == q.rear)
    {
        printf("Queue is Empty");
        return;
    }

    for (int i = q.front + 1; i <= q.rear; i++)
        printf("%d  ", q.Q[i]);
    printf("\n");
}

int main()
{
    Queue q;
    int size;
    printf("Enter the size of the queue");
    scanf("%d", &size);
    create_Queue(&q, size);

    printf("Enter the elements to push in the queue ");
    for (int i = 0; i < q.size; i++)
    {
        int x;
        scanf("%d", &x);
        enqueue(&q, x);
    }

    Display(q);
    int del;
    printf("How many elements you want to delete ");
    scanf("%d", &del);

    for (int i = 0; i < del; i++)
    {
        printf("%d is deleted\n ", dequeue(&q));
    }

    Display(q);
    return 0;
}








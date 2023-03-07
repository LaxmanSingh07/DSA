#include <stdio.h>
#include <stdlib.h>
typedef struct q
{

    int size;
    int front;
    int rear;
    int *Q;
} Queue;

void create(Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void enqueue(Queue *q, int x)
{
    if (((q->rear + 1) % q->size) == q->front)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

void Display(Queue q)
{
    if (q.front == q.rear)
    {
        printf("<<<<<<<<<<<<<<<: Queue is empty :>>>>>>>>>>>>>>>>>>>\n");
        printf("SORRY! I can't print \n");
        return;
    }
    // my way
    //  for (int i = (q.front + 1) % q.size; i <= q.rear; i++)
    //  {
    //      printf("%d", q.Q[i]);
    //  }

    // baari way
    // else
    // {
    int i = q.front + 1;
    do
    {

        printf("%d", q.Q[i]);
        i = (i + 1) % q.size;

    } while (i != (q.rear + 1) % q.size);
    printf("\n");
}
// }

int main()
{

    Queue q;
    int size;
    printf("Enter the size of the queue\n");
    scanf("%d", &size);
    create(&q, size + 1);
    for (int i = 0; i < size; i++)
    {
        int data;
        printf("Enter the data: ");
        scanf("%d", &data);
        enqueue(&q, data);
    }
    Display(q);
    for(int i=0;i<size+2;i++)
    dequeue(&q);
    Display(q);
}

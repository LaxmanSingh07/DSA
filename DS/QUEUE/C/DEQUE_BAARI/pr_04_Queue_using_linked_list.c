#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

typedef struct q
{
    struct Node *front;
    struct Node *rear;
} Queue;

/*initalises data member*/
void initqueue(Queue *q)
{
    q->front = q->rear = NULL;
}

/*adds an element to the queue*/

void enqueue(Queue *q, int data)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));

    if (temp == NULL)
    {
        printf("Queue is full\n");

        return;
    }
    temp->data = data;
    temp->next = NULL;
    if (q->front == NULL)
    {
        q->rear = q->front = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = q->rear->next;
}

/*removes an element from the queue*/

int dequeue(Queue *q)
{
    struct Node *temp = NULL;

    if (q->front == NULL)
    {
        printf("Queue is empty\n");
        return 0;
    }
    int data = q->front->data;
    temp = q->front;
    q->front = q->front->next;

    free(temp);
    return data;
}

void print(Queue *q)
{
    struct Node *temp = q->front;
    while (temp != q->rear)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
/*deallocates Memory */
void del(Queue *q)
{
    struct Node *temp;
    if (q->front == NULL)
    {
        return;
    }
    while (q->front != NULL)
    {
        temp = q->front;
        q->front = q->front->next;
        free(temp);
    }
}
int main()
{
    Queue q;

    initqueue(&q);
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        enqueue(&q, i + 1);
    }
    print(&q);

    return 0;
}

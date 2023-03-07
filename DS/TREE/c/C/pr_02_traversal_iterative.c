#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"
struct Node *root = NULL;
void Tcreate()
{
    Node *p, *t;
    int x;
    Queue q;
    create(&q, 100);
    printf("Enter root value");
    scanf("%d", &x);
    root = (Node *)malloc(sizeof(Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (Node *)malloc(sizeof(Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter right child of %d", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (Node *)malloc(sizeof(Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void Ipreorder(Node *p)
{
    struct Stack stk;
    Stackcreate(&stk, 100);

    while (p || !isEmptyStack(stk))
    {
        if (p)
        {
            printf("%d ", p->data);
            push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            p = p->rchild;
        }
    }
}

void levorder(Node *p)
{
    Queue m;
    create(&m, 100);
    // printf("%d",root->data);
    enqueue(&m, root);

    while (!isEmpty(m))
    {
        root = dequeue(&m);
        printf("%d ", root->data);
        if (root->lchild)
        {
            // printf("%d",root->lchild->data);
            enqueue(&m, root->lchild);
        }
        if (root->rchild)
        {
            // printf("%d",root->rchild->data);
            enqueue(&m, root->rchild);
        }
    }
}
void Iinorder(Node *p)
{
    struct Stack stk;
    Stackcreate(&stk, 100);

    while (p || !isEmptyStack(stk))
    {
        if (p)
        {
            push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            printf("%d ", p->data);
            p = p->rchild;
        }
    }
}

int main()
{
    Tcreate();
    Ipreorder(root);
    printf("\n\n\n");
    Iinorder(root);
    printf("\n\n\n");
    levorder(root);

    return 0;
}
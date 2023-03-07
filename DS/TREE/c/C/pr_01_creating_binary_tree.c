#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
struct Node *root=NULL;

void Tcreate()
{
    Node *p,*t;
    int x;
    Queue q;
    create(&q,100);
    printf("Enter root value");
    scanf("%d",&x);
    root=(Node *)malloc(sizeof(Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while (!isEmpty(q))
    {
        p=dequeue(&q);
        printf("Enter left child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t=(Node *)malloc(sizeof(Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);

        }
           printf("Enter right child of %d",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t=(Node *)malloc(sizeof(Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);

        }
        

    } 
    
}

void preorder(Node *p){
    if(p){
        printf("%d",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int main(){
Tcreate();
preorder(root);


    return 0;
}
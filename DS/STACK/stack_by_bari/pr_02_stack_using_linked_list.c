#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("Stack in full\n");
        return ;
    }
    t->data=x;
    t->next=top;
    top=t;
}

int pop(){
    struct Node*t;
    int x=-1;
    if(top==NULL){
        printf("Stack Underflow");
        return -1;
    }
    else{
        t=top;
        top=top->next;
       x=t->data;
        free(t);

    }
    return x;


}


void Display(){
    struct Node *p;
    p=top;
    while (p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
    
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    Display();
    printf("%d",pop());
    printf("%d",pop());
    printf("%d",pop());
    return 0;

}
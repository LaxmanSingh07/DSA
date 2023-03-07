// input restricted Deque
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;

};
typedef struct dq{
    struct Node*front;
    struct Node*rear;
}Deque;

void initialization(Deque *q){
    q->front->next=NULL;
    q->rear->prev=NULL;
    q->front=NULL;
    
    q->rear=NULL;



}
void insertFromRear(Deque *q,int data){
      struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
        if(temp==NULL){
            printf("Deque is Full\n");
            return ;
        }
        temp->data=data;
        temp->prev=q->rear;
        q->rear->next=temp;
        temp->next=NULL;

        q->rear=temp;


        

}
void insertFromFront(Deque *q,int data){
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
        if(temp==NULL){
            printf("Deque is Full\n");
            return ;
        }
        temp->data=data;
        q->front->prev=temp;
        temp->prev=NULL;
        q->front=temp;


}
void push(Deque *head,int data,int opn){
        struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
        if(temp==NULL){
            printf("Deque is Full\n");
            return ;
        }
    if(head==NULL){
        temp->next=NULL;
        temp->prev=NULL;
    }

if(opn==1){
    insertFromFront(head,data);
}

else if(opn==2){
    insertFromRear(head,data);
}

}
void Display(Deque q){  
    struct Node* tra=q.front;
    while(tra){
        printf("%d ",tra->data);
        tra=tra->next;
    }
}
int main(){
Deque dq;
initialization(&dq);
push(&dq,10,1);
push(&dq,20,1);
push(&dq,30,1);
push(&dq,40,1);
push(&dq,50,1);
push(&dq,60,1);
push(&dq,70,1);

Display(dq);


    


}
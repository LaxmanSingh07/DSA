#include<stdio.h>
#include<stdlib.h>
// typedef struct Node
// {
//     struct Node* lchild;
//     struct Node* rchild;
//     int data;
// }Node;


typedef struct Stack{
    int size;
    int top;
    Node **S;
}Stack;


void Stackcreate(Stack *st,int size){
    st->size=size;
    st->top=-1;
    st->S=(Node **)malloc(st->size*sizeof(Node*));
    
    }



void push(Stack *st, Node *temp){
    if(st->top==st->size-1){
        printf("Stack is full");

    }
    else{
        st->top++;
        st->S[st->top]=temp;
    }
}
Node* pop(Stack *st){
    Node *x=NULL;
    if(st->top==-1){
        printf("Stack Underflow\n");
    }
    else{
        x=st->S[st->top--];

        
    }
    return x;
}

int isEmptyStack(Stack st){
    if(st.top==-1){
        return 1;
    }
    return 0;
}
int isFullStack(Stack st){
    if(st.top==st.size-1){
        return 1;
    }
    return 0;
}

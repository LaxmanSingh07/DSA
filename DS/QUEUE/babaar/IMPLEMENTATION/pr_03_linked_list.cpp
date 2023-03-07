#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
    Node* front;
    Node* rare;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    void enqueue(int x){
        Node*t=new Node(x);

        if(t==NULL){
            printf("Queue is full");
            return ;
        }
        t->data=x;
        if(front==NULL){
            front=rare=t;

        }
        
    }

    
};
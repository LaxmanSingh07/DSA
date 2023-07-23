#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public :
     int data;
     Node * next,*prev;

    Node()
    {
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;
    }
    Node(int data)
    {
        this->data=data;
        this->prev=this->next=nullptr;
    }
};

void print(Node *head){
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void getLen(Node *head)
{
    Node *temp=head;
    int count=0;
    while(temp!=nullptr)
    {
        count++;
        temp=temp->next;
    }
}

int main()
{

    Node *t1=new Node(10);
    Node *t2=new Node(20); 
    t1->next=t2;
    t2->prev=t1;  
    return 0;
}
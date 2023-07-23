#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node ()
    {
        this->data=0;
        this->next=nullptr;
    }
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

int main()
{
    Node * n1=new Node(10);
    Node * n2=new Node(20);
    Node * n3=new Node(30); 
    Node * n4=new Node(40);
    Node * n5=new Node(50);
    Node * n6=new Node(60);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;

    Node *head=n1;
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;


    return 0;
}



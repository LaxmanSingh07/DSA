#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = nullptr;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void insertAtHead(Node *&head,Node * &tail, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    if(head==nullptr)
    {
        tail=newNode;
    }
    head = newNode;
}

void insertAtTail(Node *&head,Node *&tail, int data)
{
    Node *newNode=new Node(data);
    if(tail==nullptr){
        tail=newNode;
        head = newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void insertAtGivenPosition(int pos,int data,Node * & head,Node * & tail)
{
    Node * newNode=new Node(data);
    if(head==nullptr)
    {
        head=tail=newNode;
        return;
    }
    Node * prev=head;
    while(prev && pos>1)
    {
        pos--;
        prev=prev->next;
    }

    if(prev==nullptr)
    {
        tail->next=newNode;
        tail=newNode;
        return ;
    }
    if(prev==head)
    {
        newNode->next=head;
        head=newNode;
        return;
    }

    newNode->next=prev->next;
    prev->next=newNode;

}
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    insertAtHead(head,tail, 3);
    insertAtHead(head,tail, 5);
    insertAtHead(head,tail, 7);
    insertAtTail(head,tail,774);
    insertAtGivenPosition(0,234,head,tail);

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}
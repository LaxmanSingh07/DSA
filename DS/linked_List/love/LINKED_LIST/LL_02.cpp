// doubly linked list 
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

//constructor
Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    cout<<"Memory free fro node with data"<<value<<" ";
    }
};

void deleteNode(int pos,Node *&head){
    //deleting first or start node 

    if(pos==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }

    // for middle or last node 

    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while (cnt<pos)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    
    
     curr->prev=NULL;
     prev->next=curr->next;
      
     curr->next=NULL;
     delete curr;

}
void insertAtTail(Node* &head,Node* & tail,int d ){
    Node* temp= new Node(d);
    if(tail==NULL){
        tail=temp;
        head=temp;
        return;
    }

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtHead(Node * &head,Node* &tail ,int d){
    // if list is empty
        Node *temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
        return;

    }
   
        temp->next=head;
        head->prev=temp;
        head=temp;
    
}


void insertAtposition(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        InsertAtHead(head,tail,d);
        return;
    }
    Node * temp=head;
    int cnt=1;
    while (cnt<pos)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node*r=new Node(d);
    r->next=temp->next;
    temp->next->prev=r;
    temp->next=r;
    r->prev=temp;
    
    
}

int getLength(Node *head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int main(){
    // Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    // cout<<getLength(head);
    InsertAtHead(head,tail,123);
    InsertAtHead(head,tail,11);
    InsertAtHead(head,tail,22);
    InsertAtHead(head,tail,33);
    print(head);
    // cout<<getLength(head);
    insertAtTail(head,tail,1234);
    insertAtposition(head,tail,3,1000);
    insertAtposition(head,tail,1,1100);
    insertAtposition(head,tail,7,456);
    print(head);
    return 0;

}
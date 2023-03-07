#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with ";
    }
};
// we take reference bcz we want actual change 
void InsertAtHead(Node *& head,int d){
    //new node create 
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

//insert at tail(end )

void InsertAtTail(Node* & tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    
}
//insert in middle

void InsertAtPostion(Node* &head,Node *&tail,int pos,int d){
    //insert at start
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node *temp =head;
    int cnt=1;
    while(cnt<pos-1)       
    {
        temp=temp->next;
        cnt++;
    }
    // insert at last postition
if(temp->next==NULL){
 InsertAtTail(tail,d);   
}
    Node* nodeToinsert =new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
    
}



//insert before the head (start)

void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}


void deleteNode(int pos,Node *& head){
    //deleting first node 
 if(pos==1){
    Node *temp=head;
    head=head->next;
    //memory free start 
    temp->next=NULL;
    delete (temp);
 }  
 else{
    //deleting any middle node or last 
    Node *curr=head;
    Node *prev=NULL;
    int cnt=1;
    while(cnt<pos)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete(curr);

    
 }  
}

int main(){

    Node *node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointer to node1

    Node *head=node1;
    Node *tail=node1;
    print(head);

    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,15);
    print(head);
    InsertAtTail(tail,1234);
    print(head);

    InsertAtPostion(head,tail,3,13);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(6,head);
    return 0;
}
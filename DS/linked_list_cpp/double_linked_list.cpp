#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node*prev;
    Node * next;
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

// gives length of Linked List
int getLength(Node *head){
    int len=0;
    Node* temp=head;
    while (temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,Node * &tail ,int d ){
    if(head=NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail,Node * &head,int d){
       if(tail=NULL){
        Node *temp=new Node(d);
        tail=temp;
        head=temp;
    }
 Node* temp=new Node(d);
 tail->next=temp;   
 temp->prev=tail;
 tail=temp;
}

void insertAtPosition(Node* & head,Node* & tail,int pos,int d){
    if(pos==1){
        insertAtHead(head,tail,d);
        return ;
    }
        

    Node *temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    // inserting at last postion
if(temp->next==NULL){
    insertAtTail(tail,head,d);
    return;
}
    //creatingg a node for d
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;


}

int main(){
// Node *node1=new Node(10);
// Node* head=node1;
// Node* tail=node1;
Node* head=NULL;
Node* tail=NULL;

insertAtHead(head,tail,10);
print(head);
insertAtHead(head,tail,1340);
print(head);
insertAtHead(head,tail,10123);
print(head);
insertAtTail(tail,head,0);
print(head);

insertAtPosition(head,tail,2,100);
print(head);
    return 0;
}
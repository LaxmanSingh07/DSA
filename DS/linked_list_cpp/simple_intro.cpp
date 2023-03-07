// linked list is collection of made 
// it is dynamic in nature we can go and shrink the size of theis 
// no memory wastage 
// delete and insert is easy 
// general types of linked list 
// 1. singly ll
// 2. doubly ll
// 3. circular ll
// 4. circular doubly ll



// singly linked list 

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    //constructur
    Node(int data ){
        this->data=data;
        this->next=NULL;
    }
};
void inserAtHead(Node* &head,int d){
    //creating a new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtLast(Node* tail,int d){
    Node* temp=new Node(d);

    tail->next=temp;
    tail=tail->next;//temp

}
void insertAtPosition(Node* tail,Node* head,int pos,int d){
  if(pos==1){
    inserAtHead(head,d);
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
    insertAtLast(tail,d);
    return;
}
    //creatingg a node for d
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;


}
int main(){
Node *node1=new Node(10);
// cout<<node1->data;
// cout<<node1->next;
Node* head=node1;
Node* tail=node1;
print(head);
inserAtHead(head,12);
print(head);
// inserAtHead(head,10);
// print(head);

insertAtLast(tail,7882);
print(head);
insertAtPosition(tail,head,4,22);
print(head);
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
    return 0;
}

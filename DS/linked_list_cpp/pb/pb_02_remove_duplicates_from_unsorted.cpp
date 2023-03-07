
#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node *next;


    Node(int data ){
        this->data=data;
        this->next=NULL;
    }
};
void inserAtHead(Node* &head,int d){
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
void insertAtLast(Node* &tail,int d){
    Node* temp=new Node(d);

    tail->next=temp;
    tail=tail->next;


}


// 4----->2----->5----->4---->2----->2----->2
//remove form random order
void delete_dulicate(Node* head){
    map<Node*,bool>visited;
    

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
    
if(temp->next==NULL){
    insertAtLast(tail,d);
    return;
}
    
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;


}
int main(){
Node *node1=new Node(10);

Node* head=node1;
Node* tail=node1;
print(head);
inserAtHead(head,12);
print(head);
// inserAtHead(head,10);
// print(head);



print(head);
insertAtPosition(tail,head,4,22);
print(head);
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
    return 0;
}

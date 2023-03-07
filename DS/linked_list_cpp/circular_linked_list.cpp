// circular liked list ;
// last node is pointing to the first node of the linked list 
// in circular liked list we only use tail pointer therer is not need of head bcz we can do all work using tail 


#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node"; 
    }
};


void insertNode(Node* &tail ,int element,int d){

    //empty list 
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        //non-empty list 

    //assuming that the element is present in the list
    Node* curr=tail;
    while(curr->data!=element){
        curr=curr->next;
    } 
    //element found --> curr is pointing on t

    Node* temp=new Node(d);
    temp->next=curr->next;
    curr->next=temp;
    }
}
void print(Node* tail){
    Node* temp=tail;
   do{
    cout<<tail->data<<" ";
    tail=tail->next;
   }while(tail!=temp);
cout<<endl;
}

void deleteNode(Node* &tail,int value){
//empty list 
if(tail==NULL){
    cout<<"list is empty,please check again"<<endl;
    return;
}
else{
    //non-empty

    //assuming that "value " is prsetn in the linked list 
    Node* prev=tail;
    Node* curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

}

int main(){
    Node *tail=NULL;
    //empt list me insert krre hain 
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    deleteNode(tail,3);
    print(tail);
}
 


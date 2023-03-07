// a linked list in which the last node will point on first node is known as the circular linked list 
// it can be of two type single cirular list 
// another type is 

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;


    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};

void insertNode(Node* &tail,int elem,int d){
    //assuming that the element is present in the list 

    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }

    else{

        //non-empty list 
        Node *curr=tail;

        while (curr->data!=elem)
        {
            curr=curr->next;
        }
        
        // element found -> curr is representing element wala node 

        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
     
}


// call by value only
void print(Node *tail){
    if(tail==NULL){
        cout<<"list is empty";
    }
    Node* temp=tail;
    

    // this is not valid when there is only one node in your linked list 
    // instead using while we should you the do whil loop ok.........................

 do{

        cout<<tail->data<<" ";
        tail=tail->next;
    }   while(tail!=temp);
}


void deleteNode(Node* &tail,int value){
    //empty list 
    if(tail==NULL){
        cout<<"List is empty please check again";
        return;
    }
    else{
        // non empty list 

        //assuming that "value is present in the linked list "
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        // for 1 node linked list 
        if(curr==prev){
            tail=NULL;
        }

        //>=2 Node linked list 
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}


int main(){

    Node * tail=NULL;

    // empty list me insert krre hai
    // insertNode(tail,5,3);
    // // print(tail);

    // insertNode(tail,3,100);
    // // print(tail);

    insertNode(tail,100,12134);
    // // print(tail);


    insertNode(tail,3,123456);
    // // print(tail);

    // deleteNode(tail,3);
    // deleteNode(tail,100);
    // deleteNode(tail,123456);
    deleteNode(tail,12134);

    print(tail);
    return 0;
}
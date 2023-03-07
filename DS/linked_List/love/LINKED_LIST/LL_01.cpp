// advantages ----> inseratoin and deletatoin
// linked list is a linear data structrue with the collection of nodes that's all

// advantages we can grow and shrink in the run time 


// types of linked list 

#include<iostream>
using namespace std;

class Node  {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value= this->data;
        //memory free 
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with dat "<<value<<endl;

    }
    };


void InsertAtHead(Node* &head,int d){
    

    //new node create
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
 
void InsertAtTail(Node* &tail,int d){
Node *temp=new Node(d);
tail->next=temp;
tail=tail->next; // or simply tail=temp;

}
void print(Node* &head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return ;
    }

    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
 }


void InsertAtPostion(Node* &head,Node* &tail,int position,int d){

//case for insert at start 
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;

    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    // inserting at last 
    if(temp->next==NULL){ 
        InsertAtTail(tail,d);
        return;

    }

    //creating a node for d 
    Node* nodeToInsert =new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

    
}

void deleteNode(int position,Node* & head,Node* &tail){
    //deleting firsst or start node 
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free start node 
        temp->next=NULL;
        delete temp;
        
    }
    else{
    //deleting any node (last also)
    Node* curr =head;
    Node* prev=NULL;

    int cnt=1;
    while (cnt<position)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr ;
    if(prev->next==NULL){
        tail=prev;
    }
    }
    
}
int main(){


    //created a new node 
    Node* node1= new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;


    //head pointed to node1;
    Node* head=node1;
    Node* tail=node1;
    print(head);
    

    // insert at head 
    InsertAtHead(head,12);
    InsertAtHead(head,78);
    InsertAtHead(head,100);
    print(head);
    InsertAtTail(tail,1234);
    print(head);

    InsertAtPostion(head,tail,3,22);
    //in the above insertAtposition there are also another cases we should take about them also 
    print(head);

    cout<<"head"<<head->data;
    cout<<"tail"<<tail->data;

    deleteNode(1,head,tail);
    deleteNode(5,head,tail);
    print(head);
       cout<<"head"<<head->data;
    cout<<"tail"<<tail->data<<" ";

    return 0;
}
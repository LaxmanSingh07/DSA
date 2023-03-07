//wap to reverse a linked list 

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
};


void insertAthead(Node* &head,int d){
    Node *temp=new Node(d);
    if(head==NULL){
        head=temp;
        return ;
    }

    Node* temp1=head;
    while((temp1->next)!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;




    
}

Node* kReverse(Node* &head,int k){
    //base case
    if(head==NULL){
        return NULL;
    }
    // step1:reverse first k nodes 
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    //step2: Recursive approach
    if(next!=NULL){
        head->next=kReverse(next,k);

    }
    // step3: return head of reversed list 

    return prev;
}

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main(){
    cout<<"Enter the total no of nodes ";
    int n;
    cin>>n;
    Node* head=NULL;
    int d;
    for(int i=0;i<n;i++){
        cout<<"Ente the"<<i+1<<"th element";
        cin>>d;
        insertAthead(head,d);
    }
    print(head);
    cout<<endl;
   
    head=kReverse(head,2);
    print(head);
    
    return 0;
}
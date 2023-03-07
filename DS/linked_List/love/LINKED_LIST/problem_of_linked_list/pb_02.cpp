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
   
    print(head);
    
    return 0;
}